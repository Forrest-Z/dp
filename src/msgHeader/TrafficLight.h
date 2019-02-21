// Generated by gencpp from file iau_ros_msgs/TrafficLight.msg
// DO NOT EDIT!


#ifndef IAU_ROS_MSGS_MESSAGE_TRAFFICLIGHT_H
#define IAU_ROS_MSGS_MESSAGE_TRAFFICLIGHT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace iau_ros_msgs
{
template <class ContainerAllocator>
struct TrafficLight_
{
  typedef TrafficLight_<ContainerAllocator> Type;

  TrafficLight_()
    : timestamp()
    , num(0)
    , turn()
    , color()
    , rest_time()
    , longitude(0.0)
    , latitude(0.0)  {
    }
  TrafficLight_(const ContainerAllocator& _alloc)
    : timestamp()
    , num(0)
    , turn(_alloc)
    , color(_alloc)
    , rest_time(_alloc)
    , longitude(0.0)
    , latitude(0.0)  {
  (void)_alloc;
    }



   typedef ros::Time _timestamp_type;
  _timestamp_type timestamp;

   typedef int8_t _num_type;
  _num_type num;

   typedef std::vector<int8_t, typename ContainerAllocator::template rebind<int8_t>::other >  _turn_type;
  _turn_type turn;

   typedef std::vector<int8_t, typename ContainerAllocator::template rebind<int8_t>::other >  _color_type;
  _color_type color;

   typedef std::vector<int8_t, typename ContainerAllocator::template rebind<int8_t>::other >  _rest_time_type;
  _rest_time_type rest_time;

   typedef double _longitude_type;
  _longitude_type longitude;

   typedef double _latitude_type;
  _latitude_type latitude;





  typedef boost::shared_ptr< ::iau_ros_msgs::TrafficLight_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::iau_ros_msgs::TrafficLight_<ContainerAllocator> const> ConstPtr;

}; // struct TrafficLight_

typedef ::iau_ros_msgs::TrafficLight_<std::allocator<void> > TrafficLight;

typedef boost::shared_ptr< ::iau_ros_msgs::TrafficLight > TrafficLightPtr;
typedef boost::shared_ptr< ::iau_ros_msgs::TrafficLight const> TrafficLightConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::iau_ros_msgs::TrafficLight_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::iau_ros_msgs::TrafficLight_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace iau_ros_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'iau_ros_msgs': ['/home/z/iau_ws/src/iau_ros_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::iau_ros_msgs::TrafficLight_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::iau_ros_msgs::TrafficLight_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::iau_ros_msgs::TrafficLight_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::iau_ros_msgs::TrafficLight_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::iau_ros_msgs::TrafficLight_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::iau_ros_msgs::TrafficLight_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::iau_ros_msgs::TrafficLight_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e205035d6085018d9ea4d11684209224";
  }

  static const char* value(const ::iau_ros_msgs::TrafficLight_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe205035d6085018dULL;
  static const uint64_t static_value2 = 0x9ea4d11684209224ULL;
};

template<class ContainerAllocator>
struct DataType< ::iau_ros_msgs::TrafficLight_<ContainerAllocator> >
{
  static const char* value()
  {
    return "iau_ros_msgs/TrafficLight";
  }

  static const char* value(const ::iau_ros_msgs::TrafficLight_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::iau_ros_msgs::TrafficLight_<ContainerAllocator> >
{
  static const char* value()
  {
    return "time      timestamp\n\
int8      num\n\
int8[]    turn\n\
int8[]    color\n\
int8[]    rest_time\n\
\n\
float64   longitude\n\
float64   latitude\n\
";
  }

  static const char* value(const ::iau_ros_msgs::TrafficLight_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::iau_ros_msgs::TrafficLight_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.timestamp);
      stream.next(m.num);
      stream.next(m.turn);
      stream.next(m.color);
      stream.next(m.rest_time);
      stream.next(m.longitude);
      stream.next(m.latitude);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TrafficLight_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::iau_ros_msgs::TrafficLight_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::iau_ros_msgs::TrafficLight_<ContainerAllocator>& v)
  {
    s << indent << "timestamp: ";
    Printer<ros::Time>::stream(s, indent + "  ", v.timestamp);
    s << indent << "num: ";
    Printer<int8_t>::stream(s, indent + "  ", v.num);
    s << indent << "turn[]" << std::endl;
    for (size_t i = 0; i < v.turn.size(); ++i)
    {
      s << indent << "  turn[" << i << "]: ";
      Printer<int8_t>::stream(s, indent + "  ", v.turn[i]);
    }
    s << indent << "color[]" << std::endl;
    for (size_t i = 0; i < v.color.size(); ++i)
    {
      s << indent << "  color[" << i << "]: ";
      Printer<int8_t>::stream(s, indent + "  ", v.color[i]);
    }
    s << indent << "rest_time[]" << std::endl;
    for (size_t i = 0; i < v.rest_time.size(); ++i)
    {
      s << indent << "  rest_time[" << i << "]: ";
      Printer<int8_t>::stream(s, indent + "  ", v.rest_time[i]);
    }
    s << indent << "longitude: ";
    Printer<double>::stream(s, indent + "  ", v.longitude);
    s << indent << "latitude: ";
    Printer<double>::stream(s, indent + "  ", v.latitude);
  }
};

} // namespace message_operations
} // namespace ros

#endif // IAU_ROS_MSGS_MESSAGE_TRAFFICLIGHT_H
