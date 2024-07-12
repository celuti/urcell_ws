// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from opencv_services:srv/PartsTargetsPos.idl
// generated code does not contain a copyright notice

#ifndef OPENCV_SERVICES__SRV__DETAIL__PARTS_TARGETS_POS__TRAITS_HPP_
#define OPENCV_SERVICES__SRV__DETAIL__PARTS_TARGETS_POS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "opencv_services/srv/detail/parts_targets_pos__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace opencv_services
{

namespace srv
{

inline void to_flow_style_yaml(
  const PartsTargetsPos_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PartsTargetsPos_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PartsTargetsPos_Request & msg, bool use_flow_style = false)
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

}  // namespace opencv_services

namespace rosidl_generator_traits
{

[[deprecated("use opencv_services::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const opencv_services::srv::PartsTargetsPos_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  opencv_services::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use opencv_services::srv::to_yaml() instead")]]
inline std::string to_yaml(const opencv_services::srv::PartsTargetsPos_Request & msg)
{
  return opencv_services::srv::to_yaml(msg);
}

template<>
inline const char * data_type<opencv_services::srv::PartsTargetsPos_Request>()
{
  return "opencv_services::srv::PartsTargetsPos_Request";
}

template<>
inline const char * name<opencv_services::srv::PartsTargetsPos_Request>()
{
  return "opencv_services/srv/PartsTargetsPos_Request";
}

template<>
struct has_fixed_size<opencv_services::srv::PartsTargetsPos_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<opencv_services::srv::PartsTargetsPos_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<opencv_services::srv::PartsTargetsPos_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'roi'
#include "sensor_msgs/msg/detail/region_of_interest__traits.hpp"
// Member 'segmentation'
#include "sensor_msgs/msg/detail/image__traits.hpp"

namespace opencv_services
{

namespace srv
{

inline void to_flow_style_yaml(
  const PartsTargetsPos_Response & msg,
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
  const PartsTargetsPos_Response & msg,
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

inline std::string to_yaml(const PartsTargetsPos_Response & msg, bool use_flow_style = false)
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

}  // namespace opencv_services

namespace rosidl_generator_traits
{

[[deprecated("use opencv_services::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const opencv_services::srv::PartsTargetsPos_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  opencv_services::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use opencv_services::srv::to_yaml() instead")]]
inline std::string to_yaml(const opencv_services::srv::PartsTargetsPos_Response & msg)
{
  return opencv_services::srv::to_yaml(msg);
}

template<>
inline const char * data_type<opencv_services::srv::PartsTargetsPos_Response>()
{
  return "opencv_services::srv::PartsTargetsPos_Response";
}

template<>
inline const char * name<opencv_services::srv::PartsTargetsPos_Response>()
{
  return "opencv_services/srv/PartsTargetsPos_Response";
}

template<>
struct has_fixed_size<opencv_services::srv::PartsTargetsPos_Response>
  : std::integral_constant<bool, has_fixed_size<sensor_msgs::msg::Image>::value && has_fixed_size<sensor_msgs::msg::RegionOfInterest>::value> {};

template<>
struct has_bounded_size<opencv_services::srv::PartsTargetsPos_Response>
  : std::integral_constant<bool, has_bounded_size<sensor_msgs::msg::Image>::value && has_bounded_size<sensor_msgs::msg::RegionOfInterest>::value> {};

template<>
struct is_message<opencv_services::srv::PartsTargetsPos_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<opencv_services::srv::PartsTargetsPos>()
{
  return "opencv_services::srv::PartsTargetsPos";
}

template<>
inline const char * name<opencv_services::srv::PartsTargetsPos>()
{
  return "opencv_services/srv/PartsTargetsPos";
}

template<>
struct has_fixed_size<opencv_services::srv::PartsTargetsPos>
  : std::integral_constant<
    bool,
    has_fixed_size<opencv_services::srv::PartsTargetsPos_Request>::value &&
    has_fixed_size<opencv_services::srv::PartsTargetsPos_Response>::value
  >
{
};

template<>
struct has_bounded_size<opencv_services::srv::PartsTargetsPos>
  : std::integral_constant<
    bool,
    has_bounded_size<opencv_services::srv::PartsTargetsPos_Request>::value &&
    has_bounded_size<opencv_services::srv::PartsTargetsPos_Response>::value
  >
{
};

template<>
struct is_service<opencv_services::srv::PartsTargetsPos>
  : std::true_type
{
};

template<>
struct is_service_request<opencv_services::srv::PartsTargetsPos_Request>
  : std::true_type
{
};

template<>
struct is_service_response<opencv_services::srv::PartsTargetsPos_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // OPENCV_SERVICES__SRV__DETAIL__PARTS_TARGETS_POS__TRAITS_HPP_
