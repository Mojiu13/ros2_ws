// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from example_ros2_interfaces:msg/RobotStatus.idl
// generated code does not contain a copyright notice

#include "example_ros2_interfaces/msg/detail/robot_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_example_ros2_interfaces
const rosidl_type_hash_t *
example_ros2_interfaces__msg__RobotStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xea, 0x95, 0xa9, 0xa3, 0x95, 0x9f, 0x53, 0x04,
      0xbe, 0xfa, 0xf1, 0xe4, 0xd3, 0x96, 0xe3, 0x3d,
      0xb8, 0xbc, 0x48, 0xae, 0x58, 0xdd, 0xa0, 0x20,
      0x3d, 0x53, 0xf1, 0x4b, 0x3a, 0xf0, 0x1b, 0x2b,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char example_ros2_interfaces__msg__RobotStatus__TYPE_NAME[] = "example_ros2_interfaces/msg/RobotStatus";

// Define type names, field names, and default values
static char example_ros2_interfaces__msg__RobotStatus__FIELD_NAME__status[] = "status";
static char example_ros2_interfaces__msg__RobotStatus__FIELD_NAME__pose[] = "pose";

static rosidl_runtime_c__type_description__Field example_ros2_interfaces__msg__RobotStatus__FIELDS[] = {
  {
    {example_ros2_interfaces__msg__RobotStatus__FIELD_NAME__status, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {example_ros2_interfaces__msg__RobotStatus__FIELD_NAME__pose, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
example_ros2_interfaces__msg__RobotStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {example_ros2_interfaces__msg__RobotStatus__TYPE_NAME, 39, 39},
      {example_ros2_interfaces__msg__RobotStatus__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint32 STATUS_MOVEING = 1\n"
  "uint32 STATUS_STOP = 1\n"
  "uint32  status\n"
  "float32 pose\n"
  "";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
example_ros2_interfaces__msg__RobotStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {example_ros2_interfaces__msg__RobotStatus__TYPE_NAME, 39, 39},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 78, 78},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
example_ros2_interfaces__msg__RobotStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *example_ros2_interfaces__msg__RobotStatus__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
