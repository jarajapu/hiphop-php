/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/inject_metadata_fields/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#include <thrift/lib/cpp2/gen/module_metadata_cpp.h>
#include "thrift/compiler/test/fixtures/inject_metadata_fields/gen-cpp2/module_metadata.h"

// some of these functions can be so large that the compiler gives up optimizing
// them - and issues a warning which may be treated as an error!
//
// these functions are so rarely called that it is probably okay for them not to
// be optimized in practice
FOLLY_CLANG_DISABLE_WARNING("-Wignored-optimization-argument")

namespace apache {
namespace thrift {
namespace detail {
namespace md {
using ThriftMetadata = ::apache::thrift::metadata::ThriftMetadata;
using ThriftPrimitiveType = ::apache::thrift::metadata::ThriftPrimitiveType;
using ThriftType = ::apache::thrift::metadata::ThriftType;
using ThriftService = ::apache::thrift::metadata::ThriftService;
using ThriftServiceContext = ::apache::thrift::metadata::ThriftServiceContext;
using ThriftFunctionGenerator = void (*)(ThriftMetadata&, ThriftService&);


const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::cpp2::Fields>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs()->emplace("module.Fields", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_Fields = res.first->second;
  module_Fields.name() = "module.Fields";
  module_Fields.is_union() = false;
  static const auto* const
  module_Fields_fields = new std::array<EncodedThriftField, 1>{{
    {100, "injected_field", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::vector<ThriftConstStruct>{}},
  }};
  for (const auto& f : *module_Fields_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id() = f.id;
    field.name() = f.name;
    field.is_optional() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type(), metadata);
    field.structured_annotations() = f.structured_annotations;
    module_Fields.fields()->push_back(std::move(field));
  }
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::cpp2::FieldsInjectedToEmptyStruct>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs()->emplace("module.FieldsInjectedToEmptyStruct", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_FieldsInjectedToEmptyStruct = res.first->second;
  module_FieldsInjectedToEmptyStruct.name() = "module.FieldsInjectedToEmptyStruct";
  module_FieldsInjectedToEmptyStruct.is_union() = false;
  static const auto* const
  module_FieldsInjectedToEmptyStruct_fields = new std::array<EncodedThriftField, 1>{{
    {-1100, "injected_field", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::vector<ThriftConstStruct>{}},
  }};
  for (const auto& f : *module_FieldsInjectedToEmptyStruct_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id() = f.id;
    field.name() = f.name;
    field.is_optional() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type(), metadata);
    field.structured_annotations() = f.structured_annotations;
    module_FieldsInjectedToEmptyStruct.fields()->push_back(std::move(field));
  }
  module_FieldsInjectedToEmptyStruct.structured_annotations()->push_back(*cvStruct("internal.InjectMetadataFields", {{"type", cvString("Fields")}}).cv_struct_ref());
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::cpp2::FieldsInjectedToStruct>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs()->emplace("module.FieldsInjectedToStruct", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_FieldsInjectedToStruct = res.first->second;
  module_FieldsInjectedToStruct.name() = "module.FieldsInjectedToStruct";
  module_FieldsInjectedToStruct.is_union() = false;
  static const auto* const
  module_FieldsInjectedToStruct_fields = new std::array<EncodedThriftField, 2>{{
    {1, "string_field", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::vector<ThriftConstStruct>{}},
    {-1100, "injected_field", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::vector<ThriftConstStruct>{}},
  }};
  for (const auto& f : *module_FieldsInjectedToStruct_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id() = f.id;
    field.name() = f.name;
    field.is_optional() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type(), metadata);
    field.structured_annotations() = f.structured_annotations;
    module_FieldsInjectedToStruct.fields()->push_back(std::move(field));
  }
  module_FieldsInjectedToStruct.structured_annotations()->push_back(*cvStruct("internal.InjectMetadataFields", {{"type", cvString("Fields")}}).cv_struct_ref());
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::cpp2::FieldsInjectedWithIncludedStruct>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs()->emplace("module.FieldsInjectedWithIncludedStruct", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_FieldsInjectedWithIncludedStruct = res.first->second;
  module_FieldsInjectedWithIncludedStruct.name() = "module.FieldsInjectedWithIncludedStruct";
  module_FieldsInjectedWithIncludedStruct.is_union() = false;
  static const auto* const
  module_FieldsInjectedWithIncludedStruct_fields = new std::array<EncodedThriftField, 4>{{
    {1, "string_field", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::vector<ThriftConstStruct>{}},
    {-1100, "injected_field", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::vector<ThriftConstStruct>{}},
    {-1101, "injected_structured_annotation_field", true, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::vector<ThriftConstStruct>{*cvStruct("thrift.Box", {}).cv_struct_ref(), }},
    {-1102, "injected_unstructured_annotation_field", true, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::vector<ThriftConstStruct>{*cvStruct("thrift.Box", {}).cv_struct_ref(), }},
  }};
  for (const auto& f : *module_FieldsInjectedWithIncludedStruct_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id() = f.id;
    field.name() = f.name;
    field.is_optional() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type(), metadata);
    field.structured_annotations() = f.structured_annotations;
    module_FieldsInjectedWithIncludedStruct.fields()->push_back(std::move(field));
  }
  module_FieldsInjectedWithIncludedStruct.structured_annotations()->push_back(*cvStruct("internal.InjectMetadataFields", {{"type", cvString("foo.Fields")}}).cv_struct_ref());
  return res.first->second;
}

} // namespace md
} // namespace detail
} // namespace thrift
} // namespace apache
