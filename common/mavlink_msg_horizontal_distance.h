// MESSAGE HORIZONTAL_DISTANCE PACKING

#define MAVLINK_MSG_ID_HORIZONTAL_DISTANCE 280
MAVPACKED(
typedef struct __mavlink_horizontal_distance_t
{
 uint32_t time_boot_ms; /*< Time since system boot*/
 uint16_t min_distance; /*< Minimum distance the sensor can measure in centimeters*/
 uint16_t max_distance; /*< Maximum distance the sensor can measure in centimeters*/
 uint16_t current_distance[4]; /*< Current distance reading*/
 uint8_t type; /*< Type from MAV_DISTANCE_SENSOR enum.*/
 uint8_t id; /*< Onboard ID of the sensor*/
 uint8_t orientation; /*< Direction the sensor faces from MAV_SENSOR_ORIENTATION enum.*/
 uint8_t covariance; /*< Measurement covariance in centimeters, 0 for unknown / invalid readings*/
}) mavlink_horizontal_distance_t;

#define MAVLINK_MSG_ID_HORIZONTAL_DISTANCE_LEN 20
#define MAVLINK_MSG_ID_HORIZONTAL_DISTANCE_MIN_LEN 20
#define MAVLINK_MSG_ID_280_LEN 20
#define MAVLINK_MSG_ID_280_MIN_LEN 20

#define MAVLINK_MSG_ID_HORIZONTAL_DISTANCE_CRC 57
#define MAVLINK_MSG_ID_280_CRC 57

#define MAVLINK_MSG_HORIZONTAL_DISTANCE_FIELD_CURRENT_DISTANCE_LEN 4

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_HORIZONTAL_DISTANCE { \
	180, \
	"HORIZONTAL_DISTANCE", \
	8, \
	{  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_horizontal_distance_t, time_boot_ms) }, \
         { "min_distance", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_horizontal_distance_t, min_distance) }, \
         { "max_distance", NULL, MAVLINK_TYPE_UINT16_T, 0, 6, offsetof(mavlink_horizontal_distance_t, max_distance) }, \
         { "current_distance", NULL, MAVLINK_TYPE_UINT16_T, 4, 8, offsetof(mavlink_horizontal_distance_t, current_distance) }, \
         { "type", NULL, MAVLINK_TYPE_UINT8_T, 0, 16, offsetof(mavlink_horizontal_distance_t, type) }, \
         { "id", NULL, MAVLINK_TYPE_UINT8_T, 0, 17, offsetof(mavlink_horizontal_distance_t, id) }, \
         { "orientation", NULL, MAVLINK_TYPE_UINT8_T, 0, 18, offsetof(mavlink_horizontal_distance_t, orientation) }, \
         { "covariance", NULL, MAVLINK_TYPE_UINT8_T, 0, 19, offsetof(mavlink_horizontal_distance_t, covariance) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_HORIZONTAL_DISTANCE { \
	"HORIZONTAL_DISTANCE", \
	8, \
	{  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_horizontal_distance_t, time_boot_ms) }, \
         { "min_distance", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_horizontal_distance_t, min_distance) }, \
         { "max_distance", NULL, MAVLINK_TYPE_UINT16_T, 0, 6, offsetof(mavlink_horizontal_distance_t, max_distance) }, \
         { "current_distance", NULL, MAVLINK_TYPE_UINT16_T, 4, 8, offsetof(mavlink_horizontal_distance_t, current_distance) }, \
         { "type", NULL, MAVLINK_TYPE_UINT8_T, 0, 16, offsetof(mavlink_horizontal_distance_t, type) }, \
         { "id", NULL, MAVLINK_TYPE_UINT8_T, 0, 17, offsetof(mavlink_horizontal_distance_t, id) }, \
         { "orientation", NULL, MAVLINK_TYPE_UINT8_T, 0, 18, offsetof(mavlink_horizontal_distance_t, orientation) }, \
         { "covariance", NULL, MAVLINK_TYPE_UINT8_T, 0, 19, offsetof(mavlink_horizontal_distance_t, covariance) }, \
         } \
}
#endif

