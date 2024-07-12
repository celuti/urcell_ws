// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from yolov8_msgs:srv/YoloInference.idl
// generated code does not contain a copyright notice

#ifndef YOLOV8_MSGS__SRV__DETAIL__YOLO_INFERENCE__TRAITS_HPP_
#define YOLOV8_MSGS__SRV__DETAIL__YOLO_INFERENCE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "yolov8_msgs/srv/detail/yolo_inference__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace yolov8_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const YoloInference_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const YoloInference_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const YoloInference_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace yolov8_msgs

namespace rosidl_generator_traits
{

[[deprecated("use yolov8_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const yolov8_msgs::srv::YoloInference_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  yolov8_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use yolov8_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const yolov8_msgs::srv::YoloInference_Request & msg)
{
  return yolov8_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<yolov8_msgs::srv::YoloInference_Request>()
{
  return "yolov8_msgs::srv::YoloInference_Request";
}

template<>
inline const char * name<yolov8_msgs::srv::YoloInference_Request>()
{
  return "yolov8_msgs/srv/YoloInference_Request";
}

template<>
struct has_fixed_size<yolov8_msgs::srv::YoloInference_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<yolov8_msgs::srv::YoloInference_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<yolov8_msgs::srv::YoloInference_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'roi'
#include "sensor_msgs/msg/detail/region_of_interest__traits.hpp"
// Member 'segmentation'
#include "sensor_msgs/msg/detail/image__traits.hpp"

namespace yolov8_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const YoloInference_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: roi
  {
    out << "roi: ";
    to_flow_style_yaml(msg.roi, out);
    out << ", ";
  }

  // member: segmentation
  {
    out << "segmentation: ";
    to_flow_style_yaml(msg.segmentation, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const YoloInference_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: roi
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "roi:\n";
    to_block_style_yaml(msg.roi, out, indentation + 2);
  }

  // member: segmentation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "segmentation:\n";
    to_block_style_yaml(msg.segmentation, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const YoloInference_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace yolov8_msgs

namespace rosidl_generator_traits
{

[[deprecated("use yolov8_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const yolov8_msgs::srv::YoloInference_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  yolov8_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use yolov8_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const yolov8_msgs::srv::YoloInference_Response & msg)
{
  return yolov8_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<yolov8_msgs::srv::YoloInference_Response>()
{
  return "yolov8_msgs::srv::YoloInference_Response";
}

template<>
inline const char * name<yolov8_msgs::srv::YoloInference_Response>()
{
  return "yolov8_msgs/srv/YoloInference_Response";
}

template<>
struct has_fixed_size<yolov8_msgs::srv::YoloInference_Response>
  : std::integral_constant<bool, has_fixed_size<sensor_msgs::msg::Image>::value && has_fixed_size<sensor_msgs::msg::RegionOfInterest>::value> {};

template<>
struct has_bounded_size<yolov8_msgs::srv::YoloInference_Response>
  : std::integral_constant<bool, has_bounded_size<sensor_msgs::msg::Image>::value && has_bounded_size<sensor_msgs::msg::RegionOfInterest>::value> {};

template<>
struct is_message<yolov8_msgs::srv::YoloInference_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<yolov8_msgs::srv::YoloInference>()
{
  return "yolov8_msgs::srv::YoloInference";
}

template<>
inline const char * name<yolov8_msgs::srv::YoloInference>()
{
  return "yolov8_msgs/srv/YoloInference";
}

template<>
struct has_fixed_size<yolov8_msgs::srv::YoloInference>
  : std::integral_constant<
    bool,
    has_fixed_size<yolov8_msgs::srv::YoloInference_Request>::value &&
    has_fixed_size<yolov8_msgs::srv::YoloInference_Response>::value
  >
{
};

template<>
struct has_bounded_size<yolov8_msgs::srv::YoloInference>
  : std::integral_constant<
    bool,
    has_bounded_size<yolov8_msgs::srv::YoloInference_Request>::value &&
    has_bounded_size<yolov8_msgs::srv::YoloInference_Response>::value
  >
{
};

template<>
struct is_service<yolov8_msgs::srv::YoloInference>
  : std::true_type
{
};

template<>
struct is_service_request<yolov8_msgs::srv::YoloInference_Request>
  : std::true_type
{
};

template<>
struct is_service_response<yolov8_msgs::srv::YoloInference_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // YOLOV8_MSGS__SRV__DETAIL__YOLO_INFERENCE__TRAITS_HPP_
