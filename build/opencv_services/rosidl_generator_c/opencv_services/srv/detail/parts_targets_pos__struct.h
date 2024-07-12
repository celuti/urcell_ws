// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from opencv_services:srv/PartsTargetsPos.idl
// generated code does not contain a copyright notice

#ifndef OPENCV_SERVICES__SRV__DETAIL__PARTS_TARGETS_POS__STRUCT_H_
#define OPENCV_SERVICES__SRV__DETAIL__PARTS_TARGETS_POS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/PartsTargetsPos in the package opencv_services.
typedef struct opencv_services__srv__PartsTargetsPos_Request
{
  uint8_t structure_needs_at_least_one_member;
} opencv_services__srv__PartsTargetsPos_Request;

// Struct for a sequence of opencv_services__srv__PartsTargetsPos_Request.
typedef struct opencv_services__srv__PartsTargetsPos_Request__Sequence
{
  opencv_services__srv__PartsTargetsPos_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} opencv_services__srv__PartsTargetsPos_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'roi'
#include "sensor_msgs/msg/detail/region_of_interest__struct.h"
// Member 'segmentation'
#include "sensor_msgs/msg/detail/image__struct.h"

/// Struct defined in srv/PartsTargetsPos in the package opencv_services.
typedef struct opencv_services__srv__PartsTargetsPos_Response
{
  sensor_msgs__msg__RegionOfInterest roi;
  sensor_msgs__msg__Image segmentation;
} opencv_services__srv__PartsTargetsPos_Response;

// Struct for a sequence of opencv_services__srv__PartsTargetsPos_Response.
typedef struct opencv_services__srv__PartsTargetsPos_Response__Sequence
{
  opencv_services__srv__PartsTargetsPos_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} opencv_services__srv__PartsTargetsPos_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OPENCV_SERVICES__SRV__DETAIL__PARTS_TARGETS_POS__STRUCT_H_
