// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from lidar_interfaces:msg/LidarScan.idl
// generated code does not contain a copyright notice

#ifndef LIDAR_INTERFACES__MSG__DETAIL__LIDAR_SCAN__STRUCT_H_
#define LIDAR_INTERFACES__MSG__DETAIL__LIDAR_SCAN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'range'
// Member 'angle'
// Member 'intensity'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/LidarScan in the package lidar_interfaces.
typedef struct lidar_interfaces__msg__LidarScan
{
  uint64_t stamp;
  float scanfreq;
  float samplerate;
  rosidl_runtime_c__float__Sequence range;
  rosidl_runtime_c__float__Sequence angle;
  rosidl_runtime_c__float__Sequence intensity;
} lidar_interfaces__msg__LidarScan;

// Struct for a sequence of lidar_interfaces__msg__LidarScan.
typedef struct lidar_interfaces__msg__LidarScan__Sequence
{
  lidar_interfaces__msg__LidarScan * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lidar_interfaces__msg__LidarScan__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LIDAR_INTERFACES__MSG__DETAIL__LIDAR_SCAN__STRUCT_H_
