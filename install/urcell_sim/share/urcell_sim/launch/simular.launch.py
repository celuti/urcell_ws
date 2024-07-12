#!/usr/bin/python3
# -*- coding: utf-8 -*-
import os
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription, ExecuteProcess
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch_ros.actions import Node
from launch_param_builder import load_xacro
from ament_index_python.packages import get_package_share_directory
from launch_ros.descriptions import ParameterValue  # Import ParameterValue for YAML loading
from os.path import join
from pathlib import Path
import yaml  # Import YAML to load the configuration file

def generate_launch_description():
    # Path to the Gazebo simulation launch file
    gz_sim_launch_file = join(get_package_share_directory("ros_gz_sim"), "launch", "gz_sim.launch.py")
    # Path to the world file
    coke_world = join(get_package_share_directory("urcell_sim"), "worlds", "cokeworld.sdf")
    # Path to the controllers configuration file
    controllers_config_path = join(get_package_share_directory("urcell_description"), "config", "ros2_controllers.yaml")
    
    
    # Load the controllers configuration
    with open(controllers_config_path, 'r') as config_file:
        controllers_config = yaml.safe_load(config_file)
    
    # Include the Gazebo simulation launch file with the world file as an argument
    gazebo_sim = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(gz_sim_launch_file),
        launch_arguments={"gz_args": coke_world}.items()
    )

    # Command to spawn the robot in Gazebo
    robot = ExecuteProcess(
        cmd=["ros2", "run", "ros_gz_sim", "create", "-topic", "robot_description", '-z', '0.0'],
        name="spawn robot",
        output="both"
    )

    # Load the robot URDF from a .xacro file
    robot_file = join(get_package_share_directory("urcell_description"), "urdf", "model.urdf.xacro")
    robot_xml = load_xacro(Path(robot_file))

    # Publish the robot state
    robot_state_publisher = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        output='both',
        parameters=[{'robot_description': robot_xml, 'use_sim_time': True}, controllers_config],
    )

    # Start the controllers
    start_controllers = Node(
        package="controller_manager",
        executable="spawner",
        arguments=['joint_state_broadcaster', 'arm_controller', 'gripper_controller'],
        output="screen",
        parameters=[controllers_config],
    )
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
    # For YOLO: Launch the YOLOv8 object recognition
    pkg_yolobot_recognition = get_package_share_directory('yolobot_recognition')
    spawn_yolo = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(pkg_yolobot_recognition, 'launch', 'launch_yolov8.launch.py'),
        )
    )  

    return LaunchDescription([
        gazebo_sim,
        robot,
        robot_state_publisher,
        start_controllers,
        bridge,
        spawn_yolo,
    ])