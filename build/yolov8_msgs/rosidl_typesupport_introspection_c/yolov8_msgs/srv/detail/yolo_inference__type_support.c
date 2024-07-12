// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from yolov8_msgs:srv/YoloInference.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "yolov8_msgs/srv/detail/yolo_inference__rosidl_typesupport_introspection_c.h"
#include "yolov8_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "yolov8_msgs/srv/detail/yolo_inference__functions.h"
#include "yolov8_msgs/srv/detail/yolo_inference__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void yolov8_msgs__srv__YoloInference_Request__rosidl_typesupport_introspection_c__YoloInference_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  yolov8_msgs__srv__YoloInference_Request__init(message_memory);
}

void yolov8_msgs__srv__YoloInference_Request__rosidl_typesupport_introspection_c__YoloInference_Request_fini_function(void * message_memory)
{
  yolov8_msgs__srv__YoloInference_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember yolov8_msgs__srv__YoloInference_Request__rosidl_typesupport_introspection_c__YoloInference_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(yolov8_msgs__srv__YoloInference_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers yolov8_msgs__srv__YoloInference_Request__rosidl_typesupport_introspection_c__YoloInference_Request_message_members = {
  "yolov8_msgs__srv",  // message namespace
  "YoloInference_Request",  // message name
  1,  // number of fields
  sizeof(yolov8_msgs__srv__YoloInference_Request),
  yolov8_msgs__srv__YoloInference_Request__rosidl_typesupport_introspection_c__YoloInference_Request_message_member_array,  // message members
  yolov8_msgs__srv__YoloInference_Request__rosidl_typesupport_introspection_c__YoloInference_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  yolov8_msgs__srv__YoloInference_Request__rosidl_typesupport_introspection_c__YoloInference_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t yolov8_msgs__srv__YoloInference_Request__rosidl_typesupport_introspection_c__YoloInference_Request_message_type_support_handle = {
  0,
  &yolov8_msgs__srv__YoloInference_Request__rosidl_typesupport_introspection_c__YoloInference_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_yolov8_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, yolov8_msgs, srv, YoloInference_Request)() {
  if (!yolov8_msgs__srv__YoloInference_Request__rosidl_typesupport_introspection_c__YoloInference_Request_message_type_support_handle.typesupport_identifier) {
    yolov8_msgs__srv__YoloInference_Request__rosidl_typesupport_introspection_c__YoloInference_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &yolov8_msgs__srv__YoloInference_Request__rosidl_typesupport_introspection_c__YoloInference_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "yolov8_msgs/srv/detail/yolo_inference__rosidl_typesupport_introspection_c.h"
// already included above
// #include "yolov8_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "yolov8_msgs/srv/detail/yolo_inference__functions.h"
// already included above
// #include "yolov8_msgs/srv/detail/yolo_inference__struct.h"


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

void yolov8_msgs__srv__YoloInference_Response__rosidl_typesupport_introspection_c__YoloInference_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  yolov8_msgs__srv__YoloInference_Response__init(message_memory);
}

void yolov8_msgs__srv__YoloInference_Response__rosidl_typesupport_introspection_c__YoloInference_Response_fini_function(void * message_memory)
{
  yolov8_msgs__srv__YoloInference_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember yolov8_msgs__srv__YoloInference_Response__rosidl_typesupport_introspection_c__YoloInference_Response_message_member_array[2] = {
  {
    "roi",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(yolov8_msgs__srv__YoloInference_Response, roi),  // bytes offset in struct
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
    offsetof(yolov8_msgs__srv__YoloInference_Response, segmentation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers yolov8_msgs__srv__YoloInference_Response__rosidl_typesupport_introspection_c__YoloInference_Response_message_members = {
  "yolov8_msgs__srv",  // message namespace
  "YoloInference_Response",  // message name
  2,  // number of fields
  sizeof(yolov8_msgs__srv__YoloInference_Response),
  yolov8_msgs__srv__YoloInference_Response__rosidl_typesupport_introspection_c__YoloInference_Response_message_member_array,  // message members
  yolov8_msgs__srv__YoloInference_Response__rosidl_typesupport_introspection_c__YoloInference_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  yolov8_msgs__srv__YoloInference_Response__rosidl_typesupport_introspection_c__YoloInference_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t yolov8_msgs__srv__YoloInference_Response__rosidl_typesupport_introspection_c__YoloInference_Response_message_type_support_handle = {
  0,
  &yolov8_msgs__srv__YoloInference_Response__rosidl_typesupport_introspection_c__YoloInference_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_yolov8_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, yolov8_msgs, srv, YoloInference_Response)() {
  yolov8_msgs__srv__YoloInference_Response__rosidl_typesupport_introspection_c__YoloInference_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, RegionOfInterest)();
  yolov8_msgs__srv__YoloInference_Response__rosidl_typesupport_introspection_c__YoloInference_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, Image)();
  if (!yolov8_msgs__srv__YoloInference_Response__rosidl_typesupport_introspection_c__YoloInference_Response_message_type_support_handle.typesupport_identifier) {
    yolov8_msgs__srv__YoloInference_Response__rosidl_typesupport_introspection_c__YoloInference_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &yolov8_msgs__srv__YoloInference_Response__rosidl_typesupport_introspection_c__YoloInference_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "yolov8_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "yolov8_msgs/srv/detail/yolo_inference__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers yolov8_msgs__srv__detail__yolo_inference__rosidl_typesupport_introspection_c__YoloInference_service_members = {
  "yolov8_msgs__srv",  // service namespace
  "YoloInference",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // yolov8_msgs__srv__detail__yolo_inference__rosidl_typesupport_introspection_c__YoloInference_Request_message_type_support_handle,
  NULL  // response message
  // yolov8_msgs__srv__detail__yolo_inference__rosidl_typesupport_introspection_c__YoloInference_Response_message_type_support_handle
};

static rosidl_service_type_support_t yolov8_msgs__srv__detail__yolo_inference__rosidl_typesupport_introspection_c__YoloInference_service_type_support_handle = {
  0,
  &yolov8_msgs__srv__detail__yolo_inference__rosidl_typesupport_introspection_c__YoloInference_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, yolov8_msgs, srv, YoloInference_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, yolov8_msgs, srv, YoloInference_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_yolov8_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, yolov8_msgs, srv, YoloInference)() {
  if (!yolov8_msgs__srv__detail__yolo_inference__rosidl_typesupport_introspection_c__YoloInference_service_type_support_handle.typesupport_identifier) {
    yolov8_msgs__srv__detail__yolo_inference__rosidl_typesupport_introspection_c__YoloInference_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)yolov8_msgs__srv__detail__yolo_inference__rosidl_typesupport_introspection_c__YoloInference_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, yolov8_msgs, srv, YoloInference_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, yolov8_msgs, srv, YoloInference_Response)()->data;
  }

  return &yolov8_msgs__srv__detail__yolo_inference__rosidl_typesupport_introspection_c__YoloInference_service_type_support_handle;
}
