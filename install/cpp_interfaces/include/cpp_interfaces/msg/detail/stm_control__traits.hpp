// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cpp_interfaces:msg/STMControl.idl
// generated code does not contain a copyright notice

#ifndef CPP_INTERFACES__MSG__DETAIL__STM_CONTROL__TRAITS_HPP_
#define CPP_INTERFACES__MSG__DETAIL__STM_CONTROL__TRAITS_HPP_

#include "cpp_interfaces/msg/detail/stm_control__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cpp_interfaces::msg::STMControl>()
{
  return "cpp_interfaces::msg::STMControl";
}

template<>
inline const char * name<cpp_interfaces::msg::STMControl>()
{
  return "cpp_interfaces/msg/STMControl";
}

template<>
struct has_fixed_size<cpp_interfaces::msg::STMControl>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<cpp_interfaces::msg::STMControl>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<cpp_interfaces::msg::STMControl>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CPP_INTERFACES__MSG__DETAIL__STM_CONTROL__TRAITS_HPP_
