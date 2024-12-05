SHELL := /bin/bash

colcon:
	colcon build && source ~/.bashrc
lidar :
	ros2 run lidar lidar
py :
	ros2 run lidar lidar_subscription_node.py
