// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from opencv_services:srv/PartsTargetsPos.idl
// generated code does not contain a copyright notice

#ifndef OPENCV_SERVICES__SRV__DETAIL__PARTS_TARGETS_POS__BUILDER_HPP_
#define OPENCV_SERVICES__SRV__DETAIL__PARTS_TARGETS_POS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "opencv_services/srv/detail/parts_targets_pos__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace opencv_services
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::opencv_services::srv::PartsTargetsPos_Request>()
{
  return ::opencv_services::srv::PartsTargetsPos_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace opencv_services


namespace opencv_services
{

namespace srv
{

namespace builder
{

class Init_PartsTargetsPos_Response_segmentation
{
public:
  explicit Init_PartsTargetsPos_Response_segmentation(::opencv_services::srv::PartsTargetsPos_Response & msg)
  : msg_(msg)
  {}
  ::opencv_services::srv::PartsTargetsPos_Response segmentation(::opencv_services::srv::PartsTargetsPos_Response::_segmentation_type arg)
  {
    msg_.segmentation = std::move(arg);
    return std::move(msg_);
  }

private:
  ::opencv_services::srv::PartsTargetsPos_Response msg_;
};

class Init_PartsTargetsPos_Response_roi
{
public:
  Init_PartsTargetsPos_Response_roi()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PartsTargetsPos_Response_segmentation roi(::opencv_services::srv::PartsTargetsPos_Response::_roi_type arg)
  {
    msg_.roi = std::move(arg);
    return Init_PartsTargetsPos_Response_segmentation(msg_);
  }

private:
  ::opencv_services::srv::PartsTargetsPos_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::opencv_services::srv::PartsTargetsPos_Response>()
{
  return opencv_services::srv::builder::Init_PartsTargetsPos_Response_roi();
}

}  // namespace opencv_services

#endif  // OPENCV_SERVICES__SRV__DETAIL__PARTS_TARGETS_POS__BUILDER_HPP_
