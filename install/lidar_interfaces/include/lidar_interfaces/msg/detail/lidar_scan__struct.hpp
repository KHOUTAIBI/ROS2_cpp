// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from lidar_interfaces:msg/LidarScan.idl
// generated code does not contain a copyright notice

#ifndef LIDAR_INTERFACES__MSG__DETAIL__LIDAR_SCAN__STRUCT_HPP_
#define LIDAR_INTERFACES__MSG__DETAIL__LIDAR_SCAN__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__lidar_interfaces__msg__LidarScan __attribute__((deprecated))
#else
# define DEPRECATED__lidar_interfaces__msg__LidarScan __declspec(deprecated)
#endif

namespace lidar_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LidarScan_
{
  using Type = LidarScan_<ContainerAllocator>;

  explicit LidarScan_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->stamp = 0ull;
      this->scanfreq = 0.0f;
      this->samplerate = 0.0f;
    }
  }

  explicit LidarScan_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->stamp = 0ull;
      this->scanfreq = 0.0f;
      this->samplerate = 0.0f;
    }
  }

  // field types and members
  using _stamp_type =
    uint64_t;
  _stamp_type stamp;
  using _scanfreq_type =
    float;
  _scanfreq_type scanfreq;
  using _samplerate_type =
    float;
  _samplerate_type samplerate;
  using _range_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _range_type range;
  using _angle_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _angle_type angle;
  using _intensity_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _intensity_type intensity;

  // setters for named parameter idiom
  Type & set__stamp(
    const uint64_t & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__scanfreq(
    const float & _arg)
  {
    this->scanfreq = _arg;
    return *this;
  }
  Type & set__samplerate(
    const float & _arg)
  {
    this->samplerate = _arg;
    return *this;
  }
  Type & set__range(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->range = _arg;
    return *this;
  }
  Type & set__angle(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->angle = _arg;
    return *this;
  }
  Type & set__intensity(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->intensity = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    lidar_interfaces::msg::LidarScan_<ContainerAllocator> *;
  using ConstRawPtr =
    const lidar_interfaces::msg::LidarScan_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<lidar_interfaces::msg::LidarScan_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<lidar_interfaces::msg::LidarScan_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      lidar_interfaces::msg::LidarScan_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<lidar_interfaces::msg::LidarScan_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      lidar_interfaces::msg::LidarScan_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<lidar_interfaces::msg::LidarScan_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<lidar_interfaces::msg::LidarScan_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<lidar_interfaces::msg::LidarScan_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__lidar_interfaces__msg__LidarScan
    std::shared_ptr<lidar_interfaces::msg::LidarScan_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__lidar_interfaces__msg__LidarScan
    std::shared_ptr<lidar_interfaces::msg::LidarScan_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LidarScan_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->scanfreq != other.scanfreq) {
      return false;
    }
    if (this->samplerate != other.samplerate) {
      return false;
    }
    if (this->range != other.range) {
      return false;
    }
    if (this->angle != other.angle) {
      return false;
    }
    if (this->intensity != other.intensity) {
      return false;
    }
    return true;
  }
  bool operator!=(const LidarScan_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LidarScan_

// alias to use template instance with default allocator
using LidarScan =
  lidar_interfaces::msg::LidarScan_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace lidar_interfaces

#endif  // LIDAR_INTERFACES__MSG__DETAIL__LIDAR_SCAN__STRUCT_HPP_
