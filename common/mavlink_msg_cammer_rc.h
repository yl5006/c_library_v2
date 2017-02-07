#pragma once
// MESSAGE CAMMER_RC PACKING

#define MAVLINK_MSG_ID_CAMMER_RC 281

MAVPACKED(
typedef struct __mavlink_cammer_rc_t {
 uint16_t chan1_raw; /*< RC channel 1 value, in microseconds. A value of UINT16_MAX implies the channel is unused.*/
 uint16_t chan2_raw; /*< RC channel 2 value, in microseconds. A value of UINT16_MAX implies the channel is unused.*/
 uint16_t chan3_raw; /*< RC channel 3 value, in microseconds. A value of UINT16_MAX implies the channel is unused.*/
 uint16_t chan4_raw; /*< RC channel 4 value, in microseconds. A value of UINT16_MAX implies the channel is unused.*/
 uint16_t chan5_raw; /*< RC channel 5 value, in microseconds. A value of UINT16_MAX implies the channel is unused.*/
 uint16_t chan6_raw; /*< RC channel 6 value, in microseconds. A value of UINT16_MAX implies the channel is unused.*/
 uint16_t chan7_raw; /*< RC channel 7 value, in microseconds. A value of UINT16_MAX implies the channel is unused.*/
 uint16_t chan8_raw; /*< RC channel 8 value, in microseconds. A value of UINT16_MAX implies the channel is unused.*/
 uint16_t chan9_raw; /*< RC channel 9 value, in microseconds. A value of UINT16_MAX implies the channel is unused.*/
 uint16_t chan10_raw; /*< RC channel 10 value, in microseconds. A value of UINT16_MAX implies the channel is unused.*/
 uint16_t chan11_raw; /*< RC channel 11 value, in microseconds. A value of UINT16_MAX implies the channel is unused.*/
 uint16_t chan12_raw; /*< RC channel 12 value, in microseconds. A value of UINT16_MAX implies the channel is unused.*/
 uint16_t chan13_raw; /*< RC channel 13 value, in microseconds. A value of UINT16_MAX implies the channel is unused.*/
 uint16_t chan14_raw; /*< RC channel 14 value, in microseconds. A value of UINT16_MAX implies the channel is unused.*/
 uint16_t chan15_raw; /*< RC channel 15 value, in microseconds. A value of UINT16_MAX implies the channel is unused.*/
 uint16_t chan16_raw; /*< RC channel 16 value, in microseconds. A value of UINT16_MAX implies the channel is unused.*/
 uint16_t chan17_raw; /*< RC channel 17 value, in microseconds. A value of UINT16_MAX implies the channel is unused.*/
 uint16_t chan18_raw; /*< RC channel 18 value, in microseconds. A value of UINT16_MAX implies the channel is unused.*/
}) mavlink_cammer_rc_t;

#define MAVLINK_MSG_ID_CAMMER_RC_LEN 36
#define MAVLINK_MSG_ID_CAMMER_RC_MIN_LEN 36
#define MAVLINK_MSG_ID_281_LEN 36
#define MAVLINK_MSG_ID_281_MIN_LEN 36

