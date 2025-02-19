// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:msg/Num.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__NUM__BUILDER_HPP_
#define INTERFACES__MSG__DETAIL__NUM__BUILDER_HPP_

#include "interfaces/msg/detail/num__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace interfaces
{

namespace msg
{

namespace builder
{

class Init_Num_num1
{
public:
  Init_Num_num1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaces::msg::Num num1(::interfaces::msg::Num::_num1_type arg)
  {
    msg_.num1 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::msg::Num msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::msg::Num>()
{
  return interfaces::msg::builder::Init_Num_num1();
}

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__NUM__BUILDER_HPP_
