// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cpp_interfaces:msg/Custom.idl
// generated code does not contain a copyright notice

#ifndef CPP_INTERFACES__MSG__DETAIL__CUSTOM__TRAITS_HPP_
#define CPP_INTERFACES__MSG__DETAIL__CUSTOM__TRAITS_HPP_

#include "cpp_interfaces/msg/detail/custom__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cpp_interfaces::msg::Custom>()
{
  return "cpp_interfaces::msg::Custom";
}

template<>
inline const char * name<cpp_interfaces::msg::Custom>()
{
  return "cpp_interfaces/msg/Custom";
}

template<>
struct has_fixed_size<cpp_interfaces::msg::Custom>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<cpp_interfaces::msg::Custom>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<cpp_interfaces::msg::Custom>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CPP_INTERFACES__MSG__DETAIL__CUSTOM__TRAITS_HPP_
