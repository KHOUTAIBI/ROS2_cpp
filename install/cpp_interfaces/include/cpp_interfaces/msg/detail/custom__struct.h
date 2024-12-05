// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cpp_interfaces:msg/Custom.idl
// generated code does not contain a copyright notice

#ifndef CPP_INTERFACES__MSG__DETAIL__CUSTOM__STRUCT_H_
#define CPP_INTERFACES__MSG__DETAIL__CUSTOM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/Custom in the package cpp_interfaces.
typedef struct cpp_interfaces__msg__Custom
{
  float force;
  float temperature;
  float velocity;
  float acceleration;
} cpp_interfaces__msg__Custom;

// Struct for a sequence of cpp_interfaces__msg__Custom.
typedef struct cpp_interfaces__msg__Custom__Sequence
{
  cpp_interfaces__msg__Custom * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cpp_interfaces__msg__Custom__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CPP_INTERFACES__MSG__DETAIL__CUSTOM__STRUCT_H_
