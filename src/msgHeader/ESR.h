// Generated by gencpp from file iau_ros_msgs/ESR.msg
// DO NOT EDIT!


#ifndef IAU_ROS_MSGS_MESSAGE_ESR_H
#define IAU_ROS_MSGS_MESSAGE_ESR_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <iau_ros_msgs/RadarTarget.h>

namespace iau_ros_msgs
{
template <class ContainerAllocator>
struct ESR_
{
  typedef ESR_<ContainerAllocator> Type;

  ESR_()
    : timestamp()
    , targetCount(0)
    , targets()  {
    }
  ESR_(const ContainerAllocator& _alloc)
    : timestamp()
    , targetCount(0)
    , targets(_alloc)  {
  (void)_alloc;
    }



   typedef ros::Time _timestamp_type;
  _timestamp_type timestamp;

   typedef int32_t _targetCount_type;
  _targetCount_type targetCount;

   typedef std::vector< ::iau_ros_msgs::RadarTarget_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::iau_ros_msgs::RadarTarget_<ContainerAllocator> >::other >  _targets_type;
  _targets_type targets;





  typedef boost::shared_ptr< ::iau_ros_msgs::ESR_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::iau_ros_msgs::ESR_<ContainerAllocator> const> ConstPtr;

}; // struct ESR_

typedef ::iau_ros_msgs::ESR_<std::allocator<void> > ESR;

typedef boost::shared_ptr< ::iau_ros_msgs::ESR > ESRPtr;
typedef boost::shared_ptr< ::iau_ros_msgs::ESR const> ESRConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::iau_ros_msgs::ESR_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::iau_ros_msgs::ESR_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::iau_ros_msgs::ESR_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::iau_ros_msgs::ESR_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::iau_ros_msgs::ESR_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::iau_ros_msgs::ESR_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::iau_ros_msgs::ESR_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::iau_ros_msgs::ESR_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::iau_ros_msgs::ESR_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bcfda038c1025b5184f7f6b6e1ccb7f5";
  }

  static const char* value(const ::iau_ros_msgs::ESR_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xbcfda038c1025b51ULL;
  static const uint64_t static_value2 = 0x84f7f6b6e1ccb7f5ULL;
};

template<class ContainerAllocator>
struct DataType< ::iau_ros_msgs::ESR_<ContainerAllocator> >
{
  static const char* value()
  {
    return "iau_ros_msgs/ESR";
  }

  static const char* value(const ::iau_ros_msgs::ESR_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::iau_ros_msgs::ESR_<ContainerAllocator> >
{
  static const char* value()
  {
    return "time                    timestamp\n\
int32                   targetCount\n\
RadarTarget[]           targets\n\
================================================================================\n\
MSG: iau_ros_msgs/RadarTarget\n\
time       timestamp\n\
int32      target_id\n\
float64      angle              #角度\n\
float64    rangeRate            #距离变化速率\n\
float64    rangeRateX           #X轴速度\n\
float64    rangeRateY           #Y轴加速度\n\
float64    accelerate           #加速度\n\
float64    accelerateX          #X轴加速度\n\
float64    accelerateY          #Y轴加速度\n\
float64    range                #目标的距离\n\
float64    coorX                #目标相对车体x方向位置\n\
float64    coorY                #目标相对车体y方向位置\n\
float64    amplitude            #目标状态 1表示动态目标\n\
";
  }

  static const char* value(const ::iau_ros_msgs::ESR_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::iau_ros_msgs::ESR_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.timestamp);
      stream.next(m.targetCount);
      stream.next(m.targets);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ESR_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::iau_ros_msgs::ESR_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::iau_ros_msgs::ESR_<ContainerAllocator>& v)
  {
    s << indent << "timestamp: ";
    Printer<ros::Time>::stream(s, indent + "  ", v.timestamp);
    s << indent << "targetCount: ";
    Printer<int32_t>::stream(s, indent + "  ", v.targetCount);
    s << indent << "targets[]" << std::endl;
    for (size_t i = 0; i < v.targets.size(); ++i)
    {
      s << indent << "  targets[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::iau_ros_msgs::RadarTarget_<ContainerAllocator> >::stream(s, indent + "    ", v.targets[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // IAU_ROS_MSGS_MESSAGE_ESR_H