#define MAVLINK_MSG_ID_CAMMER_RC_CRC 100
#define MAVLINK_MSG_ID_281_CRC 100



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_CAMMER_RC { \
    281, \
    "CAMMER_RC", \
    18, \
    {    { "chan1_raw", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_cammer_rc_t, chan1_raw) }, \
         { "chan2_raw", NULL, MAVLINK_TYPE_UINT16_T, 0, 2, offsetof(mavlink_cammer_rc_t, chan2_raw) }, \
         { "chan3_raw", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_cammer_rc_t, chan3_raw) }, \
         { "chan4_raw", NULL, MAVLINK_TYPE_UINT16_T, 0, 6, offsetof(mavlink_cammer_rc_t, chan4_raw) }, \
         { "chan5_raw", NULL, MAVLINK_TYPE_UINT16_T, 0, 8, offsetof(mavlink_cammer_rc_t, chan5_raw) }, \
         { "chan6_raw", NULL, MAVLINK_TYPE_UINT16_T, 0, 10, offsetof(mavlink_cammer_rc_t, chan6_raw) }, \
         { "chan7_raw", NULL, MAVLINK_TYPE_UINT16_T, 0, 12, offsetof(mavlink_cammer_rc_t, chan7_raw) }, \
         { "chan8_raw", NULL, MAVLINK_TYPE_UINT16_T, 0, 14, offsetof(mavlink_cammer_rc_t, chan8_raw) }, \
         { "chan9_raw", NULL, MAVLINK_TYPE_UINT16_T, 0, 16, offsetof(mavlink_cammer_rc_t, chan9_raw) }, \
         { "chan10_raw", NULL, MAVLINK_TYPE_UINT16_T, 0, 18, offsetof(mavlink_cammer_rc_t, chan10_raw) }, \
         { "chan11_raw", NULL, MAVLINK_TYPE_UINT16_T, 0, 20, offsetof(mavlink_cammer_rc_t, chan11_raw) }, \
         { "chan12_raw", NULL, MAVLINK_TYPE_UINT16_T, 0, 22, offsetof(mavlink_cammer_rc_t, chan12_raw) }, \
         { "chan13_raw", NULL, MAVLINK_TYPE_UINT16_T, 0, 24, offsetof(mavlink_cammer_rc_t, chan13_raw) }, \
         { "chan14_raw", NULL, MAVLINK_TYPE_UINT16_T, 0, 26, offsetof(mavlink_cammer_rc_t, chan14_raw) }, \
         { "chan15_raw", NULL, MAVLINK_TYPE_UINT16_T, 0, 28, offsetof(mavlink_cammer_rc_t, chan15_raw) }, \
         { "chan16_raw", NULL, MAVLINK_TYPE_UINT16_T, 0, 30, offsetof(mavlink_cammer_rc_t, chan16_raw) }, \
         { "chan17_raw", NULL, MAVLINK_TYPE_UINT16_T, 0, 32, offsetof(mavlink_cammer_rc_t, chan17_raw) }, \
         { "chan18_raw", NULL, MAVLINK_TYPE_UINT16_T, 0, 34, offsetof(mavlink_cammer_rc_t, chan18_raw) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_CAMMER_RC { \
    "CAMMER_RC", \
    16, \
    {    { "chan1_raw", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_cammer_rc_t, chan1_raw) }, \
         { "chan2_raw", NULL, MAVLINK_TYPE_UINT16_T, 0, 2, offsetof(mavlink_cammer_rc_t, chan2_raw) }, \
         { "chan3_raw", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_cammer_rc_t, chan3_raw) }, \
         { "chan4_raw", NULL, MAVLINK_TYPE_UINT16_T, 0, 6, offsetof(mavlink_cammer_rc_t, chan4_raw) }, \
         { "chan5_raw", NULL, MAVLINK_TYPE_UINT16_T, 0, 8, offsetof(mavlink_cammer_rc_t, chan5_raw) }, \
         { "chan6_raw", NULL, MAVLINK_TYPE_UINT16_T, 0, 10, offsetof(mavlink_cammer_rc_t, chan6_raw) }, \
         { "chan7_raw", NULL, MAVLINK_TYPE_UINT16_T, 0, 12, offsetof(mavlink_cammer_rc_t, chan7_raw) }, \
         { "chan8_raw", NULL, MAVLINK_TYPE_UINT16_T, 0, 14, offsetof(mavlink_cammer_rc_t, chan8_raw) }, \
         { "chan9_raw", NULL, MAVLINK_TYPE_UINT16_T, 0, 16, offsetof(mavlink_cammer_rc_t, chan9_raw) }, \
         { "chan10_raw", NULL, MAVLINK_TYPE_UINT16_T, 0, 18, offsetof(mavlink_cammer_rc_t, chan10_raw) }, \
         { "chan11_raw", NULL, MAVLINK_TYPE_UINT16_T, 0, 20, offsetof(mavlink_cammer_rc_t, chan11_raw) }, \
         { "chan12_raw", NULL, MAVLINK_TYPE_UINT16_T, 0, 22, offsetof(mavlink_cammer_rc_t, chan12_raw) }, \
         { "chan13_raw", NULL, MAVLINK_TYPE_UINT16_T, 0, 24, offsetof(mavlink_cammer_rc_t, chan13_raw) }, \
         { "chan14_raw", NULL, MAVLINK_TYPE_UINT16_T, 0, 26, offsetof(mavlink_cammer_rc_t, chan14_raw) }, \
         { "chan15_raw", NULL, MAVLINK_TYPE_UINT16_T, 0, 28, offsetof(mavlink_cammer_rc_t, chan15_raw) }, \
         { "chan16_raw", NULL, MAVLINK_TYPE_UINT16_T, 0, 30, offsetof(mavlink_cammer_rc_t, chan16_raw) }, \
         { "chan17_raw", NULL, MAVLINK_TYPE_UINT16_T, 0, 32, offsetof(mavlink_cammer_rc_t, chan17_raw) }, \
         { "chan18_raw", NULL, MAVLINK_TYPE_UINT16_T, 0, 34, offsetof(mavlink_cammer_rc_t, chan18_raw) }, \
         } \
}
#endif

