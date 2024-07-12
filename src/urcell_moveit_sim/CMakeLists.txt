cmake_minimum_required(VERSION 3.5)
project(urcell_moveit_sim)

# Default to C99
if(NOT CMAKE_C_STANDARD)
  set(CMAKE_C_STANDARD 99)
endif()

# Default to C++17
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 17)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(moveit_ros_planning_interface REQUIRED)
find_package(moveit_visual_tools REQUIRED)
find_package(opencv_services REQUIRED)

add_executable(moveit_robot_control src/moveit_robot_control.cpp)
ament_target_dependencies(moveit_robot_control
  rclcpp
  moveit_ros_planning_interface
  moveit_visual_tools
  opencv_services
)

add_executable(automoveit_robot_control src/automoveit_robot_control.cpp)
ament_target_dependencies(automoveit_robot_control
  rclcpp
  moveit_ros_planning_interface
  moveit_visual_tools
  opencv_services
)

install(TARGETS
  moveit_robot_control
  automoveit_robot_control
  DESTINATION lib/${PROJECT_NAME}
)

install(DIRECTORY
  launch
  DESTINATION share/${PROJECT_NAME}
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()