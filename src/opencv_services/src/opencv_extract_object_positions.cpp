#include <memory>
#include <chrono>
#include <thread>

#include <rclcpp/rclcpp.hpp>
#include <moveit/move_group_interface/move_group_interface.h>
#include <moveit/planning_scene_interface/planning_scene_interface.h>

int main(int argc, char** argv)
{
  rclcpp::init(argc, argv);
  auto node = rclcpp::Node::make_shared("moveit_robot_control");

  auto arm_group = std::make_shared<moveit::planning_interface::MoveGroupInterface>(node, "arm");
  auto gripper_group = std::make_shared<moveit::planning_interface::MoveGroupInterface>(node, "gripper");

  moveit::planning_interface::MoveGroupInterface::Plan my_plan;

  // 1- move the arm to "inicio"
  arm_group->setNamedTarget("inicio");
  arm_group->plan(my_plan);
  arm_group->execute(my_plan);

  // 2- move the gripper to "open"
  gripper_group->setNamedTarget("open");
  gripper_group->plan(my_plan);
  gripper_group->execute(my_plan);

  // 3- move the arm to "agarre"
  arm_group->setNamedTarget("agarre");
  arm_group->plan(my_plan);
  arm_group->execute(my_plan);

  // 4- wait until the arm reaches the position, and wait 1 more seconds
  while (!arm_group->move()) {}
  std::this_thread::sleep_for(std::chrono::seconds(1));

  // 5- move the gripper to "picking"
  gripper_group->setNamedTarget("picking");
  gripper_group->plan(my_plan);
  gripper_group->execute(my_plan);

  // 6- wait 1 seconds
  std::this_thread::sleep_for(std::chrono::seconds(1));

  // 7- move the arm to "dejar"
  arm_group->setNamedTarget("dejar");
  arm_group->plan(my_plan);
  arm_group->execute(my_plan);

  // 8- wait 1 seconds
  std::this_thread::sleep_for(std::chrono::seconds(1));

  // 9- move the gripper to "open"
  gripper_group->setNamedTarget("open");
  gripper_group->plan(my_plan);
  gripper_group->execute(my_plan);

  // 10- wait 1 seconds
  std::this_thread::sleep_for(std::chrono::seconds(1));

  // 11- move the robot to "inicio"
  arm_group->setNamedTarget("inicio");
  arm_group->plan(my_plan);
  arm_group->execute(my_plan);

  // 12- wait 1 seconds
  std::this_thread::sleep_for(std::chrono::seconds(1));

  // 13 Finish
  rclcpp::shutdown();
  return 0;
}