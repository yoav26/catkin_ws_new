// Generated by gencpp from file gazebo_msgs/GetWorldProperties.msg
// DO NOT EDIT!


#ifndef GAZEBO_MSGS_MESSAGE_GETWORLDPROPERTIES_H
#define GAZEBO_MSGS_MESSAGE_GETWORLDPROPERTIES_H

#include <ros/service_traits.h>


#include <gazebo_msgs/GetWorldPropertiesRequest.h>
#include <gazebo_msgs/GetWorldPropertiesResponse.h>


namespace gazebo_msgs
{

struct GetWorldProperties
{

typedef GetWorldPropertiesRequest Request;
typedef GetWorldPropertiesResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GetWorldProperties
} // namespace gazebo_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::gazebo_msgs::GetWorldProperties > {
  static const char* value()
  {
    return "36bb0f2eccf4d8be971410c22818ba3f";
  }

  static const char* value(const ::gazebo_msgs::GetWorldProperties&) { return value(); }
};

template<>
struct DataType< ::gazebo_msgs::GetWorldProperties > {
  static const char* value()
  {
    return "gazebo_msgs/GetWorldProperties";
  }

  static const char* value(const ::gazebo_msgs::GetWorldProperties&) { return value(); }
};


// service_traits::MD5Sum< ::gazebo_msgs::GetWorldPropertiesRequest> should match 
// service_traits::MD5Sum< ::gazebo_msgs::GetWorldProperties > 
template<>
struct MD5Sum< ::gazebo_msgs::GetWorldPropertiesRequest>
{
  static const char* value()
  {
    return MD5Sum< ::gazebo_msgs::GetWorldProperties >::value();
  }
  static const char* value(const ::gazebo_msgs::GetWorldPropertiesRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::gazebo_msgs::GetWorldPropertiesRequest> should match 
// service_traits::DataType< ::gazebo_msgs::GetWorldProperties > 
template<>
struct DataType< ::gazebo_msgs::GetWorldPropertiesRequest>
{
  static const char* value()
  {
    return DataType< ::gazebo_msgs::GetWorldProperties >::value();
  }
  static const char* value(const ::gazebo_msgs::GetWorldPropertiesRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::gazebo_msgs::GetWorldPropertiesResponse> should match 
// service_traits::MD5Sum< ::gazebo_msgs::GetWorldProperties > 
template<>
struct MD5Sum< ::gazebo_msgs::GetWorldPropertiesResponse>
{
  static const char* value()
  {
    return MD5Sum< ::gazebo_msgs::GetWorldProperties >::value();
  }
  static const char* value(const ::gazebo_msgs::GetWorldPropertiesResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::gazebo_msgs::GetWorldPropertiesResponse> should match 
// service_traits::DataType< ::gazebo_msgs::GetWorldProperties > 
template<>
struct DataType< ::gazebo_msgs::GetWorldPropertiesResponse>
{
  static const char* value()
  {
    return DataType< ::gazebo_msgs::GetWorldProperties >::value();
  }
  static const char* value(const ::gazebo_msgs::GetWorldPropertiesResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // GAZEBO_MSGS_MESSAGE_GETWORLDPROPERTIES_H
