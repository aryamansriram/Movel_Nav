#!/usr/bin/env python
import rospy
from sensor_msgs.msg import PointCloud2
from sensor_msgs import point_cloud2
from visualization_msgs.msg import Marker
from geometry_msgs.msg import Point
from std_msgs.msg import ColorRGBA,String
import numpy as np
import random
from pc_subs import get_dataset

def callback(data):
    gen = point_cloud2.read_points(data, field_names=("x", "y", "z"), skip_nans=True)
    dset = get_dataset(gen)
    np.save("pc_data.npy",dset)
    rospy.loginfo("Save Successful")


def listener():
    rospy.init_node("listener",anonymous=True)
    rospy.Subscriber("/camera/depth/points",PointCloud2,callback)
    rospy.sleep(25)
    rospy.spin()
if __name__=="__main__":
    listener()

