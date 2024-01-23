// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from num_interfaces:msg/Num.idl
// generated code does not contain a copyright notice

#ifndef NUM_INTERFACES__MSG__DETAIL__NUM__TRAITS_HPP_
#define NUM_INTERFACES__MSG__DETAIL__NUM__TRAITS_HPP_

#include "num_interfaces/msg/detail/num__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<num_interfaces::msg::Num>()
{
  return "num_interfaces::msg::Num";
}

template<>
inline const char * name<num_interfaces::msg::Num>()
{
  return "num_interfaces/msg/Num";
}

template<>
struct has_fixed_size<num_interfaces::msg::Num>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<num_interfaces::msg::Num>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<num_interfaces::msg::Num>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NUM_INTERFACES__MSG__DETAIL__NUM__TRAITS_HPP_
