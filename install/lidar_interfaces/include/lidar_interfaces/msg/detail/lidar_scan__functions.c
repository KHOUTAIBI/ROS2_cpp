// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from lidar_interfaces:msg/LidarScan.idl
// generated code does not contain a copyright notice
#include "lidar_interfaces/msg/detail/lidar_scan__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `range`
// Member `angle`
// Member `intensity`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
lidar_interfaces__msg__LidarScan__init(lidar_interfaces__msg__LidarScan * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  // scanfreq
  // samplerate
  // range
  if (!rosidl_runtime_c__float__Sequence__init(&msg->range, 0)) {
    lidar_interfaces__msg__LidarScan__fini(msg);
    return false;
  }
  // angle
  if (!rosidl_runtime_c__float__Sequence__init(&msg->angle, 0)) {
    lidar_interfaces__msg__LidarScan__fini(msg);
    return false;
  }
  // intensity
  if (!rosidl_runtime_c__float__Sequence__init(&msg->intensity, 0)) {
    lidar_interfaces__msg__LidarScan__fini(msg);
    return false;
  }
  return true;
}

void
lidar_interfaces__msg__LidarScan__fini(lidar_interfaces__msg__LidarScan * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  // scanfreq
  // samplerate
  // range
  rosidl_runtime_c__float__Sequence__fini(&msg->range);
  // angle
  rosidl_runtime_c__float__Sequence__fini(&msg->angle);
  // intensity
  rosidl_runtime_c__float__Sequence__fini(&msg->intensity);
}

bool
lidar_interfaces__msg__LidarScan__are_equal(const lidar_interfaces__msg__LidarScan * lhs, const lidar_interfaces__msg__LidarScan * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // stamp
  if (lhs->stamp != rhs->stamp) {
    return false;
  }
  // scanfreq
  if (lhs->scanfreq != rhs->scanfreq) {
    return false;
  }
  // samplerate
  if (lhs->samplerate != rhs->samplerate) {
    return false;
  }
  // range
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->range), &(rhs->range)))
  {
    return false;
  }
  // angle
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->angle), &(rhs->angle)))
  {
    return false;
  }
  // intensity
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->intensity), &(rhs->intensity)))
  {
    return false;
  }
  return true;
}

bool
lidar_interfaces__msg__LidarScan__copy(
  const lidar_interfaces__msg__LidarScan * input,
  lidar_interfaces__msg__LidarScan * output)
{
  if (!input || !output) {
    return false;
  }
  // stamp
  output->stamp = input->stamp;
  // scanfreq
  output->scanfreq = input->scanfreq;
  // samplerate
  output->samplerate = input->samplerate;
  // range
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->range), &(output->range)))
  {
    return false;
  }
  // angle
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->angle), &(output->angle)))
  {
    return false;
  }
  // intensity
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->intensity), &(output->intensity)))
  {
    return false;
  }
  return true;
}

lidar_interfaces__msg__LidarScan *
lidar_interfaces__msg__LidarScan__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lidar_interfaces__msg__LidarScan * msg = (lidar_interfaces__msg__LidarScan *)allocator.allocate(sizeof(lidar_interfaces__msg__LidarScan), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(lidar_interfaces__msg__LidarScan));
  bool success = lidar_interfaces__msg__LidarScan__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
lidar_interfaces__msg__LidarScan__destroy(lidar_interfaces__msg__LidarScan * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    lidar_interfaces__msg__LidarScan__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
lidar_interfaces__msg__LidarScan__Sequence__init(lidar_interfaces__msg__LidarScan__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lidar_interfaces__msg__LidarScan * data = NULL;

  if (size) {
    data = (lidar_interfaces__msg__LidarScan *)allocator.zero_allocate(size, sizeof(lidar_interfaces__msg__LidarScan), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = lidar_interfaces__msg__LidarScan__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        lidar_interfaces__msg__LidarScan__fini(&data[i - 1]);
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
lidar_interfaces__msg__LidarScan__Sequence__fini(lidar_interfaces__msg__LidarScan__Sequence * array)
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
      lidar_interfaces__msg__LidarScan__fini(&array->data[i]);
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

lidar_interfaces__msg__LidarScan__Sequence *
lidar_interfaces__msg__LidarScan__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lidar_interfaces__msg__LidarScan__Sequence * array = (lidar_interfaces__msg__LidarScan__Sequence *)allocator.allocate(sizeof(lidar_interfaces__msg__LidarScan__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = lidar_interfaces__msg__LidarScan__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
lidar_interfaces__msg__LidarScan__Sequence__destroy(lidar_interfaces__msg__LidarScan__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    lidar_interfaces__msg__LidarScan__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
lidar_interfaces__msg__LidarScan__Sequence__are_equal(const lidar_interfaces__msg__LidarScan__Sequence * lhs, const lidar_interfaces__msg__LidarScan__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!lidar_interfaces__msg__LidarScan__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
lidar_interfaces__msg__LidarScan__Sequence__copy(
  const lidar_interfaces__msg__LidarScan__Sequence * input,
  lidar_interfaces__msg__LidarScan__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(lidar_interfaces__msg__LidarScan);
    lidar_interfaces__msg__LidarScan * data =
      (lidar_interfaces__msg__LidarScan *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!lidar_interfaces__msg__LidarScan__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          lidar_interfaces__msg__LidarScan__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!lidar_interfaces__msg__LidarScan__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
