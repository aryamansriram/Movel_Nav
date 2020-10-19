#!/usr/bin/env python
import rospy
from sensor_msgs.msg import PointCloud2
from sensor_msgs import point_cloud2
from visualization_msgs.msg import Marker
from geometry_msgs.msg import Point
from std_msgs.msg import ColorRGBA,String
import numpy as np
import random





def cluster(arr,iterations,n_clusters=2):
    """
    Finds clusters for a given n-d array
    :param arr: numpy array, consisting of depth from point cloud
    :param iterations: int, number of iterations to run the clustering algorithm for
    :param n_clusters: int, number of clusters, 2 by default
    :return: tuple of two lists which are clusters of points
    """
    # Initialize random clusters
    c1 = random.randint(0,len(arr)-1)
    c2 = random.randint(0,len(arr)-1)

    # Initialize centroids of those random clusters
    cent_1 = arr[c1]
    cent_2 = arr[c2]

    # For a given number of iterations build the given clusters
    for i in range(iterations):
        clus_1 = []
        clus_2 = []
        for ii,xyz in enumerate(arr):

            d1 = np.sum((xyz-cent_1)**2)
            d2 = np.sum((xyz - cent_2)**2)
            if d1 == min(d1,d2):
                clus_1.append(xyz)
            else:
                clus_2.append(xyz)
        cent_1 = sum(clus_1)/len(clus_1)
        cent_2 = sum(clus_2)/len(clus_2)

    return [clus_1,clus_2]


def get_dataset(gen):
    """

    :param gen: Generator object, generator of point cloud point's x,y and z co-ordinates
    :return: numpy array of x,y and z points
    """
    # Initialize x,y and z lists
    x = []
    y = []
    z = []
    # Iterate through generator to add points to the list
    for p in gen:
        x.append(p[0])
        y.append(p[1])
        z.append(p[2])
    # Reshape arrays to get them ready for concatenation
    x = np.array(x).reshape(-1,1)
    y = np.array(y).reshape(-1,1)
    z = np.array(z).reshape(-1,1)
    # Build combined array consisting of all arrays together
    dset = np.concatenate([x,y,z],axis=1)
    return dset

class PC_Marker:
    def __init__(self):

        rospy.Subscriber("/camera/depth/points", PointCloud2, self.callback)

    def callback(self,data):

        gen = point_cloud2.read_points(data, field_names=("x", "y", "z"), skip_nans=True)
        rospy.loginfo("Framing dataset..")
        frame = get_dataset(gen)
        rospy.loginfo("Clustering...")
        clusters = cluster(frame,iterations=3)

        print("Cluster 1 length: ",len(clusters[0]))
        print("Cluster 2 length: ",len(clusters[1]))











def listener():
    rospy.init_node("pc_listener",anonymous=True)
    PC_Marker()
    rospy.loginfo("Waiting.....")
    rospy.sleep(5)
    rospy.spin()

if __name__=="__main__":
    listener()