/**
 * @brief Pack a horizontal_distance message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_boot_ms Time since system boot
 * @param min_distance Minimum distance the sensor can measure in centimeters
 * @param max_distance Maximum distance the sensor can measure in centimeters
 * @param current_distance Current distance reading
 * @param type Type from MAV_DISTANCE_SENSOR enum.
 * @param id Onboard ID of the sensor
 * @param orientation Direction the sensor faces from MAV_SENSOR_ORIENTATION enum.
 * @param covariance Measurement covariance in centimeters, 0 for unknown / invalid readings
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_horizontal_distance_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint32_t time_boot_ms, uint16_t min_distance, uint16_t max_distance, const uint16_t *current_distance, uint8_t type, uint8_t id, uint8_t orientation, uint8_t covariance)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_HORIZONTAL_DISTANCE_LEN];
	_mav_put_uint32_t(buf, 0, time_boot_ms);
	_mav_put_uint16_t(buf, 4, min_distance);
	_mav_put_uint16_t(buf, 6, max_distance);
	_mav_put_uint8_t(buf, 16, type);
	_mav_put_uint8_t(buf, 17, id);
	_mav_put_uint8_t(buf, 18, orientation);
	_mav_put_uint8_t(buf, 19, covariance);
	_mav_put_uint16_t_array(buf, 8, current_distance, 4);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HORIZONTAL_DISTANCE_LEN);
#else
	mavlink_horizontal_distance_t packet;
	packet.time_boot_ms = time_boot_ms;
	packet.min_distance = min_distance;
	packet.max_distance = max_distance;
	packet.type = type;
	packet.id = id;
	packet.orientation = orientation;
	packet.covariance = covariance;
	mav_array_memcpy(packet.current_distance, current_distance, sizeof(uint16_t)*4);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_HORIZONTAL_DISTANCE_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_HORIZONTAL_DISTANCE;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_HORIZONTAL_DISTANCE_MIN_LEN, MAVLINK_MSG_ID_HORIZONTAL_DISTANCE_LEN, MAVLINK_MSG_ID_HORIZONTAL_DISTANCE_CRC);
}

/**
 * @brief Pack a horizontal_distance message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_boot_ms Time since system boot
 * @param min_distance Minimum distance the sensor can measure in centimeters
 * @param max_distance Maximum distance the sensor can measure in centimeters
 * @param current_distance Current distance reading
 * @param type Type from MAV_DISTANCE_SENSOR enum.
 * @param id Onboard ID of the sensor
 * @param orientation Direction the sensor faces from MAV_SENSOR_ORIENTATION enum.
 * @param covariance Measurement covariance in centimeters, 0 for unknown / invalid readings
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_horizontal_distance_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint32_t time_boot_ms,uint16_t min_distance,uint16_t max_distance,const uint16_t *current_distance,uint8_t type,uint8_t id,uint8_t orientation,uint8_t covariance)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_HORIZONTAL_DISTANCE_LEN];
	_mav_put_uint32_t(buf, 0, time_boot_ms);
	_mav_put_uint16_t(buf, 4, min_distance);
	_mav_put_uint16_t(buf, 6, max_distance);
	_mav_put_uint8_t(buf, 16, type);
	_mav_put_uint8_t(buf, 17, id);
	_mav_put_uint8_t(buf, 18, orientation);
	_mav_put_uint8_t(buf, 19, covariance);
	_mav_put_uint16_t_array(buf, 8, current_distance, 4);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HORIZONTAL_DISTANCE_LEN);
#else
	mavlink_horizontal_distance_t packet;
	packet.time_boot_ms = time_boot_ms;
	packet.min_distance = min_distance;
	packet.max_distance = max_distance;
	packet.type = type;
	packet.id = id;
	packet.orientation = orientation;
	packet.covariance = covariance;
	mav_array_memcpy(packet.current_distance, current_distance, sizeof(uint16_t)*4);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_HORIZONTAL_DISTANCE_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_HORIZONTAL_DISTANCE;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_HORIZONTAL_DISTANCE_MIN_LEN, MAVLINK_MSG_ID_HORIZONTAL_DISTANCE_LEN, MAVLINK_MSG_ID_HORIZONTAL_DISTANCE_CRC);
}

/**
 * @brief Encode a horizontal_distance struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param horizontal_distance C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_horizontal_distance_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_horizontal_distance_t* horizontal_distance)
{
	return mavlink_msg_horizontal_distance_pack(system_id, component_id, msg, horizontal_distance->time_boot_ms, horizontal_distance->min_distance, horizontal_distance->max_distance, horizontal_distance->current_distance, horizontal_distance->type, horizontal_distance->id, horizontal_distance->orientation, horizontal_distance->covariance);
}

/**
 * @brief Encode a horizontal_distance struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param horizontal_distance C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_horizontal_distance_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_horizontal_distance_t* horizontal_distance)
{
	return mavlink_msg_horizontal_distance_pack_chan(system_id, component_id, chan, msg, horizontal_distance->time_boot_ms, horizontal_distance->min_distance, horizontal_distance->max_distance, horizontal_distance->current_distance, horizontal_distance->type, horizontal_distance->id, horizontal_distance->orientation, horizontal_distance->covariance);
}

/**
 * @brief Send a horizontal_distance message
 * @param chan MAVLink channel to send the message
 *
 * @param time_boot_ms Time since system boot
 * @param min_distance Minimum distance the sensor can measure in centimeters
 * @param max_distance Maximum distance the sensor can measure in centimeters
 * @param current_distance Current distance reading
 * @param type Type from MAV_DISTANCE_SENSOR enum.
 * @param id Onboard ID of the sensor
 * @param orientation Direction the sensor faces from MAV_SENSOR_ORIENTATION enum.
 * @param covariance Measurement covariance in centimeters, 0 for unknown / invalid readings
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_horizontal_distance_send(mavlink_channel_t chan, uint32_t time_boot_ms, uint16_t min_distance, uint16_t max_distance, const uint16_t *current_distance, uint8_t type, uint8_t id, uint8_t orientation, uint8_t covariance)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_HORIZONTAL_DISTANCE_LEN];
	_mav_put_uint32_t(buf, 0, time_boot_ms);
	_mav_put_uint16_t(buf, 4, min_distance);
	_mav_put_uint16_t(buf, 6, max_distance);
	_mav_put_uint8_t(buf, 16, type);
	_mav_put_uint8_t(buf, 17, id);
	_mav_put_uint8_t(buf, 18, orientation);
	_mav_put_uint8_t(buf, 19, covariance);
	_mav_put_uint16_t_array(buf, 8, current_distance, 4);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HORIZONTAL_DISTANCE, buf, MAVLINK_MSG_ID_HORIZONTAL_DISTANCE_MIN_LEN, MAVLINK_MSG_ID_HORIZONTAL_DISTANCE_LEN, MAVLINK_MSG_ID_HORIZONTAL_DISTANCE_CRC);
#else
	mavlink_horizontal_distance_t packet;
	packet.time_boot_ms = time_boot_ms;
	packet.min_distance = min_distance;
	packet.max_distance = max_distance;
	packet.type = type;
	packet.id = id;
	packet.orientation = orientation;
	packet.covariance = covariance;
	mav_array_memcpy(packet.current_distance, current_distance, sizeof(uint16_t)*4);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HORIZONTAL_DISTANCE, (const char *)&packet, MAVLINK_MSG_ID_HORIZONTAL_DISTANCE_MIN_LEN, MAVLINK_MSG_ID_HORIZONTAL_DISTANCE_LEN, MAVLINK_MSG_ID_HORIZONTAL_DISTANCE_CRC);
#endif
}

/**
 * @brief Send a horizontal_distance message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_horizontal_distance_send_struct(mavlink_channel_t chan, const mavlink_horizontal_distance_t* horizontal_distance)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_horizontal_distance_send(chan, horizontal_distance->time_boot_ms, horizontal_distance->min_distance, horizontal_distance->max_distance, horizontal_distance->current_distance, horizontal_distance->type, horizontal_distance->id, horizontal_distance->orientation, horizontal_distance->covariance);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HORIZONTAL_DISTANCE, (const char *)horizontal_distance, MAVLINK_MSG_ID_HORIZONTAL_DISTANCE_MIN_LEN, MAVLINK_MSG_ID_HORIZONTAL_DISTANCE_LEN, MAVLINK_MSG_ID_HORIZONTAL_DISTANCE_CRC);
#endif
}

#if MAVLINK_MSG_ID_HORIZONTAL_DISTANCE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_horizontal_distance_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t time_boot_ms, uint16_t min_distance, uint16_t max_distance, const uint16_t *current_distance, uint8_t type, uint8_t id, uint8_t orientation, uint8_t covariance)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_uint32_t(buf, 0, time_boot_ms);
	_mav_put_uint16_t(buf, 4, min_distance);
	_mav_put_uint16_t(buf, 6, max_distance);
	_mav_put_uint8_t(buf, 16, type);
	_mav_put_uint8_t(buf, 17, id);
	_mav_put_uint8_t(buf, 18, orientation);
	_mav_put_uint8_t(buf, 19, covariance);
	_mav_put_uint16_t_array(buf, 8, current_distance, 4);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HORIZONTAL_DISTANCE, buf, MAVLINK_MSG_ID_HORIZONTAL_DISTANCE_MIN_LEN, MAVLINK_MSG_ID_HORIZONTAL_DISTANCE_LEN, MAVLINK_MSG_ID_HORIZONTAL_DISTANCE_CRC);
#else
	mavlink_horizontal_distance_t *packet = (mavlink_horizontal_distance_t *)msgbuf;
	packet->time_boot_ms = time_boot_ms;
	packet->min_distance = min_distance;
	packet->max_distance = max_distance;
	packet->type = type;
	packet->id = id;
	packet->orientation = orientation;
	packet->covariance = covariance;
	mav_array_memcpy(packet->current_distance, current_distance, sizeof(uint16_t)*4);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HORIZONTAL_DISTANCE, (const char *)packet, MAVLINK_MSG_ID_HORIZONTAL_DISTANCE_MIN_LEN, MAVLINK_MSG_ID_HORIZONTAL_DISTANCE_LEN, MAVLINK_MSG_ID_HORIZONTAL_DISTANCE_CRC);
#endif
}
#endif

#endif

// MESSAGE HORIZONTAL_DISTANCE UNPACKING


/**
 * @brief Get field time_boot_ms from horizontal_distance message
 *
 * @return Time since system boot
 */
