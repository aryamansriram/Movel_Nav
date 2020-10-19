// Generated by gencpp from file ublox_msgs/NavSTATUS.msg
// DO NOT EDIT!


#ifndef UBLOX_MSGS_MESSAGE_NAVSTATUS_H
#define UBLOX_MSGS_MESSAGE_NAVSTATUS_H


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
struct NavSTATUS_
{
  typedef NavSTATUS_<ContainerAllocator> Type;

  NavSTATUS_()
    : iTOW(0)
    , gpsFix(0)
    , flags(0)
    , fixStat(0)
    , flags2(0)
    , ttff(0)
    , msss(0)  {
    }
  NavSTATUS_(const ContainerAllocator& _alloc)
    : iTOW(0)
    , gpsFix(0)
    , flags(0)
    , fixStat(0)
    , flags2(0)
    , ttff(0)
    , msss(0)  {
  (void)_alloc;
    }



   typedef uint32_t _iTOW_type;
  _iTOW_type iTOW;

   typedef uint8_t _gpsFix_type;
  _gpsFix_type gpsFix;

   typedef uint8_t _flags_type;
  _flags_type flags;

   typedef uint8_t _fixStat_type;
  _fixStat_type fixStat;

   typedef uint8_t _flags2_type;
  _flags2_type flags2;

   typedef uint32_t _ttff_type;
  _ttff_type ttff;

   typedef uint32_t _msss_type;
  _msss_type msss;



  enum {
    CLASS_ID = 1u,
    MESSAGE_ID = 3u,
    GPS_NO_FIX = 0u,
    GPS_DEAD_RECKONING_ONLY = 1u,
    GPS_2D_FIX = 2u,
    GPS_3D_FIX = 3u,
    GPS_GPS_DEAD_RECKONING_COMBINED = 4u,
    GPS_TIME_ONLY_FIX = 5u,
    FLAGS_GPS_FIX_OK = 1u,
    FLAGS_DIFF_SOLN = 2u,
    FLAGS_WKNSET = 4u,
    FLAGS_TOWSET = 8u,
    FIX_STAT_DIFF_CORR_MASK = 1u,
    FIX_STAT_MAP_MATCHING_MASK = 192u,
    MAP_MATCHING_NONE = 0u,
    MAP_MATCHING_VALID = 64u,
    MAP_MATCHING_USED = 128u,
    MAP_MATCHING_DR = 192u,
    FLAGS2_PSM_STATE_MASK = 3u,
    PSM_STATE_ACQUISITION = 0u,
    PSM_STATE_TRACKING = 1u,
    PSM_STATE_POWER_OPTIMIZED_TRACKING = 2u,
    PSM_STATE_INACTIVE = 3u,
    FLAGS2_SPOOF_DET_STATE_MASK = 24u,
    SPOOF_DET_STATE_UNKNOWN = 0u,
    SPOOF_DET_STATE_NONE = 8u,
    SPOOF_DET_STATE_SPOOFING = 16u,
    SPOOF_DET_STATE_MULTIPLE = 24u,
  };


  typedef boost::shared_ptr< ::ublox_msgs::NavSTATUS_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ublox_msgs::NavSTATUS_<ContainerAllocator> const> ConstPtr;

}; // struct NavSTATUS_

typedef ::ublox_msgs::NavSTATUS_<std::allocator<void> > NavSTATUS;

