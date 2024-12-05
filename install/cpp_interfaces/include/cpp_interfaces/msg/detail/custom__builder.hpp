// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cpp_interfaces:msg/Custom.idl
// generated code does not contain a copyright notice

#ifndef CPP_INTERFACES__MSG__DETAIL__CUSTOM__BUILDER_HPP_
#define CPP_INTERFACES__MSG__DETAIL__CUSTOM__BUILDER_HPP_

#include "cpp_interfaces/msg/detail/custom__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace cpp_interfaces
{

namespace msg
{

namespace builder
{

class Init_Custom_acceleration
{
public:
  explicit Init_Custom_acceleration(::cpp_interfaces::msg::Custom & msg)
  : msg_(msg)
  {}
  ::cpp_interfaces::msg::Custom acceleration(::cpp_interfaces::msg::Custom::_acceleration_type arg)
  {
    msg_.acceleration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cpp_interfaces::msg::Custom msg_;
};

class Init_Custom_velocity
{
public:
  explicit Init_Custom_velocity(::cpp_interfaces::msg::Custom & msg)
  : msg_(msg)
  {}
  Init_Custom_acceleration velocity(::cpp_interfaces::msg::Custom::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_Custom_acceleration(msg_);
  }

private:
  ::cpp_interfaces::msg::Custom msg_;
};

class Init_Custom_temperature
{
public:
  explicit Init_Custom_temperature(::cpp_interfaces::msg::Custom & msg)
  : msg_(msg)
  {}
  Init_Custom_velocity temperature(::cpp_interfaces::msg::Custom::_temperature_type arg)
  {
    msg_.temperature = std::move(arg);
    return Init_Custom_velocity(msg_);
  }

private:
  ::cpp_interfaces::msg::Custom msg_;
};

class Init_Custom_force
{
public:
  Init_Custom_force()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Custom_temperature force(::cpp_interfaces::msg::Custom::_force_type arg)
  {
    msg_.force = std::move(arg);
    return Init_Custom_temperature(msg_);
  }

private:
  ::cpp_interfaces::msg::Custom msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cpp_interfaces::msg::Custom>()
{
  return cpp_interfaces::msg::builder::Init_Custom_force();
}

}  // namespace cpp_interfaces

#endif  // CPP_INTERFACES__MSG__DETAIL__CUSTOM__BUILDER_HPP_
