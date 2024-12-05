// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from lidar_interfaces:msg/LidarScan.idl
// generated code does not contain a copyright notice

#ifndef LIDAR_INTERFACES__MSG__DETAIL__LIDAR_SCAN__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define LIDAR_INTERFACES__MSG__DETAIL__LIDAR_SCAN__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "lidar_interfaces/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "lidar_interfaces/msg/detail/lidar_scan__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace lidar_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_lidar_interfaces
cdr_serialize(
  const lidar_interfaces::msg::LidarScan & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_lidar_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  lidar_interfaces::msg::LidarScan & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_lidar_interfaces
get_serialized_size(
  const lidar_interfaces::msg::LidarScan & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_lidar_interfaces
max_serialized_size_LidarScan(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace lidar_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_lidar_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, lidar_interfaces, msg, LidarScan)();

#ifdef __cplusplus
}
#endif

#endif  // LIDAR_INTERFACES__MSG__DETAIL__LIDAR_SCAN__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
