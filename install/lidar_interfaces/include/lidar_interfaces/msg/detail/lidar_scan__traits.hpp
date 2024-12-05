// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from lidar_interfaces:msg/LidarScan.idl
// generated code does not contain a copyright notice

#ifndef LIDAR_INTERFACES__MSG__DETAIL__LIDAR_SCAN__TRAITS_HPP_
#define LIDAR_INTERFACES__MSG__DETAIL__LIDAR_SCAN__TRAITS_HPP_

#include "lidar_interfaces/msg/detail/lidar_scan__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<lidar_interfaces::msg::LidarScan>()
{
  return "lidar_interfaces::msg::LidarScan";
}

template<>
inline const char * name<lidar_interfaces::msg::LidarScan>()
{
  return "lidar_interfaces/msg/LidarScan";
}

template<>
struct has_fixed_size<lidar_interfaces::msg::LidarScan>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<lidar_interfaces::msg::LidarScan>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<lidar_interfaces::msg::LidarScan>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LIDAR_INTERFACES__MSG__DETAIL__LIDAR_SCAN__TRAITS_HPP_