static inline uint32_t mavlink_msg_horizontal_distance_get_time_boot_ms(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field min_distance from horizontal_distance message
 *
 * @return Minimum distance the sensor can measure in centimeters
 */
static inline uint16_t mavlink_msg_horizontal_distance_get_min_distance(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint16_t(msg,  4);
}

/**
 * @brief Get field max_distance from horizontal_distance message
 *
 * @return Maximum distance the sensor can measure in centimeters
 */
static inline uint16_t mavlink_msg_horizontal_distance_get_max_distance(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint16_t(msg,  6);
}

/**
 * @brief Get field current_distance from horizontal_distance message
 *
 * @return Current distance reading
 */
static inline uint16_t mavlink_msg_horizontal_distance_get_current_distance(const mavlink_message_t* msg, uint16_t *current_distance)
{
	return _MAV_RETURN_uint16_t_array(msg, current_distance, 4,  8);
}

/**
 * @brief Get field type from horizontal_distance message
 *
 * @return Type from MAV_DISTANCE_SENSOR enum.
 */
static inline uint8_t mavlink_msg_horizontal_distance_get_type(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  16);
}

/**
 * @brief Get field id from horizontal_distance message
 *
 * @return Onboard ID of the sensor
 */
static inline uint8_t mavlink_msg_horizontal_distance_get_id(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  17);
}

