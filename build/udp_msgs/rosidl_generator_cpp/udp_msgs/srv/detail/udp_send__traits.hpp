// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from udp_msgs:srv/UdpSend.idl
// generated code does not contain a copyright notice

#ifndef UDP_MSGS__SRV__DETAIL__UDP_SEND__TRAITS_HPP_
#define UDP_MSGS__SRV__DETAIL__UDP_SEND__TRAITS_HPP_

#include "udp_msgs/srv/detail/udp_send__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<udp_msgs::srv::UdpSend_Request>()
{
  return "udp_msgs::srv::UdpSend_Request";
}

template<>
inline const char * name<udp_msgs::srv::UdpSend_Request>()
{
  return "udp_msgs/srv/UdpSend_Request";
}

template<>
struct has_fixed_size<udp_msgs::srv::UdpSend_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<udp_msgs::srv::UdpSend_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<udp_msgs::srv::UdpSend_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<udp_msgs::srv::UdpSend_Response>()
{
  return "udp_msgs::srv::UdpSend_Response";
}

template<>
inline const char * name<udp_msgs::srv::UdpSend_Response>()
{
  return "udp_msgs/srv/UdpSend_Response";
}

template<>
struct has_fixed_size<udp_msgs::srv::UdpSend_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<udp_msgs::srv::UdpSend_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<udp_msgs::srv::UdpSend_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<udp_msgs::srv::UdpSend>()
{
  return "udp_msgs::srv::UdpSend";
}

template<>
inline const char * name<udp_msgs::srv::UdpSend>()
{
  return "udp_msgs/srv/UdpSend";
}

template<>
struct has_fixed_size<udp_msgs::srv::UdpSend>
  : std::integral_constant<
    bool,
    has_fixed_size<udp_msgs::srv::UdpSend_Request>::value &&
    has_fixed_size<udp_msgs::srv::UdpSend_Response>::value
  >
{
};

template<>
struct has_bounded_size<udp_msgs::srv::UdpSend>
  : std::integral_constant<
    bool,
    has_bounded_size<udp_msgs::srv::UdpSend_Request>::value &&
    has_bounded_size<udp_msgs::srv::UdpSend_Response>::value
  >
{
};

template<>
struct is_service<udp_msgs::srv::UdpSend>
  : std::true_type
{
};

template<>
struct is_service_request<udp_msgs::srv::UdpSend_Request>
  : std::true_type
{
};

template<>
struct is_service_response<udp_msgs::srv::UdpSend_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // UDP_MSGS__SRV__DETAIL__UDP_SEND__TRAITS_HPP_
