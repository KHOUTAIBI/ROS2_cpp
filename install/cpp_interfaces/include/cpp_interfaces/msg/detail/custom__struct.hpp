// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cpp_interfaces:msg/Custom.idl
// generated code does not contain a copyright notice

#ifndef CPP_INTERFACES__MSG__DETAIL__CUSTOM__STRUCT_HPP_
#define CPP_INTERFACES__MSG__DETAIL__CUSTOM__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__cpp_interfaces__msg__Custom __attribute__((deprecated))
#else
# define DEPRECATED__cpp_interfaces__msg__Custom __declspec(deprecated)
#endif

namespace cpp_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Custom_
{
  using Type = Custom_<ContainerAllocator>;

  explicit Custom_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->force = 0.0f;
      this->temperature = 0.0f;
      this->velocity = 0.0f;
      this->acceleration = 0.0f;
    }
  }

  explicit Custom_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->force = 0.0f;
      this->temperature = 0.0f;
      this->velocity = 0.0f;
      this->acceleration = 0.0f;
    }
  }

  // field types and members
  using _force_type =
    float;
  _force_type force;
  using _temperature_type =
    float;
  _temperature_type temperature;
  using _velocity_type =
    float;
  _velocity_type velocity;
  using _acceleration_type =
    float;
  _acceleration_type acceleration;

  // setters for named parameter idiom
  Type & set__force(
    const float & _arg)
  {
    this->force = _arg;
    return *this;
  }
  Type & set__temperature(
    const float & _arg)
  {
    this->temperature = _arg;
    return *this;
  }
  Type & set__velocity(
    const float & _arg)
  {
    this->velocity = _arg;
    return *this;
  }
  Type & set__acceleration(
    const float & _arg)
  {
    this->acceleration = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cpp_interfaces::msg::Custom_<ContainerAllocator> *;
  using ConstRawPtr =
    const cpp_interfaces::msg::Custom_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cpp_interfaces::msg::Custom_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cpp_interfaces::msg::Custom_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cpp_interfaces::msg::Custom_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cpp_interfaces::msg::Custom_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cpp_interfaces::msg::Custom_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cpp_interfaces::msg::Custom_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cpp_interfaces::msg::Custom_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cpp_interfaces::msg::Custom_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cpp_interfaces__msg__Custom
    std::shared_ptr<cpp_interfaces::msg::Custom_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cpp_interfaces__msg__Custom
    std::shared_ptr<cpp_interfaces::msg::Custom_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Custom_ & other) const
  {
    if (this->force != other.force) {
      return false;
    }
    if (this->temperature != other.temperature) {
      return false;
    }
    if (this->velocity != other.velocity) {
      return false;
    }
    if (this->acceleration != other.acceleration) {
      return false;
    }
    return true;
  }
  bool operator!=(const Custom_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Custom_

// alias to use template instance with default allocator
using Custom =
  cpp_interfaces::msg::Custom_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace cpp_interfaces

#endif  // CPP_INTERFACES__MSG__DETAIL__CUSTOM__STRUCT_HPP_
