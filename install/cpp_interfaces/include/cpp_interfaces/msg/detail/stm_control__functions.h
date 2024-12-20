// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from cpp_interfaces:msg/STMControl.idl
// generated code does not contain a copyright notice

#ifndef CPP_INTERFACES__MSG__DETAIL__STM_CONTROL__FUNCTIONS_H_
#define CPP_INTERFACES__MSG__DETAIL__STM_CONTROL__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "cpp_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "cpp_interfaces/msg/detail/stm_control__struct.h"

/// Initialize msg/STMControl message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * cpp_interfaces__msg__STMControl
 * )) before or use
 * cpp_interfaces__msg__STMControl__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_interfaces
bool
cpp_interfaces__msg__STMControl__init(cpp_interfaces__msg__STMControl * msg);

/// Finalize msg/STMControl message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_interfaces
void
cpp_interfaces__msg__STMControl__fini(cpp_interfaces__msg__STMControl * msg);

/// Create msg/STMControl message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * cpp_interfaces__msg__STMControl__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_interfaces
cpp_interfaces__msg__STMControl *
cpp_interfaces__msg__STMControl__create();

/// Destroy msg/STMControl message.
/**
 * It calls
 * cpp_interfaces__msg__STMControl__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_interfaces
void
cpp_interfaces__msg__STMControl__destroy(cpp_interfaces__msg__STMControl * msg);

/// Check for msg/STMControl message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_interfaces
bool
cpp_interfaces__msg__STMControl__are_equal(const cpp_interfaces__msg__STMControl * lhs, const cpp_interfaces__msg__STMControl * rhs);

/// Copy a msg/STMControl message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_interfaces
bool
cpp_interfaces__msg__STMControl__copy(
  const cpp_interfaces__msg__STMControl * input,
  cpp_interfaces__msg__STMControl * output);

/// Initialize array of msg/STMControl messages.
/**
 * It allocates the memory for the number of elements and calls
 * cpp_interfaces__msg__STMControl__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_interfaces
bool
cpp_interfaces__msg__STMControl__Sequence__init(cpp_interfaces__msg__STMControl__Sequence * array, size_t size);

/// Finalize array of msg/STMControl messages.
/**
 * It calls
 * cpp_interfaces__msg__STMControl__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_interfaces
void
cpp_interfaces__msg__STMControl__Sequence__fini(cpp_interfaces__msg__STMControl__Sequence * array);

/// Create array of msg/STMControl messages.
/**
 * It allocates the memory for the array and calls
 * cpp_interfaces__msg__STMControl__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_interfaces
cpp_interfaces__msg__STMControl__Sequence *
cpp_interfaces__msg__STMControl__Sequence__create(size_t size);

/// Destroy array of msg/STMControl messages.
/**
 * It calls
 * cpp_interfaces__msg__STMControl__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_interfaces
void
cpp_interfaces__msg__STMControl__Sequence__destroy(cpp_interfaces__msg__STMControl__Sequence * array);

/// Check for msg/STMControl message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_interfaces
bool
cpp_interfaces__msg__STMControl__Sequence__are_equal(const cpp_interfaces__msg__STMControl__Sequence * lhs, const cpp_interfaces__msg__STMControl__Sequence * rhs);

/// Copy an array of msg/STMControl messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_interfaces
bool
cpp_interfaces__msg__STMControl__Sequence__copy(
  const cpp_interfaces__msg__STMControl__Sequence * input,
  cpp_interfaces__msg__STMControl__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // CPP_INTERFACES__MSG__DETAIL__STM_CONTROL__FUNCTIONS_H_