/**
 * @brief Pack a cammer_rc message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param chan1_raw RC channel 1 value, in microseconds. A value of UINT16_MAX implies the channel is unused.
 * @param chan2_raw RC channel 2 value, in microseconds. A value of UINT16_MAX implies the channel is unused.
 * @param chan3_raw RC channel 3 value, in microseconds. A value of UINT16_MAX implies the channel is unused.
 * @param chan4_raw RC channel 4 value, in microseconds. A value of UINT16_MAX implies the channel is unused.
 * @param chan5_raw RC channel 5 value, in microseconds. A value of UINT16_MAX implies the channel is unused.
 * @param chan6_raw RC channel 6 value, in microseconds. A value of UINT16_MAX implies the channel is unused.
 * @param chan7_raw RC channel 7 value, in microseconds. A value of UINT16_MAX implies the channel is unused.
 * @param chan8_raw RC channel 8 value, in microseconds. A value of UINT16_MAX implies the channel is unused.
 * @param chan9_raw RC channel 9 value, in microseconds. A value of UINT16_MAX implies the channel is unused.
 * @param chan10_raw RC channel 10 value, in microseconds. A value of UINT16_MAX implies the channel is unused.
 * @param chan11_raw RC channel 11 value, in microseconds. A value of UINT16_MAX implies the channel is unused.
 * @param chan12_raw RC channel 12 value, in microseconds. A value of UINT16_MAX implies the channel is unused.
 * @param chan13_raw RC channel 13 value, in microseconds. A value of UINT16_MAX implies the channel is unused.
 * @param chan14_raw RC channel 14 value, in microseconds. A value of UINT16_MAX implies the channel is unused.
 * @param chan15_raw RC channel 15 value, in microseconds. A value of UINT16_MAX implies the channel is unused.
 * @param chan16_raw RC channel 16 value, in microseconds. A value of UINT16_MAX implies the channel is unused.
 * @param chan17_raw RC channel 17 value, in microseconds. A value of UINT16_MAX implies the channel is unused.
 * @param chan18_raw RC channel 18 value, in microseconds. A value of UINT16_MAX implies the channel is unused.
*/
static inline uint16_t mavlink_msg_cammer_rc_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint16_t chan1_raw, uint16_t chan2_raw, uint16_t chan3_raw, uint16_t chan4_raw, uint16_t chan5_raw, uint16_t chan6_raw, uint16_t chan7_raw, uint16_t chan8_raw, uint16_t chan9_raw, uint16_t chan10_raw, uint16_t chan11_raw, uint16_t chan12_raw, uint16_t chan13_raw, uint16_t chan14_raw, uint16_t chan15_raw, uint16_t chan16_raw, uint16_t chan17_raw, uint16_t chan18_raw)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CAMMER_RC_LEN];
    _mav_put_uint16_t(buf, 0, chan1_raw);
    _mav_put_uint16_t(buf, 2, chan2_raw);
    _mav_put_uint16_t(buf, 4, chan3_raw);
    _mav_put_uint16_t(buf, 6, chan4_raw);
    _mav_put_uint16_t(buf, 8, chan5_raw);
    _mav_put_uint16_t(buf, 10, chan6_raw);
    _mav_put_uint16_t(buf, 12, chan7_raw);
    _mav_put_uint16_t(buf, 14, chan8_raw);
    _mav_put_uint16_t(buf, 16, chan9_raw);
    _mav_put_uint16_t(buf, 18, chan10_raw);
    _mav_put_uint16_t(buf, 20, chan11_raw);
    _mav_put_uint16_t(buf, 22, chan12_raw);
    _mav_put_uint16_t(buf, 24, chan13_raw);
    _mav_put_uint16_t(buf, 26, chan14_raw);
    _mav_put_uint16_t(buf, 28, chan15_raw);
    _mav_put_uint16_t(buf, 30, chan16_raw);
    _mav_put_uint16_t(buf, 32, chan17_raw);
    _mav_put_uint16_t(buf, 34, chan18_raw);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CAMMER_RC_LEN);
#else
    mavlink_cammer_rc_t packet;
    packet.chan1_raw = chan1_raw;
    packet.chan2_raw = chan2_raw;
    packet.chan3_raw = chan3_raw;
    packet.chan4_raw = chan4_raw;
    packet.chan5_raw = chan5_raw;
    packet.chan6_raw = chan6_raw;
    packet.chan7_raw = chan7_raw;
    packet.chan8_raw = chan8_raw;
    packet.chan9_raw = chan9_raw;
    packet.chan10_raw = chan10_raw;
    packet.chan11_raw = chan11_raw;
    packet.chan12_raw = chan12_raw;
    packet.chan13_raw = chan13_raw;
    packet.chan14_raw = chan14_raw;
    packet.chan15_raw = chan15_raw;
    packet.chan16_raw = chan16_raw;
    packet.chan17_raw = chan17_raw;
    packet.chan18_raw = chan18_raw;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CAMMER_RC_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CAMMER_RC;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_CAMMER_RC_MIN_LEN, MAVLINK_MSG_ID_CAMMER_RC_LEN, MAVLINK_MSG_ID_CAMMER_RC_CRC);
}

