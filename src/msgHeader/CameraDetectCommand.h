// Generated by gencpp from file iau_ros_msgs/CameraDetectCommand.msg
// DO NOT EDIT!


#ifndef IAU_ROS_MSGS_MESSAGE_CAMERADETECTCOMMAND_H
#define IAU_ROS_MSGS_MESSAGE_CAMERADETECTCOMMAND_H


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
struct CameraDetectCommand_
{
  typedef CameraDetectCommand_<ContainerAllocator> Type;

  CameraDetectCommand_()
    : timestamp()
    , action_id(0)
    , action_type(0)
    , action_value(0)  {
    }
  CameraDetectCommand_(const ContainerAllocator& _alloc)
    : timestamp()
    , action_id(0)
    , action_type(0)
    , action_value(0)  {
  (void)_alloc;
    }



   typedef ros::Time _timestamp_type;
  _timestamp_type timestamp;

   typedef int32_t _action_id_type;
  _action_id_type action_id;

   typedef int32_t _action_type_type;
  _action_type_type action_type;

   typedef int32_t _action_value_type;
  _action_value_type action_value;



  enum {
    ACTION_VALUE_TRAFFICLIGHT_BEGIN = 1,
    ACTION_VALUE_TRAFFICLIGHT_END = 2,
  };


  typedef boost::shared_ptr< ::iau_ros_msgs::CameraDetectCommand_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::iau_ros_msgs::CameraDetectCommand_<ContainerAllocator> const> ConstPtr;

}; // struct CameraDetectCommand_

typedef ::iau_ros_msgs::CameraDetectCommand_<std::allocator<void> > CameraDetectCommand;

typedef boost::shared_ptr< ::iau_ros_msgs::CameraDetectCommand > CameraDetectCommandPtr;
typedef boost::shared_ptr< ::iau_ros_msgs::CameraDetectCommand const> CameraDetectCommandConstPtr;

// constants requiring out of line definition

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::iau_ros_msgs::CameraDetectCommand_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::iau_ros_msgs::CameraDetectCommand_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace iau_ros_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'iau_ros_msgs': ['/home/z/iau_ws/src/iau_ros_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::iau_ros_msgs::CameraDetectCommand_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::iau_ros_msgs::CameraDetectCommand_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::iau_ros_msgs::CameraDetectCommand_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::iau_ros_msgs::CameraDetectCommand_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::iau_ros_msgs::CameraDetectCommand_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::iau_ros_msgs::CameraDetectCommand_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::iau_ros_msgs::CameraDetectCommand_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bebb39bfd257acedbe49e0b9e55ecfe4";
  }

  static const char* value(const ::iau_ros_msgs::CameraDetectCommand_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xbebb39bfd257acedULL;
  static const uint64_t static_value2 = 0xbe49e0b9e55ecfe4ULL;
};

template<class ContainerAllocator>
struct DataType< ::iau_ros_msgs::CameraDetectCommand_<ContainerAllocator> >
{
  static const char* value()
  {
    return "iau_ros_msgs/CameraDetectCommand";
  }

  static const char* value(const ::iau_ros_msgs::CameraDetectCommand_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::iau_ros_msgs::CameraDetectCommand_<ContainerAllocator> >
{
  static const char* value()
  {
    return "time      timestamp\n\
int32     action_id\n\
int32     action_type\n\
int32     action_value\n\
\n\
int32    ACTION_VALUE_TRAFFICLIGHT_BEGIN = 1\n\
int32    ACTION_VALUE_TRAFFICLIGHT_END   = 2\n\
";
  }

  static const char* value(const ::iau_ros_msgs::CameraDetectCommand_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::iau_ros_msgs::CameraDetectCommand_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.timestamp);
      stream.next(m.action_id);
      stream.next(m.action_type);
      stream.next(m.action_value);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CameraDetectCommand_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::iau_ros_msgs::CameraDetectCommand_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::iau_ros_msgs::CameraDetectCommand_<ContainerAllocator>& v)
  {
    s << indent << "timestamp: ";
    Printer<ros::Time>::stream(s, indent + "  ", v.timestamp);
    s << indent << "action_id: ";
    Printer<int32_t>::stream(s, indent + "  ", v.action_id);
    s << indent << "action_type: ";
    Printer<int32_t>::stream(s, indent + "  ", v.action_type);
    s << indent << "action_value: ";
    Printer<int32_t>::stream(s, indent + "  ", v.action_value);
  }
};

} // namespace message_operations
} // namespace ros

#endif // IAU_ROS_MSGS_MESSAGE_CAMERADETECTCOMMAND_H
