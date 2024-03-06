/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/enums/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */

#include "thrift/compiler/test/fixtures/enums/gen-cpp2/module_data.h"

#include <thrift/lib/cpp2/gen/module_data_cpp.h>

FOLLY_CLANG_DISABLE_WARNING("-Wunused-macros")

#if defined(__GNUC__) && defined(__linux__) && !FOLLY_MOBILE
// These attributes are applied to the static data members to ensure that they
// are not stripped from the compiled binary, in order to keep them available
// for use by debuggers at runtime.
//
// The "used" attribute is required to ensure the compiler always emits unused
// data.
//
// The "section" attribute is required to stop the linker from stripping used
// data. It works by forcing all of the data members (both used and unused ones)
// into the same section. As the linker strips data on a per-section basis, it
// is then unable to remove unused data without also removing used data.
// This has a similar effect to the "retain" attribute, but works with older
// toolchains.
#define THRIFT_DATA_MEMBER [[gnu::used]] [[gnu::section(".rodata.thrift.data")]]
#else
#define THRIFT_DATA_MEMBER
#endif

namespace apache {
namespace thrift {

THRIFT_DATA_MEMBER const std::string_view TStructDataStorage<::test::fixtures::enums::SomeStruct>::name = "SomeStruct";
THRIFT_DATA_MEMBER const std::array<std::string_view, 4> TStructDataStorage<::test::fixtures::enums::SomeStruct>::fields_names = {{
  "reasonable"sv,
  "fine"sv,
  "questionable"sv,
  "tags"sv,
}};
THRIFT_DATA_MEMBER const std::array<int16_t, 4> TStructDataStorage<::test::fixtures::enums::SomeStruct>::fields_ids = {{
  1,
  2,
  3,
  4,
}};
THRIFT_DATA_MEMBER const std::array<protocol::TType, 4> TStructDataStorage<::test::fixtures::enums::SomeStruct>::fields_types = {{
  TType::T_I32,
  TType::T_I32,
  TType::T_I32,
  TType::T_SET,
}};
THRIFT_DATA_MEMBER const std::array<std::string_view, 4> TStructDataStorage<::test::fixtures::enums::SomeStruct>::storage_names = {{
  "__fbthrift_field_reasonable"sv,
  "__fbthrift_field_fine"sv,
  "__fbthrift_field_questionable"sv,
  "__fbthrift_field_tags"sv,
}};
THRIFT_DATA_MEMBER const std::array<int, 4> TStructDataStorage<::test::fixtures::enums::SomeStruct>::isset_indexes = {{
  0,
  1,
  2,
  3,
}};

THRIFT_DATA_MEMBER const std::string_view TStructDataStorage<::test::fixtures::enums::MyStruct>::name = "MyStruct";
THRIFT_DATA_MEMBER const std::array<std::string_view, 4> TStructDataStorage<::test::fixtures::enums::MyStruct>::fields_names = {{
  "me2_3"sv,
  "me3_n3"sv,
  "me1_t1"sv,
  "me1_t2"sv,
}};
THRIFT_DATA_MEMBER const std::array<int16_t, 4> TStructDataStorage<::test::fixtures::enums::MyStruct>::fields_ids = {{
  1,
  2,
  4,
  6,
}};
THRIFT_DATA_MEMBER const std::array<protocol::TType, 4> TStructDataStorage<::test::fixtures::enums::MyStruct>::fields_types = {{
  TType::T_I32,
  TType::T_I32,
  TType::T_I32,
  TType::T_I32,
}};
THRIFT_DATA_MEMBER const std::array<std::string_view, 4> TStructDataStorage<::test::fixtures::enums::MyStruct>::storage_names = {{
  "__fbthrift_field_me2_3"sv,
  "__fbthrift_field_me3_n3"sv,
  "__fbthrift_field_me1_t1"sv,
  "__fbthrift_field_me1_t2"sv,
}};
THRIFT_DATA_MEMBER const std::array<int, 4> TStructDataStorage<::test::fixtures::enums::MyStruct>::isset_indexes = {{
  0,
  1,
  2,
  3,
}};

} // namespace thrift
} // namespace apache
