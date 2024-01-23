// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_interface:msg/Message.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACE__MSG__DETAIL__MESSAGE__BUILDER_HPP_
#define CUSTOM_INTERFACE__MSG__DETAIL__MESSAGE__BUILDER_HPP_

#include "custom_interface/msg/detail/message__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_interface
{

namespace msg
{

namespace builder
{

class Init_Message_data2
{
public:
  explicit Init_Message_data2(::custom_interface::msg::Message & msg)
  : msg_(msg)
  {}
  ::custom_interface::msg::Message data2(::custom_interface::msg::Message::_data2_type arg)
  {
    msg_.data2 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interface::msg::Message msg_;
};

class Init_Message_data1
{
public:
  Init_Message_data1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Message_data2 data1(::custom_interface::msg::Message::_data1_type arg)
  {
    msg_.data1 = std::move(arg);
    return Init_Message_data2(msg_);
  }

private:
  ::custom_interface::msg::Message msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interface::msg::Message>()
{
  return custom_interface::msg::builder::Init_Message_data1();
}

}  // namespace custom_interface

#endif  // CUSTOM_INTERFACE__MSG__DETAIL__MESSAGE__BUILDER_HPP_
