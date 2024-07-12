# urcell
ros2 packages to control the robotic collabortative cell

## ROS2 workspace "urcell_ws"
A series of packages aimed at simulating a collaborative work cell composed of a UR10e robot with a custom gripper and a Realsense 435i rgbd camera.

The modular design of the description package allows to easily define the version of gazebo to simulate with. On its current form, it is designed to be used with Ignition Fortess. So, the steps to configure the simulation environment are the following:

1-Install Ignition Fortress from
[Ignition Fortress Installation Guide](https://gazebosim.org/docs/fortress/install_ubuntu) and verify that is correctly installed by executing a demo:

`ign gazebo shapes.sdf`


2-Install ros-ign-gazebo package:

`sudo apt install ros-humble-ros-ign-gazebo`

3-Install ros2 control:

```sudo apt install ros-humble-ros2-controllers && sudo apt install ros-humble-ros2-control```

3-Install gz_ros2_control from
[gz_ros2_control GitHub Repository](https://github.com/ros-controls/gz_ros2_control).
Use this command to install from binaries:

`sudo apt install ros-humble-ign-ros2-control`

install also the bridge:

`sudo apt install ros-humble-ros-ign-bridge`

4-Optionally verify that Ignition is correctly installed by executing a demo:

`sudo apt install ros-humble-ign-ros2-control-demos`

`ros2 launch ign_ros2_control_demos diff_drive_example.launch.py`

in another terminal:

`ros2 run ign_ros2_control_demos example_diff_drive`


5-Install moveit2 from
[MoveIt 2 Installation Guide](https://moveit.ros.org/install-moveit2/binary/). Use this command to install from binaries:

`sudo apt install ros-humble-moveit`

6-For a correct usage of moveit visual tools, install the following packages:

```sudo apt install ros-humble-graph-msgs && sudo apt install ros-humble-rviz-visual-tools```

Now, everything is ready to perform a simulation with a predefined path. After building and sourcing, execute:

`ros2 launch urcell_moveit_sim mover.launch.py`

and, in another terminal:

`ros2 run urcell_moveit_sim moveit_robot_control`

7-Install ur-description package from binary:

`sudo apt install ros-humble-ur-description`

8-Install realsense-description package from binary:

`sudo apt install ros-humble-realsense2-description`


Note: Before building everything with colcon build command, build first the yolo_msg package independently:

`colcon build --packages-select yolov8_msgs --cmake-clean-cache`
