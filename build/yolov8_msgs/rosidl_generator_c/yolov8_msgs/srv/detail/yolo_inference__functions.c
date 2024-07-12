// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from yolov8_msgs:srv/YoloInference.idl
// generated code does not contain a copyright notice
#include "yolov8_msgs/srv/detail/yolo_inference__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
yolov8_msgs__srv__YoloInference_Request__init(yolov8_msgs__srv__YoloInference_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
yolov8_msgs__srv__YoloInference_Request__fini(yolov8_msgs__srv__YoloInference_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
yolov8_msgs__srv__YoloInference_Request__are_equal(const yolov8_msgs__srv__YoloInference_Request * lhs, const yolov8_msgs__srv__YoloInference_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
yolov8_msgs__srv__YoloInference_Request__copy(
  const yolov8_msgs__srv__YoloInference_Request * input,
  yolov8_msgs__srv__YoloInference_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

yolov8_msgs__srv__YoloInference_Request *
yolov8_msgs__srv__YoloInference_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yolov8_msgs__srv__YoloInference_Request * msg = (yolov8_msgs__srv__YoloInference_Request *)allocator.allocate(sizeof(yolov8_msgs__srv__YoloInference_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(yolov8_msgs__srv__YoloInference_Request));
  bool success = yolov8_msgs__srv__YoloInference_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
yolov8_msgs__srv__YoloInference_Request__destroy(yolov8_msgs__srv__YoloInference_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    yolov8_msgs__srv__YoloInference_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
yolov8_msgs__srv__YoloInference_Request__Sequence__init(yolov8_msgs__srv__YoloInference_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yolov8_msgs__srv__YoloInference_Request * data = NULL;

  if (size) {
    data = (yolov8_msgs__srv__YoloInference_Request *)allocator.zero_allocate(size, sizeof(yolov8_msgs__srv__YoloInference_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = yolov8_msgs__srv__YoloInference_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        yolov8_msgs__srv__YoloInference_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
yolov8_msgs__srv__YoloInference_Request__Sequence__fini(yolov8_msgs__srv__YoloInference_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      yolov8_msgs__srv__YoloInference_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

yolov8_msgs__srv__YoloInference_Request__Sequence *
yolov8_msgs__srv__YoloInference_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yolov8_msgs__srv__YoloInference_Request__Sequence * array = (yolov8_msgs__srv__YoloInference_Request__Sequence *)allocator.allocate(sizeof(yolov8_msgs__srv__YoloInference_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = yolov8_msgs__srv__YoloInference_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
yolov8_msgs__srv__YoloInference_Request__Sequence__destroy(yolov8_msgs__srv__YoloInference_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    yolov8_msgs__srv__YoloInference_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
yolov8_msgs__srv__YoloInference_Request__Sequence__are_equal(const yolov8_msgs__srv__YoloInference_Request__Sequence * lhs, const yolov8_msgs__srv__YoloInference_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!yolov8_msgs__srv__YoloInference_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
yolov8_msgs__srv__YoloInference_Request__Sequence__copy(
  const yolov8_msgs__srv__YoloInference_Request__Sequence * input,
  yolov8_msgs__srv__YoloInference_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(yolov8_msgs__srv__YoloInference_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    yolov8_msgs__srv__YoloInference_Request * data =
      (yolov8_msgs__srv__YoloInference_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!yolov8_msgs__srv__YoloInference_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          yolov8_msgs__srv__YoloInference_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!yolov8_msgs__srv__YoloInference_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `roi`
#include "sensor_msgs/msg/detail/region_of_interest__functions.h"
// Member `segmentation`
#include "sensor_msgs/msg/detail/image__functions.h"

bool
yolov8_msgs__srv__YoloInference_Response__init(yolov8_msgs__srv__YoloInference_Response * msg)
{
  if (!msg) {
    return false;
  }
  // roi
  if (!sensor_msgs__msg__RegionOfInterest__init(&msg->roi)) {
    yolov8_msgs__srv__YoloInference_Response__fini(msg);
    return false;
  }
  // segmentation
  if (!sensor_msgs__msg__Image__init(&msg->segmentation)) {
    yolov8_msgs__srv__YoloInference_Response__fini(msg);
    return false;
  }
  return true;
}

void
yolov8_msgs__srv__YoloInference_Response__fini(yolov8_msgs__srv__YoloInference_Response * msg)
{
  if (!msg) {
    return;
  }
  // roi
  sensor_msgs__msg__RegionOfInterest__fini(&msg->roi);
  // segmentation
  sensor_msgs__msg__Image__fini(&msg->segmentation);
}

bool
yolov8_msgs__srv__YoloInference_Response__are_equal(const yolov8_msgs__srv__YoloInference_Response * lhs, const yolov8_msgs__srv__YoloInference_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // roi
  if (!sensor_msgs__msg__RegionOfInterest__are_equal(
      &(lhs->roi), &(rhs->roi)))
  {
    return false;
  }
  // segmentation
  if (!sensor_msgs__msg__Image__are_equal(
      &(lhs->segmentation), &(rhs->segmentation)))
  {
    return false;
  }
  return true;
}

bool
yolov8_msgs__srv__YoloInference_Response__copy(
  const yolov8_msgs__srv__YoloInference_Response * input,
  yolov8_msgs__srv__YoloInference_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // roi
  if (!sensor_msgs__msg__RegionOfInterest__copy(
      &(input->roi), &(output->roi)))
  {
    return false;
  }
  // segmentation
  if (!sensor_msgs__msg__Image__copy(
      &(input->segmentation), &(output->segmentation)))
  {
    return false;
  }
  return true;
}

yolov8_msgs__srv__YoloInference_Response *
yolov8_msgs__srv__YoloInference_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yolov8_msgs__srv__YoloInference_Response * msg = (yolov8_msgs__srv__YoloInference_Response *)allocator.allocate(sizeof(yolov8_msgs__srv__YoloInference_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(yolov8_msgs__srv__YoloInference_Response));
  bool success = yolov8_msgs__srv__YoloInference_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
yolov8_msgs__srv__YoloInference_Response__destroy(yolov8_msgs__srv__YoloInference_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    yolov8_msgs__srv__YoloInference_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
yolov8_msgs__srv__YoloInference_Response__Sequence__init(yolov8_msgs__srv__YoloInference_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yolov8_msgs__srv__YoloInference_Response * data = NULL;

  if (size) {
    data = (yolov8_msgs__srv__YoloInference_Response *)allocator.zero_allocate(size, sizeof(yolov8_msgs__srv__YoloInference_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = yolov8_msgs__srv__YoloInference_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        yolov8_msgs__srv__YoloInference_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
yolov8_msgs__srv__YoloInference_Response__Sequence__fini(yolov8_msgs__srv__YoloInference_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      yolov8_msgs__srv__YoloInference_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

yolov8_msgs__srv__YoloInference_Response__Sequence *
yolov8_msgs__srv__YoloInference_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yolov8_msgs__srv__YoloInference_Response__Sequence * array = (yolov8_msgs__srv__YoloInference_Response__Sequence *)allocator.allocate(sizeof(yolov8_msgs__srv__YoloInference_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = yolov8_msgs__srv__YoloInference_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
yolov8_msgs__srv__YoloInference_Response__Sequence__destroy(yolov8_msgs__srv__YoloInference_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    yolov8_msgs__srv__YoloInference_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
yolov8_msgs__srv__YoloInference_Response__Sequence__are_equal(const yolov8_msgs__srv__YoloInference_Response__Sequence * lhs, const yolov8_msgs__srv__YoloInference_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!yolov8_msgs__srv__YoloInference_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
yolov8_msgs__srv__YoloInference_Response__Sequence__copy(
  const yolov8_msgs__srv__YoloInference_Response__Sequence * input,
  yolov8_msgs__srv__YoloInference_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(yolov8_msgs__srv__YoloInference_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    yolov8_msgs__srv__YoloInference_Response * data =
      (yolov8_msgs__srv__YoloInference_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!yolov8_msgs__srv__YoloInference_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          yolov8_msgs__srv__YoloInference_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!yolov8_msgs__srv__YoloInference_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
