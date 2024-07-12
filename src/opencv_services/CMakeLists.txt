cmake_minimum_required(VERSION 3.8)
project(opencv_services)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(cv_bridge REQUIRED)
find_package(image_transport REQUIRED)
find_package(tf2 REQUIRED)
find_package(rosidl_default_generators REQUIRED)

# Add your executable
add_executable(opencv_extract_object_positions src/opencv_extract_object_positions.cpp)
# añado targets pero podría no ser necesario cuando se añada el servicio:
install(TARGETS
  opencv_extract_object_positions
  DESTINATION lib/${PROJECT_NAME}
)

rosidl_generate_interfaces(${PROJECT_NAME}
  srv/PartsTargetsPos.srv
  DEPENDENCIES sensor_msgs  # Include any dependencies your service file has
)

# Specify dependencies of your executable
ament_target_dependencies(opencv_extract_object_positions
  rclcpp
  cv_bridge
  image_transport
  tf2
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
