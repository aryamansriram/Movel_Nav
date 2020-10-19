// Generated by gencpp from file ublox_msgs/CfgNMEA.msg
// DO NOT EDIT!


#ifndef UBLOX_MSGS_MESSAGE_CFGNMEA_H
#define UBLOX_MSGS_MESSAGE_CFGNMEA_H


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
struct CfgNMEA_
{
  typedef CfgNMEA_<ContainerAllocator> Type;

  CfgNMEA_()
    : filter(0)
    , nmeaVersion(0)
    , numSV(0)
    , flags(0)
    , gnssToFilter(0)
    , svNumbering(0)
    , mainTalkerId(0)
    , gsvTalkerId(0)
    , version(0)
    , bdsTalkerId()
    , reserved1()  {
      bdsTalkerId.assign(0);

      reserved1.assign(0);
  }
  CfgNMEA_(const ContainerAllocator& _alloc)
    : filter(0)
    , nmeaVersion(0)
    , numSV(0)
    , flags(0)
    , gnssToFilter(0)
    , svNumbering(0)
    , mainTalkerId(0)
    , gsvTalkerId(0)
    , version(0)
    , bdsTalkerId()
    , reserved1()  {
  (void)_alloc;
      bdsTalkerId.assign(0);

      reserved1.assign(0);
  }



   typedef uint8_t _filter_type;
  _filter_type filter;

   typedef uint8_t _nmeaVersion_type;
  _nmeaVersion_type nmeaVersion;

   typedef uint8_t _numSV_type;
  _numSV_type numSV;

   typedef uint8_t _flags_type;
  _flags_type flags;

   typedef uint32_t _gnssToFilter_type;
  _gnssToFilter_type gnssToFilter;

   typedef uint8_t _svNumbering_type;
  _svNumbering_type svNumbering;

   typedef uint8_t _mainTalkerId_type;
  _mainTalkerId_type mainTalkerId;

   typedef uint8_t _gsvTalkerId_type;
  _gsvTalkerId_type gsvTalkerId;

   typedef uint8_t _version_type;
  _version_type version;

   typedef boost::array<uint8_t, 2>  _bdsTalkerId_type;
  _bdsTalkerId_type bdsTalkerId;

   typedef boost::array<uint8_t, 6>  _reserved1_type;
  _reserved1_type reserved1;



  enum {
    CLASS_ID = 6u,
    MESSAGE_ID = 23u,
    FILTER_POS = 1u,
    FILTER_MSK_POS = 2u,
    FILTER_TIME = 4u,
    FILTER_DATE = 8u,
    FILTER_GPS_ONLY = 16u,
    FILTER_TRACK = 32u,
    NMEA_VERSION_4_1 = 65u,
    NMEA_VERSION_4_0 = 64u,
    NMEA_VERSION_2_3 = 35u,
    NMEA_VERSION_2_1 = 33u,
    NUM_SV_UNLIMITED = 0u,
    FLAGS_COMPAT = 1u,
    FLAGS_CONSIDER = 2u,
    FLAGS_LIMIT82 = 4u,
    FLAGS_HIGH_PREC = 8u,
    GNSS_TO_FILTER_GPS = 1u,
    GNSS_TO_FILTER_SBAS = 2u,
    GNSS_TO_FILTER_QZSS = 16u,
    GNSS_TO_FILTER_GLONASS = 32u,
    GNSS_TO_FILTER_BEIDOU = 64u,
    SV_NUMBERING_STRICT = 0u,
    SV_NUMBERING_EXTENDED = 1u,
    MAIN_TALKER_ID_NOT_OVERRIDDEN = 0u,
    MAIN_TALKER_ID_GP = 1u,
    MAIN_TALKER_ID_GL = 2u,
    MAIN_TALKER_ID_GN = 3u,
    MAIN_TALKER_ID_GA = 4u,
    MAIN_TALKER_ID_GB = 5u,
    GSV_TALKER_ID_GNSS_SPECIFIC = 0u,
    GSV_TALKER_ID_MAIN = 1u,
    VERSION = 1u,
  };


  typedef boost::shared_ptr< ::ublox_msgs::CfgNMEA_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ublox_msgs::CfgNMEA_<ContainerAllocator> const> ConstPtr;

}; // struct CfgNMEA_

