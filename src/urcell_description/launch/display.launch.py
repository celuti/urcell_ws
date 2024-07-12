import os
import xacro
import yaml  # Import yaml to load the initial_joint_states.yaml file
from ament_index_python.packages import get_package_share_directory
import launch_ros.actions
import launch.conditions
from launch.substitutions import LaunchConfiguration

def generate_launch_description():
    pkgPath = launch_ros.substitutions.FindPackageShare(package='urcell_description').find('urcell_description')
    urdfModelPath = os.path.join(pkgPath, 'urdf', 'model.urdf.xacro')  # Change to xacro file

    urcell_description_path = os.path.join(
        get_package_share_directory('urcell_description'))

    # Convert xacro file to urdf
    robot_desc = xacro.process_file(urdfModelPath).toxml()

    params = {'robot_description': robot_desc}

    robot_state_publisher_node = launch_ros.actions.Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        output='screen',
        parameters=[params]
    )

    joint_state_publisher_node = launch_ros.actions.Node(
        package='joint_state_publisher',
        executable='joint_state_publisher',
        name='joint_state_publisher',
        parameters=[params],
        condition=launch.conditions.UnlessCondition(LaunchConfiguration('gui'))
    )

    joint_state_publisher_gui_node = launch_ros.actions.Node(
        package='joint_state_publisher_gui',
        executable='joint_state_publisher_gui',
        name='joint_state_publisher_gui',
        condition=launch.conditions.IfCondition(LaunchConfiguration('gui'))
    )

    rviz_config_file = os.path.join(urcell_description_path, 'config', 'urcell_config.rviz')
    rviz_node = launch_ros.actions.Node(
        package='rviz2',
        executable='rviz2',
        name='rviz2',
        output='screen',  
        arguments=["-d", rviz_config_file],      
    )

    return launch.LaunchDescription([
        launch.actions.DeclareLaunchArgument(name='gui', default_value='True',
                                             description='This is a flag for joint_state_publisher_gui'),
        launch.actions.DeclareLaunchArgument(name='model', default_value=urdfModelPath,
                                             description='Path to the urdf model file'),
        robot_state_publisher_node,
        joint_state_publisher_node,
        joint_state_publisher_gui_node,
        rviz_node
    ])