/**
 * @brief Pack a cammer_rc message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_boot_ms Timestamp (milliseconds since system boot)
 * @param chancount Total number of RC channels being received. This can be larger than 18, indicating that more channels are available but not given in this message. This value should be 0 when no RC channels are available.
 * @param chan1_raw RC channel 1 value, in microseconds. A value of UINT16_MAX implies the channel is unused.
 * @param chan2_raw RC channel 2 value, in microseconds. A value of UINT16_MAX implies the channel is unused.
 * @param chan3_raw RC channel 3 value, in microseconds. A value of UINT16_MAX implies the channel is unused.
 * @param chan4_raw RC channel 4 value, in microseconds. A value of UINT16_MAX implies the channel is unused.
 * @param chan5_raw RC channel 5 value, in microseconds. A value of UINT16_MAX implies the channel is unused.
 * @param chan6_raw RC channel 6 value, in microseconds. A value of UINT16_MAX implies the channel is unused.
 * @param chan7_raw RC channel 7 value, in microseconds. A value of UINT16_MAX implies the channel is unused.
 * @param chan8_raw RC channel 8 value, in microseconds. A value of UINT16_MAX implies the channel is unused.
 * @param chan9_raw RC channel 9 value, in microseconds. A value of UINT16_MAX implies the channel is unused.
 * @param chan10_raw RC channel 10 value, in microseconds. A value of UINT16_MAX implies the channel is unused.
 * @param chan11_raw RC channel 11 value, in microseconds. A value of UINT16_MAX implies the channel is unused.
 * @param chan12_raw RC channel 12 value, in microseconds. A value of UINT16_MAX implies the channel is unused.
 * @param chan13_raw RC channel 13 value, in microseconds. A value of UINT16_MAX implies the channel is unused.
 * @param chan14_raw RC channel 14 value, in microseconds. A value of UINT16_MAX implies the channel is unused.
 * @param chan15_raw RC channel 15 value, in microseconds. A value of UINT16_MAX implies the channel is unused.
 * @param chan16_raw RC channel 16 value, in microseconds. A value of UINT16_MAX implies the channel is unused.
 * @param chan17_raw RC channel 17 value, in microseconds. A value of UINT16_MAX implies the channel is unused.
 * @param chan18_raw RC channel 18 value, in microseconds. A value of UINT16_MAX implies the channel is unused.
 * @param rssi Receive signal strength indicator, 0: 0%, 100: 100%, 255: invalid/unknown.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_cammer_rc_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint16_t chan1_raw,uint16_t chan2_raw,uint16_t chan3_raw,uint16_t chan4_raw,uint16_t chan5_raw,uint16_t chan6_raw,uint16_t chan7_raw,uint16_t chan8_raw,uint16_t chan9_raw,uint16_t chan10_raw,uint16_t chan11_raw,uint16_t chan12_raw,uint16_t chan13_raw,uint16_t chan14_raw,uint16_t chan15_raw,uint16_t chan16_raw,uint16_t chan17_raw,uint16_t chan18_raw)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CAMMER_RC_LEN];
    _mav_put_uint16_t(buf, 0, chan1_raw);
    _mav_put_uint16_t(buf, 2, chan2_raw);
    _mav_put_uint16_t(buf, 4, chan3_raw);
    _mav_put_uint16_t(buf, 6, chan4_raw);
    _mav_put_uint16_t(buf, 8, chan5_raw);
    _mav_put_uint16_t(buf, 10, chan6_raw);
    _mav_put_uint16_t(buf, 12, chan7_raw);
    _mav_put_uint16_t(buf, 14, chan8_raw);
    _mav_put_uint16_t(buf, 16, chan9_raw);
    _mav_put_uint16_t(buf, 18, chan10_raw);
    _mav_put_uint16_t(buf, 20, chan11_raw);
    _mav_put_uint16_t(buf, 22, chan12_raw);
    _mav_put_uint16_t(buf, 24, chan13_raw);
    _mav_put_uint16_t(buf, 26, chan14_raw);
    _mav_put_uint16_t(buf, 28, chan15_raw);
    _mav_put_uint16_t(buf, 30, chan16_raw);
    _mav_put_uint16_t(buf, 32, chan17_raw);
    _mav_put_uint16_t(buf, 34, chan18_raw);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CAMMER_RC_LEN);
#else
    mavlink_cammer_rc_t packet;
    packet.chan1_raw = chan1_raw;
    packet.chan2_raw = chan2_raw;
    packet.chan3_raw = chan3_raw;
    packet.chan4_raw = chan4_raw;
    packet.chan5_raw = chan5_raw;
    packet.chan6_raw = chan6_raw;
    packet.chan7_raw = chan7_raw;
    packet.chan8_raw = chan8_raw;
    packet.chan9_raw = chan9_raw;
    packet.chan10_raw = chan10_raw;
    packet.chan11_raw = chan11_raw;
    packet.chan12_raw = chan12_raw;
    packet.chan13_raw = chan13_raw;
    packet.chan14_raw = chan14_raw;
    packet.chan15_raw = chan15_raw;
    packet.chan16_raw = chan16_raw;
    packet.chan17_raw = chan17_raw;
    packet.chan18_raw = chan18_raw;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CAMMER_RC_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CAMMER_RC;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_CAMMER_RC_MIN_LEN, MAVLINK_MSG_ID_CAMMER_RC_LEN, MAVLINK_MSG_ID_CAMMER_RC_CRC);
}

/**
 * @brief Encode a cammer_rc struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param cammer_rc C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_cammer_rc_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_cammer_rc_t* cammer_rc)
{
    return mavlink_msg_cammer_rc_pack(system_id, component_id, msg, cammer_rc->chan1_raw, cammer_rc->chan2_raw, cammer_rc->chan3_raw, cammer_rc->chan4_raw, cammer_rc->chan5_raw, cammer_rc->chan6_raw, cammer_rc->chan7_raw, cammer_rc->chan8_raw, cammer_rc->chan9_raw, cammer_rc->chan10_raw, cammer_rc->chan11_raw, cammer_rc->chan12_raw, cammer_rc->chan13_raw, cammer_rc->chan14_raw, cammer_rc->chan15_raw, cammer_rc->chan16_raw, cammer_rc->chan17_raw, cammer_rc->chan18_raw);
}

/**
 * @brief Encode a cammer_rc struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param cammer_rc C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_cammer_rc_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_cammer_rc_t* cammer_rc)
{
    return mavlink_msg_cammer_rc_pack_chan(system_id, component_id, chan, msg, cammer_rc->chan1_raw, cammer_rc->chan2_raw, cammer_rc->chan3_raw, cammer_rc->chan4_raw, cammer_rc->chan5_raw, cammer_rc->chan6_raw, cammer_rc->chan7_raw, cammer_rc->chan8_raw, cammer_rc->chan9_raw, cammer_rc->chan10_raw, cammer_rc->chan11_raw, cammer_rc->chan12_raw, cammer_rc->chan13_raw, cammer_rc->chan14_raw, cammer_rc->chan15_raw, cammer_rc->chan16_raw, cammer_rc->chan17_raw, cammer_rc->chan18_raw);
}

/**
 * @brief Send a cammer_rc message
 * @param chan MAVLink channel to send the message
 *
 * @param time_boot_ms Timestamp (milliseconds since system boot)
 * @param chancount Total number of RC channels being received. This can be larger than 18, indicating that more channels are available but not given in this message. This value should be 0 when no RC channels are available.
 * @param chan1_raw RC channel 1 value, in microseconds. A value of UINT16_MAX implies the channel is unused.
 * @param chan2_raw RC channel 2 value, in microseconds. A value of UINT16_MAX implies the channel is unused.
 * @param chan3_raw RC channel 3 value, in microseconds. A value of UINT16_MAX implies the channel is unused.
 * @param chan4_raw RC channel 4 value, in microseconds. A value of UINT16_MAX implies the channel is unused.
 * @param chan5_raw RC channel 5 value, in microseconds. A value of UINT16_MAX implies the channel is unused.
 * @param chan6_raw RC channel 6 value, in microseconds. A value of UINT16_MAX implies the channel is unused.
 * @param chan7_raw RC channel 7 value, in microseconds. A value of UINT16_MAX implies the channel is unused.
 * @param chan8_raw RC channel 8 value, in microseconds. A value of UINT16_MAX implies the channel is unused.
 * @param chan9_raw RC channel 9 value, in microseconds. A value of UINT16_MAX implies the channel is unused.
 * @param chan10_raw RC channel 10 value, in microseconds. A value of UINT16_MAX implies the channel is unused.
 * @param chan11_raw RC channel 11 value, in microseconds. A value of UINT16_MAX implies the channel is unused.
 * @param chan12_raw RC channel 12 value, in microseconds. A value of UINT16_MAX implies the channel is unused.
 * @param chan13_raw RC channel 13 value, in microseconds. A value of UINT16_MAX implies the channel is unused.
 * @param chan14_raw RC channel 14 value, in microseconds. A value of UINT16_MAX implies the channel is unused.
 * @param chan15_raw RC channel 15 value, in microseconds. A value of UINT16_MAX implies the channel is unused.
 * @param chan16_raw RC channel 16 value, in microseconds. A value of UINT16_MAX implies the channel is unused.
 * @param chan17_raw RC channel 17 value, in microseconds. A value of UINT16_MAX implies the channel is unused.
 * @param chan18_raw RC channel 18 value, in microseconds. A value of UINT16_MAX implies the channel is unused.
 * @param rssi Receive signal strength indicator, 0: 0%, 100: 100%, 255: invalid/unknown.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_cammer_rc_send(mavlink_channel_t chan, uint16_t chan1_raw, uint16_t chan2_raw, uint16_t chan3_raw, uint16_t chan4_raw, uint16_t chan5_raw, uint16_t chan6_raw, uint16_t chan7_raw, uint16_t chan8_raw, uint16_t chan9_raw, uint16_t chan10_raw, uint16_t chan11_raw, uint16_t chan12_raw, uint16_t chan13_raw, uint16_t chan14_raw, uint16_t chan15_raw, uint16_t chan16_raw, uint16_t chan17_raw, uint16_t chan18_raw)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CAMMER_RC_LEN];
    _mav_put_uint16_t(buf, 0, chan1_raw);
    _mav_put_uint16_t(buf, 2, chan2_raw);
    _mav_put_uint16_t(buf, 4, chan3_raw);
    _mav_put_uint16_t(buf, 6, chan4_raw);
    _mav_put_uint16_t(buf, 8, chan5_raw);
    _mav_put_uint16_t(buf, 10, chan6_raw);
    _mav_put_uint16_t(buf, 12, chan7_raw);
    _mav_put_uint16_t(buf, 14, chan8_raw);
    _mav_put_uint16_t(buf, 16, chan9_raw);
    _mav_put_uint16_t(buf, 18, chan10_raw);
    _mav_put_uint16_t(buf, 20, chan11_raw);
    _mav_put_uint16_t(buf, 22, chan12_raw);
    _mav_put_uint16_t(buf, 24, chan13_raw);
    _mav_put_uint16_t(buf, 26, chan14_raw);
    _mav_put_uint16_t(buf, 28, chan15_raw);
    _mav_put_uint16_t(buf, 30, chan16_raw);
    _mav_put_uint16_t(buf, 32, chan17_raw);
    _mav_put_uint16_t(buf, 34, chan18_raw);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CAMMER_RC, buf, MAVLINK_MSG_ID_CAMMER_RC_MIN_LEN, MAVLINK_MSG_ID_CAMMER_RC_LEN, MAVLINK_MSG_ID_CAMMER_RC_CRC);
#else
    mavlink_cammer_rc_t packet;
    packet.chan1_raw = chan1_raw;
    packet.chan2_raw = chan2_raw;
    packet.chan3_raw = chan3_raw;
    packet.chan4_raw = chan4_raw;
    packet.chan5_raw = chan5_raw;
    packet.chan6_raw = chan6_raw;
    packet.chan7_raw = chan7_raw;
    packet.chan8_raw = chan8_raw;
    packet.chan9_raw = chan9_raw;
    packet.chan10_raw = chan10_raw;
    packet.chan11_raw = chan11_raw;
    packet.chan12_raw = chan12_raw;
    packet.chan13_raw = chan13_raw;
    packet.chan14_raw = chan14_raw;
    packet.chan15_raw = chan15_raw;
    packet.chan16_raw = chan16_raw;
    packet.chan17_raw = chan17_raw;
    packet.chan18_raw = chan18_raw;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CAMMER_RC, (const char *)&packet, MAVLINK_MSG_ID_CAMMER_RC_MIN_LEN, MAVLINK_MSG_ID_CAMMER_RC_LEN, MAVLINK_MSG_ID_CAMMER_RC_CRC);
#endif
}

/**
 * @brief Send a cammer_rc message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_cammer_rc_send_struct(mavlink_channel_t chan, const mavlink_cammer_rc_t* cammer_rc)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_cammer_rc_send(chan,  cammer_rc->chan1_raw, cammer_rc->chan2_raw, cammer_rc->chan3_raw, cammer_rc->chan4_raw, cammer_rc->chan5_raw, cammer_rc->chan6_raw, cammer_rc->chan7_raw, cammer_rc->chan8_raw, cammer_rc->chan9_raw, cammer_rc->chan10_raw, cammer_rc->chan11_raw, cammer_rc->chan12_raw, cammer_rc->chan13_raw, cammer_rc->chan14_raw, cammer_rc->chan15_raw, cammer_rc->chan16_raw, cammer_rc->chan17_raw, cammer_rc->chan18_raw);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CAMMER_RC, (const char *)cammer_rc, MAVLINK_MSG_ID_CAMMER_RC_MIN_LEN, MAVLINK_MSG_ID_CAMMER_RC_LEN, MAVLINK_MSG_ID_CAMMER_RC_CRC);
#endif
}

#if MAVLINK_MSG_ID_CAMMER_RC_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_cammer_rc_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint16_t chan1_raw, uint16_t chan2_raw, uint16_t chan3_raw, uint16_t chan4_raw, uint16_t chan5_raw, uint16_t chan6_raw, uint16_t chan7_raw, uint16_t chan8_raw, uint16_t chan9_raw, uint16_t chan10_raw, uint16_t chan11_raw, uint16_t chan12_raw, uint16_t chan13_raw, uint16_t chan14_raw, uint16_t chan15_raw, uint16_t chan16_raw, uint16_t chan17_raw, uint16_t chan18_raw)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint16_t(buf, 0, chan1_raw);
    _mav_put_uint16_t(buf, 2, chan2_raw);
    _mav_put_uint16_t(buf, 4, chan3_raw);
    _mav_put_uint16_t(buf, 6, chan4_raw);
    _mav_put_uint16_t(buf, 8, chan5_raw);
    _mav_put_uint16_t(buf, 10, chan6_raw);
    _mav_put_uint16_t(buf, 12, chan7_raw);
    _mav_put_uint16_t(buf, 14, chan8_raw);
    _mav_put_uint16_t(buf, 16, chan9_raw);
    _mav_put_uint16_t(buf, 18, chan10_raw);
    _mav_put_uint16_t(buf, 20, chan11_raw);
    _mav_put_uint16_t(buf, 22, chan12_raw);
    _mav_put_uint16_t(buf, 24, chan13_raw);
    _mav_put_uint16_t(buf, 26, chan14_raw);
    _mav_put_uint16_t(buf, 28, chan15_raw);
    _mav_put_uint16_t(buf, 30, chan16_raw);
    _mav_put_uint16_t(buf, 32, chan17_raw);
    _mav_put_uint16_t(buf, 34, chan18_raw);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CAMMER_RC, buf, MAVLINK_MSG_ID_CAMMER_RC_MIN_LEN, MAVLINK_MSG_ID_CAMMER_RC_LEN, MAVLINK_MSG_ID_CAMMER_RC_CRC);
#else
    mavlink_cammer_rc_t *packet = (mavlink_cammer_rc_t *)msgbuf;
    packet->chan1_raw = chan1_raw;
    packet->chan2_raw = chan2_raw;
    packet->chan3_raw = chan3_raw;
    packet->chan4_raw = chan4_raw;
    packet->chan5_raw = chan5_raw;
    packet->chan6_raw = chan6_raw;
    packet->chan7_raw = chan7_raw;
    packet->chan8_raw = chan8_raw;
    packet->chan9_raw = chan9_raw;
    packet->chan10_raw = chan10_raw;
    packet->chan11_raw = chan11_raw;
    packet->chan12_raw = chan12_raw;
    packet->chan13_raw = chan13_raw;
    packet->chan14_raw = chan14_raw;
    packet->chan15_raw = chan15_raw;
    packet->chan16_raw = chan16_raw;
    packet->chan17_raw = chan17_raw;
    packet->chan18_raw = chan18_raw;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CAMMER_RC, (const char *)packet, MAVLINK_MSG_ID_CAMMER_RC_MIN_LEN, MAVLINK_MSG_ID_CAMMER_RC_LEN, MAVLINK_MSG_ID_CAMMER_RC_CRC);
#endif
}
#endif

#endif

// MESSAGE CAMMER_RC UNPACKING

/**
 * @brief Get field chan1_raw from cammer_rc message
 *
 * @return RC channel 1 value, in microseconds. A value of UINT16_MAX implies the channel is unused.
 */
