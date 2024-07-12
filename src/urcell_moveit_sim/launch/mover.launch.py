#!/usr/bin/python3
# -*- coding: utf-8 -*-
import os
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription, ExecuteProcess
from ament_index_python.packages import get_package_share_directory
from launch_ros.actions import Node
from launch_param_builder import load_xacro
from os.path import join
from pathlib import Path
from launch.launch_description_sources import PythonLaunchDescriptionSource

def generate_launch_description():

    path = join(get_package_share_directory("ros_gz_sim"), "launch", "gz_sim.launch.py")  
    coke_world = join(get_package_share_directory("urcell_sim"), "worlds", "cokeworld.sdf")
    gazebo_sim = IncludeLaunchDescription(path, launch_arguments=[("gz_args",  coke_world)])

    robot = ExecuteProcess(
        cmd=["ros2", "run", "ros_gz_sim", "create", "-topic", "robot_description", '-z', '0.0'],
        name="spawn robot",
        output="both"
    )

    robot_file = join(get_package_share_directory("urcell_description"), "urdf","model.urdf.xacro")
    robot_xml = load_xacro(Path(robot_file))

    robot_state_publisher = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        output='both',
        parameters=[{'robot_description':robot_xml, 
                     'use_sim_time':True}],
    )

    start_controllers  = Node(
                package="controller_manager",
                executable="spawner",
                arguments=['joint_state_broadcaster', 'arm_controller', 'gripper_controller'],
                output="screen",
            )
    
    move_group = IncludeLaunchDescription(join(get_package_share_directory("urcell_moveit_config"), "launch", "move_group.launch.py"))
    rviz = IncludeLaunchDescription(join(get_package_share_directory("urcell_moveit_config"), "launch", "moveit_rviz.launch.py"))

    # Gazebo Bridge: This brings data (sensors/clock) out of gazebo into ROS.
    bridge = Node(
        package='ros_gz_bridge',
        executable='parameter_bridge',
        arguments=[
            '/clock@rosgraph_msgs/msg/Clock[gz.msgs.Clock',
            '/realsense/points@sensor_msgs/msg/PointCloud2[gz.msgs.PointCloudPacked',
            '/realsense/image@sensor_msgs/msg/Image[gz.msgs.Image',
            '/realsense/camera_info@sensor_msgs/msg/CameraInfo[gz.msgs.CameraInfo',
        ],
        output='screen'
    )
    
    mg_sim_time = ExecuteProcess(cmd=["ros2", "param", "set", "/move_group", "use_sim_time","True"])
    rviz_sim_time = ExecuteProcess(cmd=["ros2", "param", "set", "/rviz", "use_sim_time","True"])

    # For YOLO: Launch the YOLOv8 object recognition
    pkg_yolobot_recognition = get_package_share_directory('yolobot_recognition')
    spawn_yolo = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(pkg_yolobot_recognition, 'launch', 'launch_yolov8.launch.py'),
        )
    )  
    return LaunchDescription([gazebo_sim, 
                              robot, 
                              robot_state_publisher, 
                              start_controllers,
                              move_group, 
                              rviz, 
                              bridge, 
                              mg_sim_time, 
                              rviz_sim_time,
                              spawn_yolo,
    ])