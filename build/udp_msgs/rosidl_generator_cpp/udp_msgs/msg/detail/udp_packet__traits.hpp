// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from udp_msgs:msg/UdpPacket.idl
// generated code does not contain a copyright notice

#ifndef UDP_MSGS__MSG__DETAIL__UDP_PACKET__TRAITS_HPP_
#define UDP_MSGS__MSG__DETAIL__UDP_PACKET__TRAITS_HPP_

#include "udp_msgs/msg/detail/udp_packet__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<udp_msgs::msg::UdpPacket>()
{
  return "udp_msgs::msg::UdpPacket";
}

template<>
inline const char * name<udp_msgs::msg::UdpPacket>()
{
  return "udp_msgs/msg/UdpPacket";
}

template<>
struct has_fixed_size<udp_msgs::msg::UdpPacket>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<udp_msgs::msg::UdpPacket>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<udp_msgs::msg::UdpPacket>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // UDP_MSGS__MSG__DETAIL__UDP_PACKET__TRAITS_HPP_