typedef ::ublox_msgs::CfgNMEA_<std::allocator<void> > CfgNMEA;

typedef boost::shared_ptr< ::ublox_msgs::CfgNMEA > CfgNMEAPtr;
typedef boost::shared_ptr< ::ublox_msgs::CfgNMEA const> CfgNMEAConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ublox_msgs::CfgNMEA_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ublox_msgs::CfgNMEA_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::ublox_msgs::CfgNMEA_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ublox_msgs::CfgNMEA_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ublox_msgs::CfgNMEA_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ublox_msgs::CfgNMEA_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ublox_msgs::CfgNMEA_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ublox_msgs::CfgNMEA_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ublox_msgs::CfgNMEA_<ContainerAllocator> >
{
  static const char* value()
  {
    return "9d53bb6c49d53481b2a181d8ed0bed23";
  }

  static const char* value(const ::ublox_msgs::CfgNMEA_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x9d53bb6c49d53481ULL;
  static const uint64_t static_value2 = 0xb2a181d8ed0bed23ULL;
};

template<class ContainerAllocator>
struct DataType< ::ublox_msgs::CfgNMEA_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ublox_msgs/CfgNMEA";
  }

  static const char* value(const ::ublox_msgs::CfgNMEA_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ublox_msgs::CfgNMEA_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# CFG-NMEA (0x06 0x17)\n\
# NMEA protocol configuration V1\n\
#\n\
# Set/Get the NMEA protocol configuration. See section NMEA Protocol \n\
# Configuration for a detailed description of the configuration effects on \n\
# NMEA output\n\
#\n\
\n\
uint8 CLASS_ID = 6\n\
uint8 MESSAGE_ID = 23 \n\
\n\
uint8 filter                  # filter flags\n\
uint8 FILTER_POS = 1          # Enable position output for failed or \n\
                              # invalid fixes\n\
uint8 FILTER_MSK_POS = 2      # Enable position output for invalid fixes\n\
uint8 FILTER_TIME = 4         # Enable time output for invalid times\n\
uint8 FILTER_DATE = 8         # Enable date output for invalid dates\n\
uint8 FILTER_GPS_ONLY = 16    # Restrict output to GPS satellites only\n\
uint8 FILTER_TRACK = 32       # Enable COG output even if COG is frozen\n\
\n\
uint8 nmeaVersion             # NMEA version\n\
uint8 NMEA_VERSION_4_1 = 65     # Version 4.1\n\
uint8 NMEA_VERSION_4_0 = 64     # Version 4.0\n\
uint8 NMEA_VERSION_2_3 = 35     # Version 2.3\n\
uint8 NMEA_VERSION_2_1 = 33     # Version 2.1\n\
\n\
uint8 numSV                   # Maximum Number of SVs to report per TalkerId: \n\
                              # unlimited (0) or 8, 12, 16\n\
uint8 NUM_SV_UNLIMITED = 0 \n\
\n\
uint8 flags                   # flags\n\
uint8 FLAGS_COMPAT = 1          # enable compatibility mode.\n\
                                # This might be needed for certain applications  \n\
                                # when customer's NMEA parser expects a fixed \n\
                                # number of  digits in position coordinates\n\
uint8 FLAGS_CONSIDER = 2        # enable considering mode\n\
uint8 FLAGS_LIMIT82 = 4         # enable strict limit to 82 characters maximum\n\
uint8 FLAGS_HIGH_PREC = 8       # enable high precision mode\n\
                                # This flag cannot be set in conjunction with  \n\
                                # either Compatibility Mode or Limit82 Mode.\n\
                                # (not supported in protocol versions < 20.01)\n\
\n\
uint32 gnssToFilter           # Filters out satellites based on their GNSS.  \n\
                              # If a bitfield is enabled, the corresponding \n\
                              # satellites will be not output.\n\
uint32 GNSS_TO_FILTER_GPS = 1       # Disable reporting of GPS satellites\n\
uint32 GNSS_TO_FILTER_SBAS = 2      # Disable reporting of SBAS satellites\n\
uint32 GNSS_TO_FILTER_QZSS = 16     # Disable reporting of QZSS satellites\n\
uint32 GNSS_TO_FILTER_GLONASS = 32  # Disable reporting of GLONASS satellites\n\
uint32 GNSS_TO_FILTER_BEIDOU = 64   # Disable reporting of BeiDou satellites\n\
\n\
uint8 svNumbering             # Configures the display of satellites that do not  \n\
                              # have an NMEA-defined value. Note: this does not\n\
                              # apply to satellites with an unknown ID.\n\
uint8 SV_NUMBERING_STRICT = 0     # Strict - Satellites are not output\n\
uint8 SV_NUMBERING_EXTENDED = 1   # Extended - Use proprietary numbering\n\
\n\
uint8 mainTalkerId            # By default the main Talker ID (i.e. the Talker \n\
                              # ID used  for all messages other than GSV) is \n\
                              # determined by the  GNSS assignment of the \n\
                              # receiver's channels (see CfgGNSS). \n\
                              # This field enables the main Talker ID to be \n\
                              # overridden\n\
uint8 MAIN_TALKER_ID_NOT_OVERRIDDEN = 0   # Main Talker ID is not overridden\n\
uint8 MAIN_TALKER_ID_GP = 1               # Set main Talker ID to 'GP'\n\
uint8 MAIN_TALKER_ID_GL = 2               # Set main Talker ID to 'GL'\n\
uint8 MAIN_TALKER_ID_GN = 3               # Set main Talker ID to 'GN'\n\
uint8 MAIN_TALKER_ID_GA = 4               # Set main Talker ID to 'GA'\n\
uint8 MAIN_TALKER_ID_GB = 5               # Set main Talker ID to 'GB'\n\
\n\
uint8 gsvTalkerId             # By default the Talker ID for GSV messages is  \n\
                              # GNSS specific (as defined by NMEA). This field \n\
                              # enables the GSV Talker ID to be overridden.\n\
uint8 GSV_TALKER_ID_GNSS_SPECIFIC = 0   # Use GNSS specific Talker ID \n\
                                        # (as defined by NMEA)\n\
uint8 GSV_TALKER_ID_MAIN = 1            # Use the main Talker ID\n\
\n\
uint8 version                 # Message version (set to 1 for this version)\n\
uint8 VERSION = 1\n\
\n\
uint8[2] bdsTalkerId          # Sets the two characters that should be used \n\
                              # for the BeiDou Talker ID. If these are set to \n\
                              # zero, the default BeiDou TalkerId will be used\n\
\n\
uint8[6] reserved1            # Reserved\n\
";
  }

  static const char* value(const ::ublox_msgs::CfgNMEA_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ublox_msgs::CfgNMEA_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.filter);
      stream.next(m.nmeaVersion);
      stream.next(m.numSV);
      stream.next(m.flags);
      stream.next(m.gnssToFilter);
      stream.next(m.svNumbering);
      stream.next(m.mainTalkerId);
      stream.next(m.gsvTalkerId);
      stream.next(m.version);
      stream.next(m.bdsTalkerId);
      stream.next(m.reserved1);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CfgNMEA_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ublox_msgs::CfgNMEA_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ublox_msgs::CfgNMEA_<ContainerAllocator>& v)
  {
    s << indent << "filter: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.filter);
    s << indent << "nmeaVersion: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.nmeaVersion);
    s << indent << "numSV: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.numSV);
    s << indent << "flags: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.flags);
    s << indent << "gnssToFilter: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.gnssToFilter);
    s << indent << "svNumbering: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.svNumbering);
    s << indent << "mainTalkerId: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.mainTalkerId);
    s << indent << "gsvTalkerId: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.gsvTalkerId);
    s << indent << "version: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.version);
    s << indent << "bdsTalkerId[]" << std::endl;
    for (size_t i = 0; i < v.bdsTalkerId.size(); ++i)
    {
      s << indent << "  bdsTalkerId[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.bdsTalkerId[i]);
    }
    s << indent << "reserved1[]" << std::endl;
    for (size_t i = 0; i < v.reserved1.size(); ++i)
    {
      s << indent << "  reserved1[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.reserved1[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // UBLOX_MSGS_MESSAGE_CFGNMEA_H
