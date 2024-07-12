// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from yolov8_msgs:srv/YoloInference.idl
// generated code does not contain a copyright notice

#ifndef YOLOV8_MSGS__SRV__DETAIL__YOLO_INFERENCE__BUILDER_HPP_
#define YOLOV8_MSGS__SRV__DETAIL__YOLO_INFERENCE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "yolov8_msgs/srv/detail/yolo_inference__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace yolov8_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::yolov8_msgs::srv::YoloInference_Request>()
{
  return ::yolov8_msgs::srv::YoloInference_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace yolov8_msgs


namespace yolov8_msgs
{

namespace srv
{

namespace builder
{

class Init_YoloInference_Response_segmentation
{
public:
  explicit Init_YoloInference_Response_segmentation(::yolov8_msgs::srv::YoloInference_Response & msg)
  : msg_(msg)
  {}
  ::yolov8_msgs::srv::YoloInference_Response segmentation(::yolov8_msgs::srv::YoloInference_Response::_segmentation_type arg)
  {
    msg_.segmentation = std::move(arg);
    return std::move(msg_);
  }

private:
  ::yolov8_msgs::srv::YoloInference_Response msg_;
};

class Init_YoloInference_Response_roi
{
public:
  Init_YoloInference_Response_roi()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_YoloInference_Response_segmentation roi(::yolov8_msgs::srv::YoloInference_Response::_roi_type arg)
  {
    msg_.roi = std::move(arg);
    return Init_YoloInference_Response_segmentation(msg_);
  }

private:
  ::yolov8_msgs::srv::YoloInference_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::yolov8_msgs::srv::YoloInference_Response>()
{
  return yolov8_msgs::srv::builder::Init_YoloInference_Response_roi();
}

}  // namespace yolov8_msgs

#endif  // YOLOV8_MSGS__SRV__DETAIL__YOLO_INFERENCE__BUILDER_HPP_
