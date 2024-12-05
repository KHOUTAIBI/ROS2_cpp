// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from lidar_interfaces:msg/LidarScan.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "lidar_interfaces/msg/detail/lidar_scan__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace lidar_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void LidarScan_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) lidar_interfaces::msg::LidarScan(_init);
}

void LidarScan_fini_function(void * message_memory)
{
  auto typed_message = static_cast<lidar_interfaces::msg::LidarScan *>(message_memory);
  typed_message->~LidarScan();
}

size_t size_function__LidarScan__range(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__LidarScan__range(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__LidarScan__range(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void resize_function__LidarScan__range(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__LidarScan__angle(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__LidarScan__angle(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__LidarScan__angle(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void resize_function__LidarScan__angle(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__LidarScan__intensity(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__LidarScan__intensity(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__LidarScan__intensity(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void resize_function__LidarScan__intensity(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember LidarScan_message_member_array[6] = {
  {
    "stamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lidar_interfaces::msg::LidarScan, stamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "scanfreq",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lidar_interfaces::msg::LidarScan, scanfreq),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "samplerate",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lidar_interfaces::msg::LidarScan, samplerate),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "range",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lidar_interfaces::msg::LidarScan, range),  // bytes offset in struct
    nullptr,  // default value
    size_function__LidarScan__range,  // size() function pointer
    get_const_function__LidarScan__range,  // get_const(index) function pointer
    get_function__LidarScan__range,  // get(index) function pointer
    resize_function__LidarScan__range  // resize(index) function pointer
  },
  {
    "angle",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lidar_interfaces::msg::LidarScan, angle),  // bytes offset in struct
    nullptr,  // default value
    size_function__LidarScan__angle,  // size() function pointer
    get_const_function__LidarScan__angle,  // get_const(index) function pointer
    get_function__LidarScan__angle,  // get(index) function pointer
    resize_function__LidarScan__angle  // resize(index) function pointer
  },
  {
    "intensity",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lidar_interfaces::msg::LidarScan, intensity),  // bytes offset in struct
    nullptr,  // default value
    size_function__LidarScan__intensity,  // size() function pointer
    get_const_function__LidarScan__intensity,  // get_const(index) function pointer
    get_function__LidarScan__intensity,  // get(index) function pointer
    resize_function__LidarScan__intensity  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers LidarScan_message_members = {
  "lidar_interfaces::msg",  // message namespace
  "LidarScan",  // message name
  6,  // number of fields
  sizeof(lidar_interfaces::msg::LidarScan),
  LidarScan_message_member_array,  // message members
  LidarScan_init_function,  // function to initialize message memory (memory has to be allocated)
  LidarScan_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t LidarScan_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &LidarScan_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace lidar_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<lidar_interfaces::msg::LidarScan>()
{
  return &::lidar_interfaces::msg::rosidl_typesupport_introspection_cpp::LidarScan_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, lidar_interfaces, msg, LidarScan)() {
  return &::lidar_interfaces::msg::rosidl_typesupport_introspection_cpp::LidarScan_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
