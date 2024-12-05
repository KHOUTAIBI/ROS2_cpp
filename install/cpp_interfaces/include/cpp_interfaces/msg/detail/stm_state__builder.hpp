// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cpp_interfaces:msg/STMState.idl
// generated code does not contain a copyright notice

#ifndef CPP_INTERFACES__MSG__DETAIL__STM_STATE__BUILDER_HPP_
#define CPP_INTERFACES__MSG__DETAIL__STM_STATE__BUILDER_HPP_

#include "cpp_interfaces/msg/detail/stm_state__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace cpp_interfaces
{

namespace msg
{

namespace builder
{

class Init_STMState_gyro_z
{
public:
  explicit Init_STMState_gyro_z(::cpp_interfaces::msg::STMState & msg)
  : msg_(msg)
  {}
  ::cpp_interfaces::msg::STMState gyro_z(::cpp_interfaces::msg::STMState::_gyro_z_type arg)
  {
    msg_.gyro_z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cpp_interfaces::msg::STMState msg_;
};

class Init_STMState_gyro_y
{
public:
  explicit Init_STMState_gyro_y(::cpp_interfaces::msg::STMState & msg)
  : msg_(msg)
  {}
  Init_STMState_gyro_z gyro_y(::cpp_interfaces::msg::STMState::_gyro_y_type arg)
  {
    msg_.gyro_y = std::move(arg);
    return Init_STMState_gyro_z(msg_);
  }

private:
  ::cpp_interfaces::msg::STMState msg_;
};

class Init_STMState_gyro_x
{
public:
  explicit Init_STMState_gyro_x(::cpp_interfaces::msg::STMState & msg)
  : msg_(msg)
  {}
  Init_STMState_gyro_y gyro_x(::cpp_interfaces::msg::STMState::_gyro_x_type arg)
  {
    msg_.gyro_x = std::move(arg);
    return Init_STMState_gyro_y(msg_);
  }

private:
  ::cpp_interfaces::msg::STMState msg_;
};

class Init_STMState_accel_z
{
public:
  explicit Init_STMState_accel_z(::cpp_interfaces::msg::STMState & msg)
  : msg_(msg)
  {}
  Init_STMState_gyro_x accel_z(::cpp_interfaces::msg::STMState::_accel_z_type arg)
  {
    msg_.accel_z = std::move(arg);
    return Init_STMState_gyro_x(msg_);
  }

private:
  ::cpp_interfaces::msg::STMState msg_;
};

class Init_STMState_accel_y
{
public:
  explicit Init_STMState_accel_y(::cpp_interfaces::msg::STMState & msg)
  : msg_(msg)
  {}
  Init_STMState_accel_z accel_y(::cpp_interfaces::msg::STMState::_accel_y_type arg)
  {
    msg_.accel_y = std::move(arg);
    return Init_STMState_accel_z(msg_);
  }

private:
  ::cpp_interfaces::msg::STMState msg_;
};

class Init_STMState_accel_x
{
public:
  explicit Init_STMState_accel_x(::cpp_interfaces::msg::STMState & msg)
  : msg_(msg)
  {}
  Init_STMState_accel_y accel_x(::cpp_interfaces::msg::STMState::_accel_x_type arg)
  {
    msg_.accel_x = std::move(arg);
    return Init_STMState_accel_y(msg_);
  }

private:
  ::cpp_interfaces::msg::STMState msg_;
};

class Init_STMState_motor_velocity
{
public:
  explicit Init_STMState_motor_velocity(::cpp_interfaces::msg::STMState & msg)
  : msg_(msg)
  {}
  Init_STMState_accel_x motor_velocity(::cpp_interfaces::msg::STMState::_motor_velocity_type arg)
  {
    msg_.motor_velocity = std::move(arg);
    return Init_STMState_accel_x(msg_);
  }

private:
  ::cpp_interfaces::msg::STMState msg_;
};

class Init_STMState_motor_encoder
{
public:
  explicit Init_STMState_motor_encoder(::cpp_interfaces::msg::STMState & msg)
  : msg_(msg)
  {}
  Init_STMState_motor_velocity motor_encoder(::cpp_interfaces::msg::STMState::_motor_encoder_type arg)
  {
    msg_.motor_encoder = std::move(arg);
    return Init_STMState_motor_velocity(msg_);
  }

private:
  ::cpp_interfaces::msg::STMState msg_;
};

class Init_STMState_header
{
public:
  Init_STMState_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_STMState_motor_encoder header(::cpp_interfaces::msg::STMState::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_STMState_motor_encoder(msg_);
  }

private:
  ::cpp_interfaces::msg::STMState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cpp_interfaces::msg::STMState>()
{
  return cpp_interfaces::msg::builder::Init_STMState_header();
}

}  // namespace cpp_interfaces

#endif  // CPP_INTERFACES__MSG__DETAIL__STM_STATE__BUILDER_HPP_