static inline uint16_t mavlink_msg_cammer_rc_get_chan1_raw(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  0);
}

/**
 * @brief Get field chan2_raw from cammer_rc message
 *
 * @return RC channel 2 value, in microseconds. A value of UINT16_MAX implies the channel is unused.
 */
static inline uint16_t mavlink_msg_cammer_rc_get_chan2_raw(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  2);
}

/**
 * @brief Get field chan3_raw from cammer_rc message
 *
 * @return RC channel 3 value, in microseconds. A value of UINT16_MAX implies the channel is unused.
 */
static inline uint16_t mavlink_msg_cammer_rc_get_chan3_raw(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  4);
}

/**
 * @brief Get field chan4_raw from cammer_rc message
 *
 * @return RC channel 4 value, in microseconds. A value of UINT16_MAX implies the channel is unused.
 */
static inline uint16_t mavlink_msg_cammer_rc_get_chan4_raw(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  6);
}

/**
 * @brief Get field chan5_raw from cammer_rc message
 *
 * @return RC channel 5 value, in microseconds. A value of UINT16_MAX implies the channel is unused.
 */
static inline uint16_t mavlink_msg_cammer_rc_get_chan5_raw(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  8);
}

/**
 * @brief Get field chan6_raw from cammer_rc message
 *
 * @return RC channel 6 value, in microseconds. A value of UINT16_MAX implies the channel is unused.
 */
