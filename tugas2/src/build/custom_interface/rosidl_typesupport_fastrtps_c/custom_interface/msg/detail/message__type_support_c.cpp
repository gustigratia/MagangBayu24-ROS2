// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from custom_interface:msg/Message.idl
// generated code does not contain a copyright notice
#include "custom_interface/msg/detail/message__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "custom_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "custom_interface/msg/detail/message__struct.h"
#include "custom_interface/msg/detail/message__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _Message__ros_msg_type = custom_interface__msg__Message;

static bool _Message__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Message__ros_msg_type * ros_message = static_cast<const _Message__ros_msg_type *>(untyped_ros_message);
  // Field name: data1
  {
    cdr << (ros_message->data1 ? true : false);
  }

  // Field name: data2
  {
    cdr << (ros_message->data2 ? true : false);
  }

  return true;
}

static bool _Message__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Message__ros_msg_type * ros_message = static_cast<_Message__ros_msg_type *>(untyped_ros_message);
  // Field name: data1
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->data1 = tmp ? true : false;
  }

  // Field name: data2
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->data2 = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_interface
size_t get_serialized_size_custom_interface__msg__Message(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Message__ros_msg_type * ros_message = static_cast<const _Message__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name data1
  {
    size_t item_size = sizeof(ros_message->data1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name data2
  {
    size_t item_size = sizeof(ros_message->data2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Message__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_custom_interface__msg__Message(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_interface
size_t max_serialized_size_custom_interface__msg__Message(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: data1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: data2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _Message__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_custom_interface__msg__Message(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Message = {
  "custom_interface::msg",
  "Message",
  _Message__cdr_serialize,
  _Message__cdr_deserialize,
  _Message__get_serialized_size,
  _Message__max_serialized_size
};

static rosidl_message_type_support_t _Message__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Message,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_interface, msg, Message)() {
  return &_Message__type_support;
}

#if defined(__cplusplus)
}
#endif
