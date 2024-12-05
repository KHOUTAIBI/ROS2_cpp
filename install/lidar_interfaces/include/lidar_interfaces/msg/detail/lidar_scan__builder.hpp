// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lidar_interfaces:msg/LidarScan.idl
// generated code does not contain a copyright notice

#ifndef LIDAR_INTERFACES__MSG__DETAIL__LIDAR_SCAN__BUILDER_HPP_
#define LIDAR_INTERFACES__MSG__DETAIL__LIDAR_SCAN__BUILDER_HPP_

#include "lidar_interfaces/msg/detail/lidar_scan__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace lidar_interfaces
{

namespace msg
{

namespace builder
{

class Init_LidarScan_intensity
{
public:
  explicit Init_LidarScan_intensity(::lidar_interfaces::msg::LidarScan & msg)
  : msg_(msg)
  {}
  ::lidar_interfaces::msg::LidarScan intensity(::lidar_interfaces::msg::LidarScan::_intensity_type arg)
  {
    msg_.intensity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lidar_interfaces::msg::LidarScan msg_;
};

class Init_LidarScan_angle
{
public:
  explicit Init_LidarScan_angle(::lidar_interfaces::msg::LidarScan & msg)
  : msg_(msg)
  {}
  Init_LidarScan_intensity angle(::lidar_interfaces::msg::LidarScan::_angle_type arg)
  {
    msg_.angle = std::move(arg);
    return Init_LidarScan_intensity(msg_);
  }

private:
  ::lidar_interfaces::msg::LidarScan msg_;
};

class Init_LidarScan_range
{
public:
  explicit Init_LidarScan_range(::lidar_interfaces::msg::LidarScan & msg)
  : msg_(msg)
  {}
  Init_LidarScan_angle range(::lidar_interfaces::msg::LidarScan::_range_type arg)
  {
    msg_.range = std::move(arg);
    return Init_LidarScan_angle(msg_);
  }

private:
  ::lidar_interfaces::msg::LidarScan msg_;
};

class Init_LidarScan_samplerate
{
public:
  explicit Init_LidarScan_samplerate(::lidar_interfaces::msg::LidarScan & msg)
  : msg_(msg)
  {}
  Init_LidarScan_range samplerate(::lidar_interfaces::msg::LidarScan::_samplerate_type arg)
  {
    msg_.samplerate = std::move(arg);
    return Init_LidarScan_range(msg_);
  }

private:
  ::lidar_interfaces::msg::LidarScan msg_;
};

class Init_LidarScan_scanfreq
{
public:
  explicit Init_LidarScan_scanfreq(::lidar_interfaces::msg::LidarScan & msg)
  : msg_(msg)
  {}
  Init_LidarScan_samplerate scanfreq(::lidar_interfaces::msg::LidarScan::_scanfreq_type arg)
  {
    msg_.scanfreq = std::move(arg);
    return Init_LidarScan_samplerate(msg_);
  }

private:
  ::lidar_interfaces::msg::LidarScan msg_;
};

class Init_LidarScan_stamp
{
public:
  Init_LidarScan_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LidarScan_scanfreq stamp(::lidar_interfaces::msg::LidarScan::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_LidarScan_scanfreq(msg_);
  }

private:
  ::lidar_interfaces::msg::LidarScan msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::lidar_interfaces::msg::LidarScan>()
{
  return lidar_interfaces::msg::builder::Init_LidarScan_stamp();
}

}  // namespace lidar_interfaces

#endif  // LIDAR_INTERFACES__MSG__DETAIL__LIDAR_SCAN__BUILDER_HPP_
