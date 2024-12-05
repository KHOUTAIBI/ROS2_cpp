// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from lidar_interfaces:msg/LidarScan.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "lidar_interfaces/msg/detail/lidar_scan__rosidl_typesupport_introspection_c.h"
#include "lidar_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "lidar_interfaces/msg/detail/lidar_scan__functions.h"
#include "lidar_interfaces/msg/detail/lidar_scan__struct.h"


// Include directives for member types
// Member `range`
// Member `angle`
// Member `intensity`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void LidarScan__rosidl_typesupport_introspection_c__LidarScan_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  lidar_interfaces__msg__LidarScan__init(message_memory);
}

void LidarScan__rosidl_typesupport_introspection_c__LidarScan_fini_function(void * message_memory)
{
  lidar_interfaces__msg__LidarScan__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember LidarScan__rosidl_typesupport_introspection_c__LidarScan_message_member_array[6] = {
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lidar_interfaces__msg__LidarScan, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "scanfreq",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lidar_interfaces__msg__LidarScan, scanfreq),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "samplerate",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lidar_interfaces__msg__LidarScan, samplerate),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "range",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lidar_interfaces__msg__LidarScan, range),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "angle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lidar_interfaces__msg__LidarScan, angle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "intensity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lidar_interfaces__msg__LidarScan, intensity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers LidarScan__rosidl_typesupport_introspection_c__LidarScan_message_members = {
  "lidar_interfaces__msg",  // message namespace
  "LidarScan",  // message name
  6,  // number of fields
  sizeof(lidar_interfaces__msg__LidarScan),
  LidarScan__rosidl_typesupport_introspection_c__LidarScan_message_member_array,  // message members
  LidarScan__rosidl_typesupport_introspection_c__LidarScan_init_function,  // function to initialize message memory (memory has to be allocated)
  LidarScan__rosidl_typesupport_introspection_c__LidarScan_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t LidarScan__rosidl_typesupport_introspection_c__LidarScan_message_type_support_handle = {
  0,
  &LidarScan__rosidl_typesupport_introspection_c__LidarScan_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_lidar_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lidar_interfaces, msg, LidarScan)() {
  if (!LidarScan__rosidl_typesupport_introspection_c__LidarScan_message_type_support_handle.typesupport_identifier) {
    LidarScan__rosidl_typesupport_introspection_c__LidarScan_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &LidarScan__rosidl_typesupport_introspection_c__LidarScan_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
