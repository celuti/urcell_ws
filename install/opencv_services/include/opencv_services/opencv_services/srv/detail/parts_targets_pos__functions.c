// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from opencv_services:srv/PartsTargetsPos.idl
// generated code does not contain a copyright notice
#include "opencv_services/srv/detail/parts_targets_pos__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
opencv_services__srv__PartsTargetsPos_Request__init(opencv_services__srv__PartsTargetsPos_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
opencv_services__srv__PartsTargetsPos_Request__fini(opencv_services__srv__PartsTargetsPos_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
opencv_services__srv__PartsTargetsPos_Request__are_equal(const opencv_services__srv__PartsTargetsPos_Request * lhs, const opencv_services__srv__PartsTargetsPos_Request * rhs)
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
opencv_services__srv__PartsTargetsPos_Request__copy(
  const opencv_services__srv__PartsTargetsPos_Request * input,
  opencv_services__srv__PartsTargetsPos_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

opencv_services__srv__PartsTargetsPos_Request *
opencv_services__srv__PartsTargetsPos_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  opencv_services__srv__PartsTargetsPos_Request * msg = (opencv_services__srv__PartsTargetsPos_Request *)allocator.allocate(sizeof(opencv_services__srv__PartsTargetsPos_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(opencv_services__srv__PartsTargetsPos_Request));
  bool success = opencv_services__srv__PartsTargetsPos_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
opencv_services__srv__PartsTargetsPos_Request__destroy(opencv_services__srv__PartsTargetsPos_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    opencv_services__srv__PartsTargetsPos_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
opencv_services__srv__PartsTargetsPos_Request__Sequence__init(opencv_services__srv__PartsTargetsPos_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  opencv_services__srv__PartsTargetsPos_Request * data = NULL;

  if (size) {
    data = (opencv_services__srv__PartsTargetsPos_Request *)allocator.zero_allocate(size, sizeof(opencv_services__srv__PartsTargetsPos_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = opencv_services__srv__PartsTargetsPos_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        opencv_services__srv__PartsTargetsPos_Request__fini(&data[i - 1]);
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
opencv_services__srv__PartsTargetsPos_Request__Sequence__fini(opencv_services__srv__PartsTargetsPos_Request__Sequence * array)
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
      opencv_services__srv__PartsTargetsPos_Request__fini(&array->data[i]);
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

opencv_services__srv__PartsTargetsPos_Request__Sequence *
opencv_services__srv__PartsTargetsPos_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  opencv_services__srv__PartsTargetsPos_Request__Sequence * array = (opencv_services__srv__PartsTargetsPos_Request__Sequence *)allocator.allocate(sizeof(opencv_services__srv__PartsTargetsPos_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = opencv_services__srv__PartsTargetsPos_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
opencv_services__srv__PartsTargetsPos_Request__Sequence__destroy(opencv_services__srv__PartsTargetsPos_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    opencv_services__srv__PartsTargetsPos_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
opencv_services__srv__PartsTargetsPos_Request__Sequence__are_equal(const opencv_services__srv__PartsTargetsPos_Request__Sequence * lhs, const opencv_services__srv__PartsTargetsPos_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!opencv_services__srv__PartsTargetsPos_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
opencv_services__srv__PartsTargetsPos_Request__Sequence__copy(
  const opencv_services__srv__PartsTargetsPos_Request__Sequence * input,
  opencv_services__srv__PartsTargetsPos_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(opencv_services__srv__PartsTargetsPos_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    opencv_services__srv__PartsTargetsPos_Request * data =
      (opencv_services__srv__PartsTargetsPos_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!opencv_services__srv__PartsTargetsPos_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          opencv_services__srv__PartsTargetsPos_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!opencv_services__srv__PartsTargetsPos_Request__copy(
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
opencv_services__srv__PartsTargetsPos_Response__init(opencv_services__srv__PartsTargetsPos_Response * msg)
{
  if (!msg) {
    return false;
  }
  // roi
  if (!sensor_msgs__msg__RegionOfInterest__init(&msg->roi)) {
    opencv_services__srv__PartsTargetsPos_Response__fini(msg);
    return false;
  }
  // segmentation
  if (!sensor_msgs__msg__Image__init(&msg->segmentation)) {
    opencv_services__srv__PartsTargetsPos_Response__fini(msg);
    return false;
  }
  return true;
}

void
opencv_services__srv__PartsTargetsPos_Response__fini(opencv_services__srv__PartsTargetsPos_Response * msg)
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
opencv_services__srv__PartsTargetsPos_Response__are_equal(const opencv_services__srv__PartsTargetsPos_Response * lhs, const opencv_services__srv__PartsTargetsPos_Response * rhs)
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
opencv_services__srv__PartsTargetsPos_Response__copy(
  const opencv_services__srv__PartsTargetsPos_Response * input,
  opencv_services__srv__PartsTargetsPos_Response * output)
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

opencv_services__srv__PartsTargetsPos_Response *
opencv_services__srv__PartsTargetsPos_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  opencv_services__srv__PartsTargetsPos_Response * msg = (opencv_services__srv__PartsTargetsPos_Response *)allocator.allocate(sizeof(opencv_services__srv__PartsTargetsPos_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(opencv_services__srv__PartsTargetsPos_Response));
  bool success = opencv_services__srv__PartsTargetsPos_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
opencv_services__srv__PartsTargetsPos_Response__destroy(opencv_services__srv__PartsTargetsPos_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    opencv_services__srv__PartsTargetsPos_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
opencv_services__srv__PartsTargetsPos_Response__Sequence__init(opencv_services__srv__PartsTargetsPos_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  opencv_services__srv__PartsTargetsPos_Response * data = NULL;

  if (size) {
    data = (opencv_services__srv__PartsTargetsPos_Response *)allocator.zero_allocate(size, sizeof(opencv_services__srv__PartsTargetsPos_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = opencv_services__srv__PartsTargetsPos_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        opencv_services__srv__PartsTargetsPos_Response__fini(&data[i - 1]);
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
opencv_services__srv__PartsTargetsPos_Response__Sequence__fini(opencv_services__srv__PartsTargetsPos_Response__Sequence * array)
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
      opencv_services__srv__PartsTargetsPos_Response__fini(&array->data[i]);
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

opencv_services__srv__PartsTargetsPos_Response__Sequence *
opencv_services__srv__PartsTargetsPos_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  opencv_services__srv__PartsTargetsPos_Response__Sequence * array = (opencv_services__srv__PartsTargetsPos_Response__Sequence *)allocator.allocate(sizeof(opencv_services__srv__PartsTargetsPos_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = opencv_services__srv__PartsTargetsPos_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
opencv_services__srv__PartsTargetsPos_Response__Sequence__destroy(opencv_services__srv__PartsTargetsPos_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    opencv_services__srv__PartsTargetsPos_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
opencv_services__srv__PartsTargetsPos_Response__Sequence__are_equal(const opencv_services__srv__PartsTargetsPos_Response__Sequence * lhs, const opencv_services__srv__PartsTargetsPos_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!opencv_services__srv__PartsTargetsPos_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
opencv_services__srv__PartsTargetsPos_Response__Sequence__copy(
  const opencv_services__srv__PartsTargetsPos_Response__Sequence * input,
  opencv_services__srv__PartsTargetsPos_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(opencv_services__srv__PartsTargetsPos_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    opencv_services__srv__PartsTargetsPos_Response * data =
      (opencv_services__srv__PartsTargetsPos_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!opencv_services__srv__PartsTargetsPos_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          opencv_services__srv__PartsTargetsPos_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!opencv_services__srv__PartsTargetsPos_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