static inline uint16_t mavlink_msg_cammer_rc_get_chan6_raw(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  10);
}

/**
 * @brief Get field chan7_raw from cammer_rc message
 *
 * @return RC channel 7 value, in microseconds. A value of UINT16_MAX implies the channel is unused.
 */
static inline uint16_t mavlink_msg_cammer_rc_get_chan7_raw(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  12);
}

/**
 * @brief Get field chan8_raw from cammer_rc message
 *
 * @return RC channel 8 value, in microseconds. A value of UINT16_MAX implies the channel is unused.
 */
static inline uint16_t mavlink_msg_cammer_rc_get_chan8_raw(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  14);
}

/**
 * @brief Get field chan9_raw from cammer_rc message
 *
 * @return RC channel 9 value, in microseconds. A value of UINT16_MAX implies the channel is unused.
 */
static inline uint16_t mavlink_msg_cammer_rc_get_chan9_raw(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  16);
}

/**
 * @brief Get field chan10_raw from cammer_rc message
 *
 * @return RC channel 10 value, in microseconds. A value of UINT16_MAX implies the channel is unused.
 */
static inline uint16_t mavlink_msg_cammer_rc_get_chan10_raw(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  18);
}

/**
 * @brief Get field chan11_raw from cammer_rc message
 *
 * @return RC channel 11 value, in microseconds. A value of UINT16_MAX implies the channel is unused.
 */
