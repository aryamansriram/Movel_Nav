# Movel_Nav

My code for turtlebot navigation task for Movel AI

# Packages required:

- turtlebot3_simulations: https://emanual.robotis.com/docs/en/platform/turtlebot3/simulation/
- follow_waypoints: http://wiki.ros.org/follow_waypoints

# How to run navigation

- Fire up your terminal 
- Make sure all the dependencies are installed
- Run the command `roslaunch turtlebot3_gazebo turtlebot3_house.launch`This opens up the gazebo simulator with the turtlebot3 robot loaded in.
- Now fire up another terminal and run the command `roslaunch turtlebot3_navigation turtlebot3_navigation.launch map_file:=<absolute path to your map yaml file>`. In this case your map file is in the map folder in the workspace. This command opens up rviz with your bot loaded on the map.
- Based on where the bot is in the gazebo world, re-initialize the position of the bot in the rviz simulator. 
- Now go to Panel > tool properties and change the topic of the 2D pose estimate tool from /initial_pose to /clicked_point.
- Fire up a new terminal and type roslaunch follow_waypoints follow_waypoints.launch
- Click on rviz to select the required waypoints. To visualize these waypoints click on add> by Topic> PoseArray. The topic it will subscribe to will be /waypoints
- Once you have all the waypoints ready, fire up another terminal and write `rostopic pub /path_ready std_msgs/Empty -1`. You will see the bot following the waypoints.

# How to run pointcloud clustering

**NOTE: Make sure you select the waffle bot for this excercise since that is the only one with a depth camera**

- Run `roslaunch turtlebot3_gazebo turtlebot3_house.launch`. 
- Fire up another terminal and write `rosrun PointCloudOps pc_subs.py`
- This should log pointcloud information to the terminal about the sizes of the two clusters.


