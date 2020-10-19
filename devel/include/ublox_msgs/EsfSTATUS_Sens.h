// Generated by gencpp from file ublox_msgs/EsfSTATUS_Sens.msg
// DO NOT EDIT!


#ifndef UBLOX_MSGS_MESSAGE_ESFSTATUS_SENS_H
#define UBLOX_MSGS_MESSAGE_ESFSTATUS_SENS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace ublox_msgs
{
template <class ContainerAllocator>
struct EsfSTATUS_Sens_
{
  typedef EsfSTATUS_Sens_<ContainerAllocator> Type;

  EsfSTATUS_Sens_()
    : sensStatus1(0)
    , sensStatus2(0)
    , freq(0)
    , faults(0)  {
    }
  EsfSTATUS_Sens_(const ContainerAllocator& _alloc)
    : sensStatus1(0)
    , sensStatus2(0)
    , freq(0)
    , faults(0)  {
  (void)_alloc;
    }



   typedef uint8_t _sensStatus1_type;
  _sensStatus1_type sensStatus1;

   typedef uint8_t _sensStatus2_type;
  _sensStatus2_type sensStatus2;

   typedef uint8_t _freq_type;
  _freq_type freq;

   typedef uint8_t _faults_type;
  _faults_type faults;





  typedef boost::shared_ptr< ::ublox_msgs::EsfSTATUS_Sens_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ublox_msgs::EsfSTATUS_Sens_<ContainerAllocator> const> ConstPtr;

}; // struct EsfSTATUS_Sens_

typedef ::ublox_msgs::EsfSTATUS_Sens_<std::allocator<void> > EsfSTATUS_Sens;

typedef boost::shared_ptr< ::ublox_msgs::EsfSTATUS_Sens > EsfSTATUS_SensPtr;
typedef boost::shared_ptr< ::ublox_msgs::EsfSTATUS_Sens const> EsfSTATUS_SensConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ublox_msgs::EsfSTATUS_Sens_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ublox_msgs::EsfSTATUS_Sens_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace ublox_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'ublox_msgs': ['/home/rosguy/catkin_ws/src/ublox/ublox_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::ublox_msgs::EsfSTATUS_Sens_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ublox_msgs::EsfSTATUS_Sens_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ublox_msgs::EsfSTATUS_Sens_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ublox_msgs::EsfSTATUS_Sens_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ublox_msgs::EsfSTATUS_Sens_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ublox_msgs::EsfSTATUS_Sens_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ublox_msgs::EsfSTATUS_Sens_<ContainerAllocator> >
{
  static const char* value()
  {
    return "642a0b5f53044e3a4dd28074dc540ef3";
  }

  static const char* value(const ::ublox_msgs::EsfSTATUS_Sens_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x642a0b5f53044e3aULL;
  static const uint64_t static_value2 = 0x4dd28074dc540ef3ULL;
};

template<class ContainerAllocator>
struct DataType< ::ublox_msgs::EsfSTATUS_Sens_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ublox_msgs/EsfSTATUS_Sens";
  }

  static const char* value(const ::ublox_msgs::EsfSTATUS_Sens_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ublox_msgs::EsfSTATUS_Sens_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# See Esf-STATUS\n\
#\n\
\n\
uint8 sensStatus1   # Sensor status, part 1 (see graphic below)\n\
uint8 sensStatus2   # Sensor status, part 2 (see graphic below)\n\
uint8 freq          # Observation frequency [Hz]\n\
uint8 faults        # Sensor faults (see graphic below)\n\
";
  }

  static const char* value(const ::ublox_msgs::EsfSTATUS_Sens_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ublox_msgs::EsfSTATUS_Sens_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.sensStatus1);
      stream.next(m.sensStatus2);
      stream.next(m.freq);
      stream.next(m.faults);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct EsfSTATUS_Sens_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ublox_msgs::EsfSTATUS_Sens_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ublox_msgs::EsfSTATUS_Sens_<ContainerAllocator>& v)
  {
    s << indent << "sensStatus1: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.sensStatus1);
    s << indent << "sensStatus2: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.sensStatus2);
    s << indent << "freq: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.freq);
    s << indent << "faults: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.faults);
  }
};

} // namespace message_operations
} // namespace ros

#endif // UBLOX_MSGS_MESSAGE_ESFSTATUS_SENS_H
