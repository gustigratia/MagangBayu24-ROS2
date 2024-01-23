// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from num_interfaces:msg/Num.idl
// generated code does not contain a copyright notice
#include "num_interfaces/msg/detail/num__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
num_interfaces__msg__Num__init(num_interfaces__msg__Num * msg)
{
  if (!msg) {
    return false;
  }
  // num1
  return true;
}

void
num_interfaces__msg__Num__fini(num_interfaces__msg__Num * msg)
{
  if (!msg) {
    return;
  }
  // num1
}

bool
num_interfaces__msg__Num__are_equal(const num_interfaces__msg__Num * lhs, const num_interfaces__msg__Num * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // num1
  if (lhs->num1 != rhs->num1) {
    return false;
  }
  return true;
}

bool
num_interfaces__msg__Num__copy(
  const num_interfaces__msg__Num * input,
  num_interfaces__msg__Num * output)
{
  if (!input || !output) {
    return false;
  }
  // num1
  output->num1 = input->num1;
  return true;
}

num_interfaces__msg__Num *
num_interfaces__msg__Num__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  num_interfaces__msg__Num * msg = (num_interfaces__msg__Num *)allocator.allocate(sizeof(num_interfaces__msg__Num), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(num_interfaces__msg__Num));
  bool success = num_interfaces__msg__Num__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
num_interfaces__msg__Num__destroy(num_interfaces__msg__Num * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    num_interfaces__msg__Num__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
num_interfaces__msg__Num__Sequence__init(num_interfaces__msg__Num__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  num_interfaces__msg__Num * data = NULL;

  if (size) {
    data = (num_interfaces__msg__Num *)allocator.zero_allocate(size, sizeof(num_interfaces__msg__Num), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = num_interfaces__msg__Num__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        num_interfaces__msg__Num__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
num_interfaces__msg__Num__Sequence__fini(num_interfaces__msg__Num__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      num_interfaces__msg__Num__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

num_interfaces__msg__Num__Sequence *
num_interfaces__msg__Num__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  num_interfaces__msg__Num__Sequence * array = (num_interfaces__msg__Num__Sequence *)allocator.allocate(sizeof(num_interfaces__msg__Num__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = num_interfaces__msg__Num__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
num_interfaces__msg__Num__Sequence__destroy(num_interfaces__msg__Num__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    num_interfaces__msg__Num__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
num_interfaces__msg__Num__Sequence__are_equal(const num_interfaces__msg__Num__Sequence * lhs, const num_interfaces__msg__Num__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!num_interfaces__msg__Num__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
num_interfaces__msg__Num__Sequence__copy(
  const num_interfaces__msg__Num__Sequence * input,
  num_interfaces__msg__Num__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(num_interfaces__msg__Num);
    num_interfaces__msg__Num * data =
      (num_interfaces__msg__Num *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!num_interfaces__msg__Num__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          num_interfaces__msg__Num__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!num_interfaces__msg__Num__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
