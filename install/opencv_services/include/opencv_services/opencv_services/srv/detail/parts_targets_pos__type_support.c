// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from opencv_services:srv/PartsTargetsPos.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "opencv_services/srv/detail/parts_targets_pos__rosidl_typesupport_introspection_c.h"
#include "opencv_services/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "opencv_services/srv/detail/parts_targets_pos__functions.h"
#include "opencv_services/srv/detail/parts_targets_pos__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void opencv_services__srv__PartsTargetsPos_Request__rosidl_typesupport_introspection_c__PartsTargetsPos_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  opencv_services__srv__PartsTargetsPos_Request__init(message_memory);
}

void opencv_services__srv__PartsTargetsPos_Request__rosidl_typesupport_introspection_c__PartsTargetsPos_Request_fini_function(void * message_memory)
{
  opencv_services__srv__PartsTargetsPos_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember opencv_services__srv__PartsTargetsPos_Request__rosidl_typesupport_introspection_c__PartsTargetsPos_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(opencv_services__srv__PartsTargetsPos_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers opencv_services__srv__PartsTargetsPos_Request__rosidl_typesupport_introspection_c__PartsTargetsPos_Request_message_members = {
  "opencv_services__srv",  // message namespace
  "PartsTargetsPos_Request",  // message name
  1,  // number of fields
  sizeof(opencv_services__srv__PartsTargetsPos_Request),
  opencv_services__srv__PartsTargetsPos_Request__rosidl_typesupport_introspection_c__PartsTargetsPos_Request_message_member_array,  // message members
  opencv_services__srv__PartsTargetsPos_Request__rosidl_typesupport_introspection_c__PartsTargetsPos_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  opencv_services__srv__PartsTargetsPos_Request__rosidl_typesupport_introspection_c__PartsTargetsPos_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t opencv_services__srv__PartsTargetsPos_Request__rosidl_typesupport_introspection_c__PartsTargetsPos_Request_message_type_support_handle = {
  0,
  &opencv_services__srv__PartsTargetsPos_Request__rosidl_typesupport_introspection_c__PartsTargetsPos_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_opencv_services
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, opencv_services, srv, PartsTargetsPos_Request)() {
  if (!opencv_services__srv__PartsTargetsPos_Request__rosidl_typesupport_introspection_c__PartsTargetsPos_Request_message_type_support_handle.typesupport_identifier) {
    opencv_services__srv__PartsTargetsPos_Request__rosidl_typesupport_introspection_c__PartsTargetsPos_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &opencv_services__srv__PartsTargetsPos_Request__rosidl_typesupport_introspection_c__PartsTargetsPos_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "opencv_services/srv/detail/parts_targets_pos__rosidl_typesupport_introspection_c.h"
// already included above
// #include "opencv_services/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "opencv_services/srv/detail/parts_targets_pos__functions.h"
// already included above
// #include "opencv_services/srv/detail/parts_targets_pos__struct.h"


// Include directives for member types
// Member `roi`
#include "sensor_msgs/msg/region_of_interest.h"
// Member `roi`
#include "sensor_msgs/msg/detail/region_of_interest__rosidl_typesupport_introspection_c.h"
// Member `segmentation`
#include "sensor_msgs/msg/image.h"
// Member `segmentation`
#include "sensor_msgs/msg/detail/image__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void opencv_services__srv__PartsTargetsPos_Response__rosidl_typesupport_introspection_c__PartsTargetsPos_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  opencv_services__srv__PartsTargetsPos_Response__init(message_memory);
}

void opencv_services__srv__PartsTargetsPos_Response__rosidl_typesupport_introspection_c__PartsTargetsPos_Response_fini_function(void * message_memory)
{
  opencv_services__srv__PartsTargetsPos_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember opencv_services__srv__PartsTargetsPos_Response__rosidl_typesupport_introspection_c__PartsTargetsPos_Response_message_member_array[2] = {
  {
    "roi",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(opencv_services__srv__PartsTargetsPos_Response, roi),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "segmentation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(opencv_services__srv__PartsTargetsPos_Response, segmentation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers opencv_services__srv__PartsTargetsPos_Response__rosidl_typesupport_introspection_c__PartsTargetsPos_Response_message_members = {
  "opencv_services__srv",  // message namespace
  "PartsTargetsPos_Response",  // message name
  2,  // number of fields
  sizeof(opencv_services__srv__PartsTargetsPos_Response),
  opencv_services__srv__PartsTargetsPos_Response__rosidl_typesupport_introspection_c__PartsTargetsPos_Response_message_member_array,  // message members
  opencv_services__srv__PartsTargetsPos_Response__rosidl_typesupport_introspection_c__PartsTargetsPos_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  opencv_services__srv__PartsTargetsPos_Response__rosidl_typesupport_introspection_c__PartsTargetsPos_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t opencv_services__srv__PartsTargetsPos_Response__rosidl_typesupport_introspection_c__PartsTargetsPos_Response_message_type_support_handle = {
  0,
  &opencv_services__srv__PartsTargetsPos_Response__rosidl_typesupport_introspection_c__PartsTargetsPos_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_opencv_services
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, opencv_services, srv, PartsTargetsPos_Response)() {
  opencv_services__srv__PartsTargetsPos_Response__rosidl_typesupport_introspection_c__PartsTargetsPos_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, RegionOfInterest)();
  opencv_services__srv__PartsTargetsPos_Response__rosidl_typesupport_introspection_c__PartsTargetsPos_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, Image)();
  if (!opencv_services__srv__PartsTargetsPos_Response__rosidl_typesupport_introspection_c__PartsTargetsPos_Response_message_type_support_handle.typesupport_identifier) {
    opencv_services__srv__PartsTargetsPos_Response__rosidl_typesupport_introspection_c__PartsTargetsPos_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &opencv_services__srv__PartsTargetsPos_Response__rosidl_typesupport_introspection_c__PartsTargetsPos_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "opencv_services/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "opencv_services/srv/detail/parts_targets_pos__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers opencv_services__srv__detail__parts_targets_pos__rosidl_typesupport_introspection_c__PartsTargetsPos_service_members = {
  "opencv_services__srv",  // service namespace
  "PartsTargetsPos",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // opencv_services__srv__detail__parts_targets_pos__rosidl_typesupport_introspection_c__PartsTargetsPos_Request_message_type_support_handle,
  NULL  // response message
  // opencv_services__srv__detail__parts_targets_pos__rosidl_typesupport_introspection_c__PartsTargetsPos_Response_message_type_support_handle
};

static rosidl_service_type_support_t opencv_services__srv__detail__parts_targets_pos__rosidl_typesupport_introspection_c__PartsTargetsPos_service_type_support_handle = {
  0,
  &opencv_services__srv__detail__parts_targets_pos__rosidl_typesupport_introspection_c__PartsTargetsPos_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, opencv_services, srv, PartsTargetsPos_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, opencv_services, srv, PartsTargetsPos_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_opencv_services
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, opencv_services, srv, PartsTargetsPos)() {
  if (!opencv_services__srv__detail__parts_targets_pos__rosidl_typesupport_introspection_c__PartsTargetsPos_service_type_support_handle.typesupport_identifier) {
    opencv_services__srv__detail__parts_targets_pos__rosidl_typesupport_introspection_c__PartsTargetsPos_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)opencv_services__srv__detail__parts_targets_pos__rosidl_typesupport_introspection_c__PartsTargetsPos_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, opencv_services, srv, PartsTargetsPos_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, opencv_services, srv, PartsTargetsPos_Response)()->data;
  }

  return &opencv_services__srv__detail__parts_targets_pos__rosidl_typesupport_introspection_c__PartsTargetsPos_service_type_support_handle;
}
