cmake_minimum_required(VERSION 3.5)
project(opencv_services)

# Find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(rosidl_default_generators REQUIRED)

# Uncomment if you have library files
# add_library(${PROJECT_NAME}_lib
#   src/some_library_file.cpp
# )

# Uncomment if you have library files and need to link ROS dependencies
# ament_target_dependencies(${PROJECT_NAME}_lib
#   rclcpp
#   geometry_msgs
# )

# Generate ROS interfaces
rosidl_generate_interfaces(${PROJECT_NAME}
  "srv/PartsTargetsPos.srv"
  DEPENDENCIES geometry_msgs
)

# Uncomment if you have library files and need to link ROS interface dependencies
# rosidl_target_interfaces(${PROJECT_NAME}_lib
#   ${PROJECT_NAME} "rosidl_typesupport_cpp"
# )

# Testing setup
if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  ament_lint_auto_find_test_dependencies()
endif()

# # Install launch files, config files, etc.
# install(DIRECTORY
#   launch
#   config
#   DESTINATION share/${PROJECT_NAME}/
# )

# Uncomment if you have executables or libraries to install
# install(TARGETS
#   ${PROJECT_NAME}_lib
#   DESTINATION lib/${PROJECT_NAME}
# )

ament_package()