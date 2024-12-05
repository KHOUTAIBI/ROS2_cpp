// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from cpp_interfaces:msg/STMState.idl
// generated code does not contain a copyright notice

#ifndef CPP_INTERFACES__MSG__DETAIL__STM_STATE__FUNCTIONS_H_
#define CPP_INTERFACES__MSG__DETAIL__STM_STATE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "cpp_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "cpp_interfaces/msg/detail/stm_state__struct.h"

/// Initialize msg/STMState message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * cpp_interfaces__msg__STMState
 * )) before or use
 * cpp_interfaces__msg__STMState__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_interfaces
bool
cpp_interfaces__msg__STMState__init(cpp_interfaces__msg__STMState * msg);

/// Finalize msg/STMState message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_interfaces
void
cpp_interfaces__msg__STMState__fini(cpp_interfaces__msg__STMState * msg);

/// Create msg/STMState message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * cpp_interfaces__msg__STMState__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_interfaces
cpp_interfaces__msg__STMState *
cpp_interfaces__msg__STMState__create();

/// Destroy msg/STMState message.
/**
 * It calls
 * cpp_interfaces__msg__STMState__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_interfaces
void
cpp_interfaces__msg__STMState__destroy(cpp_interfaces__msg__STMState * msg);

/// Check for msg/STMState message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_interfaces
bool
cpp_interfaces__msg__STMState__are_equal(const cpp_interfaces__msg__STMState * lhs, const cpp_interfaces__msg__STMState * rhs);

/// Copy a msg/STMState message.
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
cpp_interfaces__msg__STMState__copy(
  const cpp_interfaces__msg__STMState * input,
  cpp_interfaces__msg__STMState * output);

/// Initialize array of msg/STMState messages.
/**
 * It allocates the memory for the number of elements and calls
 * cpp_interfaces__msg__STMState__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_interfaces
bool
cpp_interfaces__msg__STMState__Sequence__init(cpp_interfaces__msg__STMState__Sequence * array, size_t size);

/// Finalize array of msg/STMState messages.
/**
 * It calls
 * cpp_interfaces__msg__STMState__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_interfaces
void
cpp_interfaces__msg__STMState__Sequence__fini(cpp_interfaces__msg__STMState__Sequence * array);

/// Create array of msg/STMState messages.
/**
 * It allocates the memory for the array and calls
 * cpp_interfaces__msg__STMState__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_interfaces
cpp_interfaces__msg__STMState__Sequence *
cpp_interfaces__msg__STMState__Sequence__create(size_t size);

/// Destroy array of msg/STMState messages.
/**
 * It calls
 * cpp_interfaces__msg__STMState__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_interfaces
void
cpp_interfaces__msg__STMState__Sequence__destroy(cpp_interfaces__msg__STMState__Sequence * array);

/// Check for msg/STMState message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_interfaces
bool
cpp_interfaces__msg__STMState__Sequence__are_equal(const cpp_interfaces__msg__STMState__Sequence * lhs, const cpp_interfaces__msg__STMState__Sequence * rhs);

/// Copy an array of msg/STMState messages.
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
cpp_interfaces__msg__STMState__Sequence__copy(
  const cpp_interfaces__msg__STMState__Sequence * input,
  cpp_interfaces__msg__STMState__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // CPP_INTERFACES__MSG__DETAIL__STM_STATE__FUNCTIONS_H_