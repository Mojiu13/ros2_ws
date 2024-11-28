// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from example_ros2_interfaces:srv/MoveRobot.idl
// generated code does not contain a copyright notice

#include "example_ros2_interfaces/srv/detail/move_robot__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_example_ros2_interfaces
const rosidl_type_hash_t *
example_ros2_interfaces__srv__MoveRobot__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x99, 0x1d, 0xd7, 0x05, 0x84, 0x98, 0xbf, 0x65,
      0xdb, 0xa1, 0x88, 0xcf, 0xed, 0x76, 0xad, 0x9e,
      0x00, 0xf7, 0x97, 0x9b, 0x55, 0x32, 0x62, 0xa5,
      0x2f, 0xad, 0xb3, 0xa4, 0xcc, 0xd7, 0xd5, 0x5c,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_example_ros2_interfaces
const rosidl_type_hash_t *
example_ros2_interfaces__srv__MoveRobot_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xac, 0xe7, 0xdb, 0xdb, 0xb1, 0x83, 0xbf, 0x3a,
      0xb9, 0xfc, 0xa7, 0xac, 0x7a, 0xef, 0xeb, 0xc0,
      0x97, 0xcb, 0x45, 0x41, 0xa9, 0xc9, 0x03, 0x55,
      0xec, 0x6b, 0x08, 0xce, 0x27, 0x63, 0x9c, 0x0b,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_example_ros2_interfaces
const rosidl_type_hash_t *
example_ros2_interfaces__srv__MoveRobot_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xcb, 0xec, 0x37, 0x75, 0x08, 0xc1, 0x5a, 0xc3,
      0xb0, 0xc1, 0xa4, 0x99, 0xed, 0x7c, 0x6e, 0x1c,
      0x70, 0x33, 0x66, 0x88, 0x28, 0x7c, 0x31, 0xfc,
      0x9f, 0x2c, 0xd1, 0xb0, 0x5d, 0x37, 0x17, 0x86,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_example_ros2_interfaces
const rosidl_type_hash_t *
example_ros2_interfaces__srv__MoveRobot_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x63, 0x31, 0x44, 0xa6, 0x96, 0x9d, 0x1f, 0xdb,
      0xf0, 0x70, 0x89, 0x3a, 0xe0, 0xdc, 0xe2, 0xeb,
      0xa8, 0x2d, 0x2a, 0xa8, 0xdd, 0x59, 0xf3, 0x20,
      0xda, 0x37, 0xad, 0x5a, 0x23, 0xda, 0xe6, 0x55,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char example_ros2_interfaces__srv__MoveRobot__TYPE_NAME[] = "example_ros2_interfaces/srv/MoveRobot";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char example_ros2_interfaces__srv__MoveRobot_Event__TYPE_NAME[] = "example_ros2_interfaces/srv/MoveRobot_Event";
