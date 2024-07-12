// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from yolov8_msgs:srv/YoloInference.idl
// generated code does not contain a copyright notice

#ifndef YOLOV8_MSGS__SRV__DETAIL__YOLO_INFERENCE__STRUCT_H_
#define YOLOV8_MSGS__SRV__DETAIL__YOLO_INFERENCE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/YoloInference in the package yolov8_msgs.
typedef struct yolov8_msgs__srv__YoloInference_Request
{
  uint8_t structure_needs_at_least_one_member;
} yolov8_msgs__srv__YoloInference_Request;

// Struct for a sequence of yolov8_msgs__srv__YoloInference_Request.
typedef struct yolov8_msgs__srv__YoloInference_Request__Sequence
{
  yolov8_msgs__srv__YoloInference_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} yolov8_msgs__srv__YoloInference_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'roi'
#include "sensor_msgs/msg/detail/region_of_interest__struct.h"
// Member 'segmentation'
#include "sensor_msgs/msg/detail/image__struct.h"

/// Struct defined in srv/YoloInference in the package yolov8_msgs.
typedef struct yolov8_msgs__srv__YoloInference_Response
{
  sensor_msgs__msg__RegionOfInterest roi;
  sensor_msgs__msg__Image segmentation;
} yolov8_msgs__srv__YoloInference_Response;

// Struct for a sequence of yolov8_msgs__srv__YoloInference_Response.
typedef struct yolov8_msgs__srv__YoloInference_Response__Sequence
{
  yolov8_msgs__srv__YoloInference_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} yolov8_msgs__srv__YoloInference_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YOLOV8_MSGS__SRV__DETAIL__YOLO_INFERENCE__STRUCT_H_
