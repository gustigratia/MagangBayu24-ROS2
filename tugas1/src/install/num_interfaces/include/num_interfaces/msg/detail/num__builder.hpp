// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from num_interfaces:msg/Num.idl
// generated code does not contain a copyright notice

#ifndef NUM_INTERFACES__MSG__DETAIL__NUM__BUILDER_HPP_
#define NUM_INTERFACES__MSG__DETAIL__NUM__BUILDER_HPP_

#include "num_interfaces/msg/detail/num__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace num_interfaces
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
  ::num_interfaces::msg::Num num1(::num_interfaces::msg::Num::_num1_type arg)
  {
    msg_.num1 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::num_interfaces::msg::Num msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::num_interfaces::msg::Num>()
{
  return num_interfaces::msg::builder::Init_Num_num1();
}

}  // namespace num_interfaces

#endif  // NUM_INTERFACES__MSG__DETAIL__NUM__BUILDER_HPP_
