// Generated by gencpp from file iau_ros_msgs/Follow.msg
// DO NOT EDIT!


#ifndef IAU_ROS_MSGS_MESSAGE_FOLLOW_H
#define IAU_ROS_MSGS_MESSAGE_FOLLOW_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include "../msgHeader//PointXYA.h"
//#include <iau_ros_msgs/PointXYA.h>

namespace iau_ros_msgs
{
template <class ContainerAllocator>
struct Follow_
{
  typedef Follow_<ContainerAllocator> Type;

  Follow_()
    : num(0)
    , points()
    , cur_pos()
    , speed(0)
    , forceAngle(0.0)
    , force(0)  {
    }
  Follow_(const ContainerAllocator& _alloc)
    : num(0)
    , points(_alloc)
    , cur_pos(_alloc)
    , speed(0)
    , forceAngle(0.0)
    , force(0)  {
  (void)_alloc;
    }



   typedef int32_t _num_type;
  _num_type num;

   typedef std::vector< ::iau_ros_msgs::PointXYA_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::iau_ros_msgs::PointXYA_<ContainerAllocator> >::other >  _points_type;
  _points_type points;

   typedef  ::iau_ros_msgs::PointXYA_<ContainerAllocator>  _cur_pos_type;
  _cur_pos_type cur_pos;

   typedef int8_t _speed_type;
  _speed_type speed;

   typedef double _forceAngle_type;
  _forceAngle_type forceAngle;

   typedef uint8_t _force_type;
  _force_type force;





  typedef boost::shared_ptr< ::iau_ros_msgs::Follow_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::iau_ros_msgs::Follow_<ContainerAllocator> const> ConstPtr;

}; // struct Follow_

typedef ::iau_ros_msgs::Follow_<std::allocator<void> > Follow;

typedef boost::shared_ptr< ::iau_ros_msgs::Follow > FollowPtr;
typedef boost::shared_ptr< ::iau_ros_msgs::Follow const> FollowConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::iau_ros_msgs::Follow_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::iau_ros_msgs::Follow_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::iau_ros_msgs::Follow_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::iau_ros_msgs::Follow_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::iau_ros_msgs::Follow_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::iau_ros_msgs::Follow_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::iau_ros_msgs::Follow_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::iau_ros_msgs::Follow_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::iau_ros_msgs::Follow_<ContainerAllocator> >
{
  static const char* value()
  {
    return "29793f9c93a43f0dc3bb6d926e431202";
  }

  static const char* value(const ::iau_ros_msgs::Follow_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x29793f9c93a43f0dULL;
  static const uint64_t static_value2 = 0xc3bb6d926e431202ULL;
};

template<class ContainerAllocator>
struct DataType< ::iau_ros_msgs::Follow_<ContainerAllocator> >
{
  static const char* value()
  {
    return "iau_ros_msgs/Follow";
  }

  static const char* value(const ::iau_ros_msgs::Follow_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::iau_ros_msgs::Follow_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32      num     # points amount, use points.size() instead\n\
PointXYA[] points  # local position. angle between x axis in rad.  car is origin\n\
PointXYA   cur_pos # global position. angle between x axis in rad\n\
int8       speed\n\
float64 forceAngle\n\
# b'xxxxxx01 forcestop\n\
# b'xxxxxx10 forcespeed\n\
# b'xxxx1xxx forceangle\n\
# b'xxxxxx11 don't control\n\
# b'xxxxx0xx go ahead\n\
# b'xxxxx1xx go back\n\
uint8      force\n\
\n\
================================================================================\n\
MSG: iau_ros_msgs/PointXYA\n\
float64 x\n\
float64 y\n\
float64 yaw  # degs\n\
";
  }

  static const char* value(const ::iau_ros_msgs::Follow_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::iau_ros_msgs::Follow_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.num);
      stream.next(m.points);
      stream.next(m.cur_pos);
      stream.next(m.speed);
      stream.next(m.forceAngle);
      stream.next(m.force);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Follow_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::iau_ros_msgs::Follow_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::iau_ros_msgs::Follow_<ContainerAllocator>& v)
  {
    s << indent << "num: ";
    Printer<int32_t>::stream(s, indent + "  ", v.num);
    s << indent << "points[]" << std::endl;
    for (size_t i = 0; i < v.points.size(); ++i)
    {
      s << indent << "  points[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::iau_ros_msgs::PointXYA_<ContainerAllocator> >::stream(s, indent + "    ", v.points[i]);
    }
    s << indent << "cur_pos: ";
    s << std::endl;
    Printer< ::iau_ros_msgs::PointXYA_<ContainerAllocator> >::stream(s, indent + "  ", v.cur_pos);
    s << indent << "speed: ";
    Printer<int8_t>::stream(s, indent + "  ", v.speed);
    s << indent << "forceAngle: ";
    Printer<double>::stream(s, indent + "  ", v.forceAngle);
    s << indent << "force: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.force);
  }
};

} // namespace message_operations
} // namespace ros

#endif // IAU_ROS_MSGS_MESSAGE_FOLLOW_H
