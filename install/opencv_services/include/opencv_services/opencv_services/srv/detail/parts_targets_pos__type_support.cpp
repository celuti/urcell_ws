// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from opencv_services:srv/PartsTargetsPos.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "opencv_services/srv/detail/parts_targets_pos__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace opencv_services
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void PartsTargetsPos_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) opencv_services::srv::PartsTargetsPos_Request(_init);
}

void PartsTargetsPos_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<opencv_services::srv::PartsTargetsPos_Request *>(message_memory);
  typed_message->~PartsTargetsPos_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PartsTargetsPos_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(opencv_services::srv::PartsTargetsPos_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PartsTargetsPos_Request_message_members = {
  "opencv_services::srv",  // message namespace
  "PartsTargetsPos_Request",  // message name
  1,  // number of fields
  sizeof(opencv_services::srv::PartsTargetsPos_Request),
  PartsTargetsPos_Request_message_member_array,  // message members
  PartsTargetsPos_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  PartsTargetsPos_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PartsTargetsPos_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PartsTargetsPos_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace opencv_services


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<opencv_services::srv::PartsTargetsPos_Request>()
{
  return &::opencv_services::srv::rosidl_typesupport_introspection_cpp::PartsTargetsPos_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, opencv_services, srv, PartsTargetsPos_Request)() {
  return &::opencv_services::srv::rosidl_typesupport_introspection_cpp::PartsTargetsPos_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "opencv_services/srv/detail/parts_targets_pos__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace opencv_services
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void PartsTargetsPos_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) opencv_services::srv::PartsTargetsPos_Response(_init);
}

void PartsTargetsPos_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<opencv_services::srv::PartsTargetsPos_Response *>(message_memory);
  typed_message->~PartsTargetsPos_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PartsTargetsPos_Response_message_member_array[2] = {
  {
    "roi",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<sensor_msgs::msg::RegionOfInterest>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(opencv_services::srv::PartsTargetsPos_Response, roi),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "segmentation",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<sensor_msgs::msg::Image>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(opencv_services::srv::PartsTargetsPos_Response, segmentation),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PartsTargetsPos_Response_message_members = {
  "opencv_services::srv",  // message namespace
  "PartsTargetsPos_Response",  // message name
  2,  // number of fields
  sizeof(opencv_services::srv::PartsTargetsPos_Response),
  PartsTargetsPos_Response_message_member_array,  // message members
  PartsTargetsPos_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  PartsTargetsPos_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PartsTargetsPos_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PartsTargetsPos_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace opencv_services


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<opencv_services::srv::PartsTargetsPos_Response>()
{
  return &::opencv_services::srv::rosidl_typesupport_introspection_cpp::PartsTargetsPos_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, opencv_services, srv, PartsTargetsPos_Response)() {
  return &::opencv_services::srv::rosidl_typesupport_introspection_cpp::PartsTargetsPos_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "opencv_services/srv/detail/parts_targets_pos__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace opencv_services
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers PartsTargetsPos_service_members = {
  "opencv_services::srv",  // service namespace
  "PartsTargetsPos",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<opencv_services::srv::PartsTargetsPos>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t PartsTargetsPos_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PartsTargetsPos_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace opencv_services


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<opencv_services::srv::PartsTargetsPos>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::opencv_services::srv::rosidl_typesupport_introspection_cpp::PartsTargetsPos_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::opencv_services::srv::PartsTargetsPos_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::opencv_services::srv::PartsTargetsPos_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, opencv_services, srv, PartsTargetsPos)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<opencv_services::srv::PartsTargetsPos>();
}

#ifdef __cplusplus
}
#endif
