// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from num_interfaces:msg/Num.idl
// generated code does not contain a copyright notice

#ifndef NUM_INTERFACES__MSG__DETAIL__NUM__STRUCT_H_
#define NUM_INTERFACES__MSG__DETAIL__NUM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/Num in the package num_interfaces.
typedef struct num_interfaces__msg__Num
{
  int64_t num1;
} num_interfaces__msg__Num;

// Struct for a sequence of num_interfaces__msg__Num.
typedef struct num_interfaces__msg__Num__Sequence
{
  num_interfaces__msg__Num * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} num_interfaces__msg__Num__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NUM_INTERFACES__MSG__DETAIL__NUM__STRUCT_H_