typedef boost::shared_ptr< ::ublox_msgs::NavSTATUS > NavSTATUSPtr;
typedef boost::shared_ptr< ::ublox_msgs::NavSTATUS const> NavSTATUSConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ublox_msgs::NavSTATUS_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ublox_msgs::NavSTATUS_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::ublox_msgs::NavSTATUS_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ublox_msgs::NavSTATUS_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ublox_msgs::NavSTATUS_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ublox_msgs::NavSTATUS_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ublox_msgs::NavSTATUS_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ublox_msgs::NavSTATUS_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ublox_msgs::NavSTATUS_<ContainerAllocator> >
{
  static const char* value()
  {
    return "68047fb8ca04a038a6b031cd1a908762";
  }

  static const char* value(const ::ublox_msgs::NavSTATUS_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x68047fb8ca04a038ULL;
  static const uint64_t static_value2 = 0xa6b031cd1a908762ULL;
};

template<class ContainerAllocator>
struct DataType< ::ublox_msgs::NavSTATUS_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ublox_msgs/NavSTATUS";
  }

  static const char* value(const ::ublox_msgs::NavSTATUS_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ublox_msgs::NavSTATUS_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# NAV-STATUS (0x01 0x03)\n\
# Receiver Navigation Status\n\
#\n\
# See important comments concerning validity of position and velocity given in\n\
# section Navigation Output Filters.\n\
#\n\
\n\
uint8 CLASS_ID = 1\n\
uint8 MESSAGE_ID = 3\n\
\n\
uint32 iTOW             # GPS Millisecond time of week [ms]\n\
\n\
uint8 gpsFix            # GPSfix Type, this value does not qualify a fix as\n\
                        # valid and within the limits. See note on flag gpsFixOk\n\
                        # below\n\
uint8 GPS_NO_FIX = 0\n\
uint8 GPS_DEAD_RECKONING_ONLY = 1\n\
uint8 GPS_2D_FIX = 2\n\
uint8 GPS_3D_FIX = 3\n\
uint8 GPS_GPS_DEAD_RECKONING_COMBINED = 4\n\
uint8 GPS_TIME_ONLY_FIX = 5\n\
\n\
uint8 flags             # Navigation Status Flags\n\
uint8 FLAGS_GPS_FIX_OK = 1      # position & velocity valid & within DOP & ACC \n\
                                # Masks\n\
uint8 FLAGS_DIFF_SOLN = 2       # Differential corrections were applied\n\
uint8 FLAGS_WKNSET = 4          # Week Number valid\n\
uint8 FLAGS_TOWSET = 8          # Time of Week valid\n\
\n\
uint8 fixStat           # Fix Status Information\n\
uint8 FIX_STAT_DIFF_CORR_MASK = 1       # 1 = differential corrections available\n\
# map matching status:\n\
uint8 FIX_STAT_MAP_MATCHING_MASK = 192\n\
uint8 MAP_MATCHING_NONE = 0      # none\n\
uint8 MAP_MATCHING_VALID = 64    # valid but not used, i.e. map matching data \n\
                                 # was received, but was too old\n\
uint8 MAP_MATCHING_USED = 128    # valid and used, map matching data was applied\n\
uint8 MAP_MATCHING_DR = 192      # valid and used, map matching data was \n\
                                 # applied. In case of sensor unavailability map\n\
                                 # matching data enables dead reckoning. \n\
                                 # This requires map matched latitude/longitude \n\
                                 # or heading data.\n\
\n\
uint8 flags2            # further information about navigation output\n\
# power safe mode state (Only for FW version >= 7.01; undefined otherwise)\n\
uint8 FLAGS2_PSM_STATE_MASK = 3\n\
uint8 PSM_STATE_ACQUISITION = 0                # ACQUISITION \n\
                                               # [or when psm disabled]\n\
uint8 PSM_STATE_TRACKING = 1                   # TRACKING\n\
uint8 PSM_STATE_POWER_OPTIMIZED_TRACKING = 2   # POWER OPTIMIZED TRACKING\n\
uint8 PSM_STATE_INACTIVE = 3                   # INACTIVE\n\
# Note that the spoofing state value only reflects the detector state for the \n\
# current navigation epoch. As spoofing can be detected most easily at the \n\
# transition from real signal to spoofing signal, this is also where the \n\
# detector is triggered the most. I.e. a value of 1 - No spoofing indicated does\n\
# not mean that the receiver is not spoofed, it #simply states that the detector\n\
# was not triggered in this epoch.\n\
uint8 FLAGS2_SPOOF_DET_STATE_MASK = 24 \n\
uint8 SPOOF_DET_STATE_UNKNOWN = 0    # Unknown or deactivated\n\
uint8 SPOOF_DET_STATE_NONE = 8       # No spoofing indicated\n\
uint8 SPOOF_DET_STATE_SPOOFING = 16  # Spoofing indicated\n\
uint8 SPOOF_DET_STATE_MULTIPLE = 24  # Multiple spoofing indication\n\
\n\
uint32 ttff             # Time to first fix (millisecond time tag) [ms]\n\
uint32 msss             # Milliseconds since Startup / Reset [ms]\n\
";
  }

  static const char* value(const ::ublox_msgs::NavSTATUS_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ublox_msgs::NavSTATUS_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.iTOW);
      stream.next(m.gpsFix);
      stream.next(m.flags);
      stream.next(m.fixStat);
      stream.next(m.flags2);
      stream.next(m.ttff);
      stream.next(m.msss);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct NavSTATUS_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ublox_msgs::NavSTATUS_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ublox_msgs::NavSTATUS_<ContainerAllocator>& v)
  {
    s << indent << "iTOW: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.iTOW);
    s << indent << "gpsFix: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.gpsFix);
    s << indent << "flags: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.flags);
    s << indent << "fixStat: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.fixStat);
    s << indent << "flags2: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.flags2);
    s << indent << "ttff: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.ttff);
    s << indent << "msss: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.msss);
  }
};

} // namespace message_operations
} // namespace ros

#endif // UBLOX_MSGS_MESSAGE_NAVSTATUS_H
