// Generated by gencpp from file beginner_tutorials/coordinates.msg
// DO NOT EDIT!


#ifndef BEGINNER_TUTORIALS_MESSAGE_COORDINATES_H
#define BEGINNER_TUTORIALS_MESSAGE_COORDINATES_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace beginner_tutorials
{
template <class ContainerAllocator>
struct coordinates_
{
  typedef coordinates_<ContainerAllocator> Type;

  coordinates_()
    : datax()
    , datay()
    , dataz()  {
    }
  coordinates_(const ContainerAllocator& _alloc)
    : datax(_alloc)
    , datay(_alloc)
    , dataz(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _datax_type;
  _datax_type datax;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _datay_type;
  _datay_type datay;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _dataz_type;
  _dataz_type dataz;





  typedef boost::shared_ptr< ::beginner_tutorials::coordinates_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::beginner_tutorials::coordinates_<ContainerAllocator> const> ConstPtr;

}; // struct coordinates_

typedef ::beginner_tutorials::coordinates_<std::allocator<void> > coordinates;

typedef boost::shared_ptr< ::beginner_tutorials::coordinates > coordinatesPtr;
typedef boost::shared_ptr< ::beginner_tutorials::coordinates const> coordinatesConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::beginner_tutorials::coordinates_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::beginner_tutorials::coordinates_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace beginner_tutorials

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'beginner_tutorials': ['/home/yoav/catkin_ws/src/beginner_tutorials/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::beginner_tutorials::coordinates_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::beginner_tutorials::coordinates_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::beginner_tutorials::coordinates_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::beginner_tutorials::coordinates_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::beginner_tutorials::coordinates_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::beginner_tutorials::coordinates_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::beginner_tutorials::coordinates_<ContainerAllocator> >
{
  static const char* value()
  {
    return "6d9fdd56a82d84b20d8a69a500869003";
  }

  static const char* value(const ::beginner_tutorials::coordinates_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x6d9fdd56a82d84b2ULL;
  static const uint64_t static_value2 = 0x0d8a69a500869003ULL;
};

template<class ContainerAllocator>
struct DataType< ::beginner_tutorials::coordinates_<ContainerAllocator> >
{
  static const char* value()
  {
    return "beginner_tutorials/coordinates";
  }

  static const char* value(const ::beginner_tutorials::coordinates_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::beginner_tutorials::coordinates_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64[] datax\n\
float64[] datay\n\
float64[] dataz\n\
";
  }

  static const char* value(const ::beginner_tutorials::coordinates_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::beginner_tutorials::coordinates_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.datax);
      stream.next(m.datay);
      stream.next(m.dataz);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct coordinates_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::beginner_tutorials::coordinates_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::beginner_tutorials::coordinates_<ContainerAllocator>& v)
  {
    s << indent << "datax[]" << std::endl;
    for (size_t i = 0; i < v.datax.size(); ++i)
    {
      s << indent << "  datax[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.datax[i]);
    }
    s << indent << "datay[]" << std::endl;
    for (size_t i = 0; i < v.datay.size(); ++i)
    {
      s << indent << "  datay[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.datay[i]);
    }
    s << indent << "dataz[]" << std::endl;
    for (size_t i = 0; i < v.dataz.size(); ++i)
    {
      s << indent << "  dataz[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.dataz[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // BEGINNER_TUTORIALS_MESSAGE_COORDINATES_H