static char example_ros2_interfaces__srv__MoveRobot_Request__TYPE_NAME[] = "example_ros2_interfaces/srv/MoveRobot_Request";
static char example_ros2_interfaces__srv__MoveRobot_Response__TYPE_NAME[] = "example_ros2_interfaces/srv/MoveRobot_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char example_ros2_interfaces__srv__MoveRobot__FIELD_NAME__request_message[] = "request_message";
static char example_ros2_interfaces__srv__MoveRobot__FIELD_NAME__response_message[] = "response_message";
static char example_ros2_interfaces__srv__MoveRobot__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field example_ros2_interfaces__srv__MoveRobot__FIELDS[] = {
  {
    {example_ros2_interfaces__srv__MoveRobot__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {example_ros2_interfaces__srv__MoveRobot_Request__TYPE_NAME, 45, 45},
    },
    {NULL, 0, 0},
  },
  {
    {example_ros2_interfaces__srv__MoveRobot__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {example_ros2_interfaces__srv__MoveRobot_Response__TYPE_NAME, 46, 46},
    },
    {NULL, 0, 0},
  },
  {
    {example_ros2_interfaces__srv__MoveRobot__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {example_ros2_interfaces__srv__MoveRobot_Event__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription example_ros2_interfaces__srv__MoveRobot__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {example_ros2_interfaces__srv__MoveRobot_Event__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {example_ros2_interfaces__srv__MoveRobot_Request__TYPE_NAME, 45, 45},
    {NULL, 0, 0},
  },
  {
    {example_ros2_interfaces__srv__MoveRobot_Response__TYPE_NAME, 46, 46},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
example_ros2_interfaces__srv__MoveRobot__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {example_ros2_interfaces__srv__MoveRobot__TYPE_NAME, 37, 37},
      {example_ros2_interfaces__srv__MoveRobot__FIELDS, 3, 3},
    },
    {example_ros2_interfaces__srv__MoveRobot__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = example_ros2_interfaces__srv__MoveRobot_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = example_ros2_interfaces__srv__MoveRobot_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = example_ros2_interfaces__srv__MoveRobot_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char example_ros2_interfaces__srv__MoveRobot_Request__FIELD_NAME__distance[] = "distance";

static rosidl_runtime_c__type_description__Field example_ros2_interfaces__srv__MoveRobot_Request__FIELDS[] = {
  {
    {example_ros2_interfaces__srv__MoveRobot_Request__FIELD_NAME__distance, 8, 8},
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
example_ros2_interfaces__srv__MoveRobot_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {example_ros2_interfaces__srv__MoveRobot_Request__TYPE_NAME, 45, 45},
      {example_ros2_interfaces__srv__MoveRobot_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char example_ros2_interfaces__srv__MoveRobot_Response__FIELD_NAME__pose[] = "pose";

static rosidl_runtime_c__type_description__Field example_ros2_interfaces__srv__MoveRobot_Response__FIELDS[] = {
  {
    {example_ros2_interfaces__srv__MoveRobot_Response__FIELD_NAME__pose, 4, 4},
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
example_ros2_interfaces__srv__MoveRobot_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {example_ros2_interfaces__srv__MoveRobot_Response__TYPE_NAME, 46, 46},
      {example_ros2_interfaces__srv__MoveRobot_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char example_ros2_interfaces__srv__MoveRobot_Event__FIELD_NAME__info[] = "info";
static char example_ros2_interfaces__srv__MoveRobot_Event__FIELD_NAME__request[] = "request";
static char example_ros2_interfaces__srv__MoveRobot_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field example_ros2_interfaces__srv__MoveRobot_Event__FIELDS[] = {
  {
    {example_ros2_interfaces__srv__MoveRobot_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {example_ros2_interfaces__srv__MoveRobot_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {example_ros2_interfaces__srv__MoveRobot_Request__TYPE_NAME, 45, 45},
    },
    {NULL, 0, 0},
  },
  {
    {example_ros2_interfaces__srv__MoveRobot_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {example_ros2_interfaces__srv__MoveRobot_Response__TYPE_NAME, 46, 46},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription example_ros2_interfaces__srv__MoveRobot_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {example_ros2_interfaces__srv__MoveRobot_Request__TYPE_NAME, 45, 45},
    {NULL, 0, 0},
  },
  {
    {example_ros2_interfaces__srv__MoveRobot_Response__TYPE_NAME, 46, 46},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
example_ros2_interfaces__srv__MoveRobot_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {example_ros2_interfaces__srv__MoveRobot_Event__TYPE_NAME, 43, 43},
      {example_ros2_interfaces__srv__MoveRobot_Event__FIELDS, 3, 3},
    },
    {example_ros2_interfaces__srv__MoveRobot_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = example_ros2_interfaces__srv__MoveRobot_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = example_ros2_interfaces__srv__MoveRobot_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# \\xe5\\x89\\x8d\\xe8\\xbf\\x9b\\xe5\\x90\\x8e\\xe9\\x80\\x80\\xe7\\x9a\\x84\\xe8\\xb7\\x9d\\xe7\\xa6\\xbb\n"
  "float32 distance\n"
  "---\n"
  "# \\xe5\\xbd\\x93\\xe5\\x89\\x8d\\xe7\\x9a\\x84\\xe4\\xbd\\x8d\\xe7\\xbd\\xae\n"
  "float32 pose";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
example_ros2_interfaces__srv__MoveRobot__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {example_ros2_interfaces__srv__MoveRobot__TYPE_NAME, 37, 37},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 52, 52},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
example_ros2_interfaces__srv__MoveRobot_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {example_ros2_interfaces__srv__MoveRobot_Request__TYPE_NAME, 45, 45},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
example_ros2_interfaces__srv__MoveRobot_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {example_ros2_interfaces__srv__MoveRobot_Response__TYPE_NAME, 46, 46},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
example_ros2_interfaces__srv__MoveRobot_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {example_ros2_interfaces__srv__MoveRobot_Event__TYPE_NAME, 43, 43},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
example_ros2_interfaces__srv__MoveRobot__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *example_ros2_interfaces__srv__MoveRobot__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *example_ros2_interfaces__srv__MoveRobot_Event__get_individual_type_description_source(NULL);
    sources[3] = *example_ros2_interfaces__srv__MoveRobot_Request__get_individual_type_description_source(NULL);
    sources[4] = *example_ros2_interfaces__srv__MoveRobot_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
example_ros2_interfaces__srv__MoveRobot_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *example_ros2_interfaces__srv__MoveRobot_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
example_ros2_interfaces__srv__MoveRobot_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *example_ros2_interfaces__srv__MoveRobot_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
example_ros2_interfaces__srv__MoveRobot_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *example_ros2_interfaces__srv__MoveRobot_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *example_ros2_interfaces__srv__MoveRobot_Request__get_individual_type_description_source(NULL);
    sources[3] = *example_ros2_interfaces__srv__MoveRobot_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
