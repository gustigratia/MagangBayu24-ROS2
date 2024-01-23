// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from custom_interface:msg/Message.idl
// generated code does not contain a copyright notice
#include "custom_interface/msg/detail/message__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
custom_interface__msg__Message__init(custom_interface__msg__Message * msg)
{
  if (!msg) {
    return false;
  }
  // data1
  // data2
  return true;
}

void
custom_interface__msg__Message__fini(custom_interface__msg__Message * msg)
{
  if (!msg) {
    return;
  }
  // data1
  // data2
}

bool
custom_interface__msg__Message__are_equal(const custom_interface__msg__Message * lhs, const custom_interface__msg__Message * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // data1
  if (lhs->data1 != rhs->data1) {
    return false;
  }
  // data2
  if (lhs->data2 != rhs->data2) {
    return false;
  }
  return true;
}

bool
custom_interface__msg__Message__copy(
  const custom_interface__msg__Message * input,
  custom_interface__msg__Message * output)
{
  if (!input || !output) {
    return false;
  }
  // data1
  output->data1 = input->data1;
  // data2
  output->data2 = input->data2;
  return true;
}

custom_interface__msg__Message *
custom_interface__msg__Message__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_interface__msg__Message * msg = (custom_interface__msg__Message *)allocator.allocate(sizeof(custom_interface__msg__Message), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_interface__msg__Message));
  bool success = custom_interface__msg__Message__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
custom_interface__msg__Message__destroy(custom_interface__msg__Message * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    custom_interface__msg__Message__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
custom_interface__msg__Message__Sequence__init(custom_interface__msg__Message__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_interface__msg__Message * data = NULL;

  if (size) {
    data = (custom_interface__msg__Message *)allocator.zero_allocate(size, sizeof(custom_interface__msg__Message), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custom_interface__msg__Message__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custom_interface__msg__Message__fini(&data[i - 1]);
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
custom_interface__msg__Message__Sequence__fini(custom_interface__msg__Message__Sequence * array)
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
      custom_interface__msg__Message__fini(&array->data[i]);
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

custom_interface__msg__Message__Sequence *
custom_interface__msg__Message__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_interface__msg__Message__Sequence * array = (custom_interface__msg__Message__Sequence *)allocator.allocate(sizeof(custom_interface__msg__Message__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = custom_interface__msg__Message__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
custom_interface__msg__Message__Sequence__destroy(custom_interface__msg__Message__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    custom_interface__msg__Message__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
custom_interface__msg__Message__Sequence__are_equal(const custom_interface__msg__Message__Sequence * lhs, const custom_interface__msg__Message__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!custom_interface__msg__Message__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
custom_interface__msg__Message__Sequence__copy(
  const custom_interface__msg__Message__Sequence * input,
  custom_interface__msg__Message__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(custom_interface__msg__Message);
    custom_interface__msg__Message * data =
      (custom_interface__msg__Message *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!custom_interface__msg__Message__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          custom_interface__msg__Message__fini(&data[i]);
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
    if (!custom_interface__msg__Message__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
