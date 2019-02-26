// Generated by gencpp from file iau_ros_msgs/Draw.msg
// DO NOT EDIT!


#ifndef IAU_ROS_MSGS_MESSAGE_DRAW_H
#define IAU_ROS_MSGS_MESSAGE_DRAW_H


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
struct Draw_
{
  typedef Draw_<ContainerAllocator> Type;

  Draw_()
    : timestamp()
    , num(0)
    , xx()
    , yy()  {
    }
  Draw_(const ContainerAllocator& _alloc)
    : timestamp()
    , num(0)
    , xx(_alloc)
    , yy(_alloc)  {
  (void)_alloc;
    }



   typedef ros::Time _timestamp_type;
  _timestamp_type timestamp;

   typedef int32_t _num_type;
  _num_type num;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _xx_type;
  _xx_type xx;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _yy_type;
  _yy_type yy;





  typedef boost::shared_ptr< ::iau_ros_msgs::Draw_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::iau_ros_msgs::Draw_<ContainerAllocator> const> ConstPtr;

}; // struct Draw_

typedef ::iau_ros_msgs::Draw_<std::allocator<void> > Draw;

typedef boost::shared_ptr< ::iau_ros_msgs::Draw > DrawPtr;
typedef boost::shared_ptr< ::iau_ros_msgs::Draw const> DrawConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::iau_ros_msgs::Draw_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::iau_ros_msgs::Draw_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::iau_ros_msgs::Draw_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::iau_ros_msgs::Draw_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::iau_ros_msgs::Draw_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::iau_ros_msgs::Draw_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::iau_ros_msgs::Draw_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::iau_ros_msgs::Draw_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::iau_ros_msgs::Draw_<ContainerAllocator> >
{
  static const char* value()
  {
    return "10e40488a8e1e2c27e970022b85191c2";
  }

  static const char* value(const ::iau_ros_msgs::Draw_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x10e40488a8e1e2c2ULL;
  static const uint64_t static_value2 = 0x7e970022b85191c2ULL;
};

template<class ContainerAllocator>
struct DataType< ::iau_ros_msgs::Draw_<ContainerAllocator> >
{
  static const char* value()
  {
    return "iau_ros_msgs/Draw";
  }

  static const char* value(const ::iau_ros_msgs::Draw_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::iau_ros_msgs::Draw_<ContainerAllocator> >
{
  static const char* value()
  {
    return "time      timestamp\n\
int32     num  # points count, equal xx.size() and yy.size()\n\
float64[] xx\n\
float64[] yy\n\
";
  }

  static const char* value(const ::iau_ros_msgs::Draw_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::iau_ros_msgs::Draw_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.timestamp);
      stream.next(m.num);
      stream.next(m.xx);
      stream.next(m.yy);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Draw_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::iau_ros_msgs::Draw_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::iau_ros_msgs::Draw_<ContainerAllocator>& v)
  {
    s << indent << "timestamp: ";
    Printer<ros::Time>::stream(s, indent + "  ", v.timestamp);
    s << indent << "num: ";
    Printer<int32_t>::stream(s, indent + "  ", v.num);
    s << indent << "xx[]" << std::endl;
    for (size_t i = 0; i < v.xx.size(); ++i)
    {
      s << indent << "  xx[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.xx[i]);
    }
    s << indent << "yy[]" << std::endl;
    for (size_t i = 0; i < v.yy.size(); ++i)
    {
      s << indent << "  yy[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.yy[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // IAU_ROS_MSGS_MESSAGE_DRAW_H