/**
 * @brief Get field orientation from horizontal_distance message
 *
 * @return Direction the sensor faces from MAV_SENSOR_ORIENTATION enum.
 */
static inline uint8_t mavlink_msg_horizontal_distance_get_orientation(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  18);
}

/**
 * @brief Get field covariance from horizontal_distance message
 *
 * @return Measurement covariance in centimeters, 0 for unknown / invalid readings
 */
static inline uint8_t mavlink_msg_horizontal_distance_get_covariance(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  19);
}

/**
 * @brief Decode a horizontal_distance message into a struct
 *
 * @param msg The message to decode
 * @param horizontal_distance C-struct to decode the message contents into
 */
static inline void mavlink_msg_horizontal_distance_decode(const mavlink_message_t* msg, mavlink_horizontal_distance_t* horizontal_distance)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	horizontal_distance->time_boot_ms = mavlink_msg_horizontal_distance_get_time_boot_ms(msg);
	horizontal_distance->min_distance = mavlink_msg_horizontal_distance_get_min_distance(msg);
	horizontal_distance->max_distance = mavlink_msg_horizontal_distance_get_max_distance(msg);
	mavlink_msg_horizontal_distance_get_current_distance(msg, horizontal_distance->current_distance);
	horizontal_distance->type = mavlink_msg_horizontal_distance_get_type(msg);
	horizontal_distance->id = mavlink_msg_horizontal_distance_get_id(msg);
	horizontal_distance->orientation = mavlink_msg_horizontal_distance_get_orientation(msg);
	horizontal_distance->covariance = mavlink_msg_horizontal_distance_get_covariance(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_HORIZONTAL_DISTANCE_LEN? msg->len : MAVLINK_MSG_ID_HORIZONTAL_DISTANCE_LEN;
        memset(horizontal_distance, 0, MAVLINK_MSG_ID_HORIZONTAL_DISTANCE_LEN);
	memcpy(horizontal_distance, _MAV_PAYLOAD(msg), len);
#endif
}
