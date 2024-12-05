// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cpp_interfaces:msg/Custom.idl
// generated code does not contain a copyright notice
#include "cpp_interfaces/msg/detail/custom__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
cpp_interfaces__msg__Custom__init(cpp_interfaces__msg__Custom * msg)
{
  if (!msg) {
    return false;
  }
  // force
  // temperature
  // velocity
  // acceleration
  return true;
}

void
cpp_interfaces__msg__Custom__fini(cpp_interfaces__msg__Custom * msg)
{
  if (!msg) {
    return;
  }
  // force
  // temperature
  // velocity
  // acceleration
}

bool
cpp_interfaces__msg__Custom__are_equal(const cpp_interfaces__msg__Custom * lhs, const cpp_interfaces__msg__Custom * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // force
  if (lhs->force != rhs->force) {
    return false;
  }
  // temperature
  if (lhs->temperature != rhs->temperature) {
    return false;
  }
  // velocity
  if (lhs->velocity != rhs->velocity) {
    return false;
  }
  // acceleration
  if (lhs->acceleration != rhs->acceleration) {
    return false;
  }
  return true;
}

bool
cpp_interfaces__msg__Custom__copy(
  const cpp_interfaces__msg__Custom * input,
  cpp_interfaces__msg__Custom * output)
{
  if (!input || !output) {
    return false;
  }
  // force
  output->force = input->force;
  // temperature
  output->temperature = input->temperature;
  // velocity
  output->velocity = input->velocity;
  // acceleration
  output->acceleration = input->acceleration;
  return true;
}

cpp_interfaces__msg__Custom *
cpp_interfaces__msg__Custom__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cpp_interfaces__msg__Custom * msg = (cpp_interfaces__msg__Custom *)allocator.allocate(sizeof(cpp_interfaces__msg__Custom), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cpp_interfaces__msg__Custom));
  bool success = cpp_interfaces__msg__Custom__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cpp_interfaces__msg__Custom__destroy(cpp_interfaces__msg__Custom * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cpp_interfaces__msg__Custom__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cpp_interfaces__msg__Custom__Sequence__init(cpp_interfaces__msg__Custom__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cpp_interfaces__msg__Custom * data = NULL;

  if (size) {
    data = (cpp_interfaces__msg__Custom *)allocator.zero_allocate(size, sizeof(cpp_interfaces__msg__Custom), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cpp_interfaces__msg__Custom__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cpp_interfaces__msg__Custom__fini(&data[i - 1]);
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
cpp_interfaces__msg__Custom__Sequence__fini(cpp_interfaces__msg__Custom__Sequence * array)
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
      cpp_interfaces__msg__Custom__fini(&array->data[i]);
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

cpp_interfaces__msg__Custom__Sequence *
cpp_interfaces__msg__Custom__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cpp_interfaces__msg__Custom__Sequence * array = (cpp_interfaces__msg__Custom__Sequence *)allocator.allocate(sizeof(cpp_interfaces__msg__Custom__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cpp_interfaces__msg__Custom__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cpp_interfaces__msg__Custom__Sequence__destroy(cpp_interfaces__msg__Custom__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cpp_interfaces__msg__Custom__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cpp_interfaces__msg__Custom__Sequence__are_equal(const cpp_interfaces__msg__Custom__Sequence * lhs, const cpp_interfaces__msg__Custom__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cpp_interfaces__msg__Custom__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cpp_interfaces__msg__Custom__Sequence__copy(
  const cpp_interfaces__msg__Custom__Sequence * input,
  cpp_interfaces__msg__Custom__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cpp_interfaces__msg__Custom);
    cpp_interfaces__msg__Custom * data =
      (cpp_interfaces__msg__Custom *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cpp_interfaces__msg__Custom__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          cpp_interfaces__msg__Custom__fini(&data[i]);
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
    if (!cpp_interfaces__msg__Custom__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