static inline uint16_t mavlink_msg_cammer_rc_get_chan11_raw(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  20);
}

/**
 * @brief Get field chan12_raw from cammer_rc message
 *
 * @return RC channel 12 value, in microseconds. A value of UINT16_MAX implies the channel is unused.
 */
static inline uint16_t mavlink_msg_cammer_rc_get_chan12_raw(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  22);
}

/**
 * @brief Get field chan13_raw from cammer_rc message
 *
 * @return RC channel 13 value, in microseconds. A value of UINT16_MAX implies the channel is unused.
 */
static inline uint16_t mavlink_msg_cammer_rc_get_chan13_raw(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  24);
}

/**
 * @brief Get field chan14_raw from cammer_rc message
 *
 * @return RC channel 14 value, in microseconds. A value of UINT16_MAX implies the channel is unused.
 */
static inline uint16_t mavlink_msg_cammer_rc_get_chan14_raw(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  26);
}

/**
 * @brief Get field chan15_raw from cammer_rc message
 *
 * @return RC channel 15 value, in microseconds. A value of UINT16_MAX implies the channel is unused.
 */
static inline uint16_t mavlink_msg_cammer_rc_get_chan15_raw(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  28);
}

/**
 * @brief Get field chan16_raw from cammer_rc message
 *
 * @return RC channel 16 value, in microseconds. A value of UINT16_MAX implies the channel is unused.
 */
