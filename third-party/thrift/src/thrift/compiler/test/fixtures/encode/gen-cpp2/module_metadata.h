/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/encode/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <vector>

#include <thrift/lib/cpp2/gen/module_metadata_h.h>
#include "thrift/compiler/test/fixtures/encode/gen-cpp2/module_types.h"
#include "thrift/annotation/gen-cpp2/cpp_metadata.h"
#include "thrift/annotation/gen-cpp2/thrift_metadata.h"


namespace apache {
namespace thrift {
namespace detail {
namespace md {

template <>
class EnumMetadata<::facebook::thrift::test::Enum> {
 public:
  static void gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::facebook::thrift::test::Foo> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::facebook::thrift::test::Bar> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::facebook::thrift::test::Baz> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::facebook::thrift::test::OpEncodeStruct> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
} // namespace md
} // namespace detail
} // namespace thrift
} // namespace apache
