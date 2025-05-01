// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from udp_msgs:srv/UdpSocket.idl
// generated code does not contain a copyright notice

#ifndef UDP_MSGS__SRV__DETAIL__UDP_SOCKET__TRAITS_HPP_
#define UDP_MSGS__SRV__DETAIL__UDP_SOCKET__TRAITS_HPP_

#include "udp_msgs/srv/detail/udp_socket__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<udp_msgs::srv::UdpSocket_Request>()
{
  return "udp_msgs::srv::UdpSocket_Request";
}

template<>
inline const char * name<udp_msgs::srv::UdpSocket_Request>()
{
  return "udp_msgs/srv/UdpSocket_Request";
}

template<>
struct has_fixed_size<udp_msgs::srv::UdpSocket_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<udp_msgs::srv::UdpSocket_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<udp_msgs::srv::UdpSocket_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<udp_msgs::srv::UdpSocket_Response>()
{
  return "udp_msgs::srv::UdpSocket_Response";
}

template<>
inline const char * name<udp_msgs::srv::UdpSocket_Response>()
{
  return "udp_msgs/srv/UdpSocket_Response";
}

template<>
struct has_fixed_size<udp_msgs::srv::UdpSocket_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<udp_msgs::srv::UdpSocket_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<udp_msgs::srv::UdpSocket_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<udp_msgs::srv::UdpSocket>()
{
  return "udp_msgs::srv::UdpSocket";
}

template<>
inline const char * name<udp_msgs::srv::UdpSocket>()
{
  return "udp_msgs/srv/UdpSocket";
}

template<>
struct has_fixed_size<udp_msgs::srv::UdpSocket>
  : std::integral_constant<
    bool,
    has_fixed_size<udp_msgs::srv::UdpSocket_Request>::value &&
    has_fixed_size<udp_msgs::srv::UdpSocket_Response>::value
  >
{
};

template<>
struct has_bounded_size<udp_msgs::srv::UdpSocket>
  : std::integral_constant<
    bool,
    has_bounded_size<udp_msgs::srv::UdpSocket_Request>::value &&
    has_bounded_size<udp_msgs::srv::UdpSocket_Response>::value
  >
{
};

template<>
struct is_service<udp_msgs::srv::UdpSocket>
  : std::true_type
{
};

template<>
struct is_service_request<udp_msgs::srv::UdpSocket_Request>
  : std::true_type
{
};

template<>
struct is_service_response<udp_msgs::srv::UdpSocket_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // UDP_MSGS__SRV__DETAIL__UDP_SOCKET__TRAITS_HPP_