static inline uint16_t mavlink_msg_cammer_rc_get_chan16_raw(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  30);
}

/**
 * @brief Get field chan17_raw from cammer_rc message
 *
 * @return RC channel 17 value, in microseconds. A value of UINT16_MAX implies the channel is unused.
 */
static inline uint16_t mavlink_msg_cammer_rc_get_chan17_raw(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  32);
}

/**
 * @brief Get field chan18_raw from cammer_rc message
 *
 * @return RC channel 18 value, in microseconds. A value of UINT16_MAX implies the channel is unused.
 */
static inline uint16_t mavlink_msg_cammer_rc_get_chan18_raw(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  34);
}

/**
 * @brief Decode a cammer_rc message into a struct
 *
 * @param msg The message to decode
 * @param cammer_rc C-struct to decode the message contents into
 */
static inline void mavlink_msg_cammer_rc_decode(const mavlink_message_t* msg, mavlink_cammer_rc_t* cammer_rc)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    cammer_rc->chan1_raw = mavlink_msg_cammer_rc_get_chan1_raw(msg);
    cammer_rc->chan2_raw = mavlink_msg_cammer_rc_get_chan2_raw(msg);
    cammer_rc->chan3_raw = mavlink_msg_cammer_rc_get_chan3_raw(msg);
    cammer_rc->chan4_raw = mavlink_msg_cammer_rc_get_chan4_raw(msg);
    cammer_rc->chan5_raw = mavlink_msg_cammer_rc_get_chan5_raw(msg);
    cammer_rc->chan6_raw = mavlink_msg_cammer_rc_get_chan6_raw(msg);
    cammer_rc->chan7_raw = mavlink_msg_cammer_rc_get_chan7_raw(msg);
    cammer_rc->chan8_raw = mavlink_msg_cammer_rc_get_chan8_raw(msg);
    cammer_rc->chan9_raw = mavlink_msg_cammer_rc_get_chan9_raw(msg);
    cammer_rc->chan10_raw = mavlink_msg_cammer_rc_get_chan10_raw(msg);
    cammer_rc->chan11_raw = mavlink_msg_cammer_rc_get_chan11_raw(msg);
    cammer_rc->chan12_raw = mavlink_msg_cammer_rc_get_chan12_raw(msg);
    cammer_rc->chan13_raw = mavlink_msg_cammer_rc_get_chan13_raw(msg);
    cammer_rc->chan14_raw = mavlink_msg_cammer_rc_get_chan14_raw(msg);
    cammer_rc->chan15_raw = mavlink_msg_cammer_rc_get_chan15_raw(msg);
    cammer_rc->chan16_raw = mavlink_msg_cammer_rc_get_chan16_raw(msg);
    cammer_rc->chan17_raw = mavlink_msg_cammer_rc_get_chan17_raw(msg);
    cammer_rc->chan18_raw = mavlink_msg_cammer_rc_get_chan18_raw(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_CAMMER_RC_LEN? msg->len : MAVLINK_MSG_ID_CAMMER_RC_LEN;
        memset(cammer_rc, 0, MAVLINK_MSG_ID_CAMMER_RC_LEN);
    memcpy(cammer_rc, _MAV_PAYLOAD(msg), len);
#endif
}
