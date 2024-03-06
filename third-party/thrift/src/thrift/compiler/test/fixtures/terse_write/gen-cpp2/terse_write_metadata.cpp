/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/terse_write/src/terse_write.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#include <thrift/lib/cpp2/gen/module_metadata_cpp.h>
#include "thrift/compiler/test/fixtures/terse_write/gen-cpp2/terse_write_metadata.h"

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

void EnumMetadata<::facebook::thrift::test::terse_write::MyEnum>::gen(ThriftMetadata& metadata) {
  auto res = metadata.enums()->emplace("terse_write.MyEnum", ::apache::thrift::metadata::ThriftEnum{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftEnum& enum_metadata = res.first->second;
  enum_metadata.name() = "terse_write.MyEnum";
  using EnumTraits = TEnumTraits<::facebook::thrift::test::terse_write::MyEnum>;
  for (std::size_t i = 0; i != EnumTraits::size; ++i) {
    enum_metadata.elements()->emplace(static_cast<int32_t>(EnumTraits::values[i]), EnumTraits::names[i]);
  }
}

const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::facebook::thrift::test::terse_write::MyStruct>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs()->emplace("terse_write.MyStruct", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& terse_write_MyStruct = res.first->second;
  terse_write_MyStruct.name() = "terse_write.MyStruct";
  terse_write_MyStruct.is_union() = false;
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::facebook::thrift::test::terse_write::MyUnion>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs()->emplace("terse_write.MyUnion", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& terse_write_MyUnion = res.first->second;
  terse_write_MyUnion.name() = "terse_write.MyUnion";
  terse_write_MyUnion.is_union() = true;
  static const auto* const
  terse_write_MyUnion_fields = new std::array<EncodedThriftField, 14>{{
    {1, "bool_field", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_BOOL_TYPE), std::vector<ThriftConstStruct>{}},
    {2, "byte_field", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_BYTE_TYPE), std::vector<ThriftConstStruct>{}},
    {3, "short_field", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I16_TYPE), std::vector<ThriftConstStruct>{}},
    {4, "int_field", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE), std::vector<ThriftConstStruct>{}},
    {5, "long_field", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I64_TYPE), std::vector<ThriftConstStruct>{}},
    {6, "float_field", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_FLOAT_TYPE), std::vector<ThriftConstStruct>{}},
    {7, "double_field", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_DOUBLE_TYPE), std::vector<ThriftConstStruct>{}},
    {8, "string_field", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::vector<ThriftConstStruct>{}},
    {9, "binary_field", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_BINARY_TYPE), std::vector<ThriftConstStruct>{}},
    {10, "enum_field", false, std::make_unique<Enum<::facebook::thrift::test::terse_write::MyEnum>>("terse_write.MyEnum"), std::vector<ThriftConstStruct>{}},
    {11, "list_field", false, std::make_unique<List>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I16_TYPE)), std::vector<ThriftConstStruct>{}},
    {12, "set_field", false, std::make_unique<Set>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I16_TYPE)), std::vector<ThriftConstStruct>{}},
    {13, "map_field", false, std::make_unique<Map>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I16_TYPE), std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I16_TYPE)), std::vector<ThriftConstStruct>{}},
    {14, "struct_field", false, std::make_unique<Struct<::facebook::thrift::test::terse_write::MyStruct>>("terse_write.MyStruct"), std::vector<ThriftConstStruct>{}},
  }};
  for (const auto& f : *terse_write_MyUnion_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id() = f.id;
    field.name() = f.name;
    field.is_optional() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type(), metadata);
    field.structured_annotations() = f.structured_annotations;
    terse_write_MyUnion.fields()->push_back(std::move(field));
  }
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::facebook::thrift::test::terse_write::MyStructWithCustomDefault>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs()->emplace("terse_write.MyStructWithCustomDefault", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& terse_write_MyStructWithCustomDefault = res.first->second;
  terse_write_MyStructWithCustomDefault.name() = "terse_write.MyStructWithCustomDefault";
  terse_write_MyStructWithCustomDefault.is_union() = false;
  static const auto* const
  terse_write_MyStructWithCustomDefault_fields = new std::array<EncodedThriftField, 1>{{
    {1, "field1", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I64_TYPE), std::vector<ThriftConstStruct>{}},
  }};
  for (const auto& f : *terse_write_MyStructWithCustomDefault_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id() = f.id;
    field.name() = f.name;
    field.is_optional() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type(), metadata);
    field.structured_annotations() = f.structured_annotations;
    terse_write_MyStructWithCustomDefault.fields()->push_back(std::move(field));
  }
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::facebook::thrift::test::terse_write::StructLevelTerseStruct>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs()->emplace("terse_write.StructLevelTerseStruct", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& terse_write_StructLevelTerseStruct = res.first->second;
  terse_write_StructLevelTerseStruct.name() = "terse_write.StructLevelTerseStruct";
  terse_write_StructLevelTerseStruct.is_union() = false;
  static const auto* const
  terse_write_StructLevelTerseStruct_fields = new std::array<EncodedThriftField, 15>{{
    {1, "bool_field", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_BOOL_TYPE), std::vector<ThriftConstStruct>{}},
    {2, "byte_field", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_BYTE_TYPE), std::vector<ThriftConstStruct>{}},
    {3, "short_field", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I16_TYPE), std::vector<ThriftConstStruct>{}},
    {4, "int_field", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE), std::vector<ThriftConstStruct>{}},
    {5, "long_field", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I64_TYPE), std::vector<ThriftConstStruct>{}},
    {6, "float_field", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_FLOAT_TYPE), std::vector<ThriftConstStruct>{}},
    {7, "double_field", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_DOUBLE_TYPE), std::vector<ThriftConstStruct>{}},
    {8, "string_field", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::vector<ThriftConstStruct>{}},
    {9, "binary_field", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_BINARY_TYPE), std::vector<ThriftConstStruct>{}},
    {10, "enum_field", false, std::make_unique<Enum<::facebook::thrift::test::terse_write::MyEnum>>("terse_write.MyEnum"), std::vector<ThriftConstStruct>{}},
    {11, "list_field", false, std::make_unique<List>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I16_TYPE)), std::vector<ThriftConstStruct>{}},
    {12, "set_field", false, std::make_unique<Set>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I16_TYPE)), std::vector<ThriftConstStruct>{}},
    {13, "map_field", false, std::make_unique<Map>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I16_TYPE), std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I16_TYPE)), std::vector<ThriftConstStruct>{}},
    {14, "struct_field", false, std::make_unique<Struct<::facebook::thrift::test::terse_write::MyStruct>>("terse_write.MyStruct"), std::vector<ThriftConstStruct>{}},
    {15, "union_field", false, std::make_unique<Union<::facebook::thrift::test::terse_write::MyUnion>>("terse_write.MyUnion"), std::vector<ThriftConstStruct>{}},
  }};
  for (const auto& f : *terse_write_StructLevelTerseStruct_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id() = f.id;
    field.name() = f.name;
    field.is_optional() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type(), metadata);
    field.structured_annotations() = f.structured_annotations;
    terse_write_StructLevelTerseStruct.fields()->push_back(std::move(field));
  }
  terse_write_StructLevelTerseStruct.structured_annotations()->push_back(*cvStruct("thrift.TerseWrite", {}).cv_struct_ref());
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::facebook::thrift::test::terse_write::FieldLevelTerseStruct>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs()->emplace("terse_write.FieldLevelTerseStruct", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& terse_write_FieldLevelTerseStruct = res.first->second;
  terse_write_FieldLevelTerseStruct.name() = "terse_write.FieldLevelTerseStruct";
  terse_write_FieldLevelTerseStruct.is_union() = false;
  static const auto* const
  terse_write_FieldLevelTerseStruct_fields = new std::array<EncodedThriftField, 30>{{
    {1, "terse_bool_field", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_BOOL_TYPE), std::vector<ThriftConstStruct>{*cvStruct("thrift.TerseWrite", {}).cv_struct_ref(), }},
    {2, "terse_byte_field", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_BYTE_TYPE), std::vector<ThriftConstStruct>{*cvStruct("thrift.TerseWrite", {}).cv_struct_ref(), }},
    {3, "terse_short_field", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I16_TYPE), std::vector<ThriftConstStruct>{*cvStruct("thrift.TerseWrite", {}).cv_struct_ref(), }},
    {4, "terse_int_field", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE), std::vector<ThriftConstStruct>{*cvStruct("thrift.TerseWrite", {}).cv_struct_ref(), }},
    {5, "terse_long_field", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I64_TYPE), std::vector<ThriftConstStruct>{*cvStruct("thrift.TerseWrite", {}).cv_struct_ref(), }},
    {6, "terse_float_field", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_FLOAT_TYPE), std::vector<ThriftConstStruct>{*cvStruct("thrift.TerseWrite", {}).cv_struct_ref(), }},
    {7, "terse_double_field", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_DOUBLE_TYPE), std::vector<ThriftConstStruct>{*cvStruct("thrift.TerseWrite", {}).cv_struct_ref(), }},
    {8, "terse_string_field", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::vector<ThriftConstStruct>{*cvStruct("thrift.TerseWrite", {}).cv_struct_ref(), }},
    {9, "terse_binary_field", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_BINARY_TYPE), std::vector<ThriftConstStruct>{*cvStruct("thrift.TerseWrite", {}).cv_struct_ref(), }},
    {10, "terse_enum_field", false, std::make_unique<Enum<::facebook::thrift::test::terse_write::MyEnum>>("terse_write.MyEnum"), std::vector<ThriftConstStruct>{*cvStruct("thrift.TerseWrite", {}).cv_struct_ref(), }},
    {11, "terse_list_field", false, std::make_unique<List>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I16_TYPE)), std::vector<ThriftConstStruct>{*cvStruct("thrift.TerseWrite", {}).cv_struct_ref(), }},
    {12, "terse_set_field", false, std::make_unique<Set>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I16_TYPE)), std::vector<ThriftConstStruct>{*cvStruct("thrift.TerseWrite", {}).cv_struct_ref(), }},
    {13, "terse_map_field", false, std::make_unique<Map>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I16_TYPE), std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I16_TYPE)), std::vector<ThriftConstStruct>{*cvStruct("thrift.TerseWrite", {}).cv_struct_ref(), }},
    {14, "terse_struct_field", false, std::make_unique<Struct<::facebook::thrift::test::terse_write::MyStruct>>("terse_write.MyStruct"), std::vector<ThriftConstStruct>{*cvStruct("thrift.TerseWrite", {}).cv_struct_ref(), }},
    {29, "terse_union_field", false, std::make_unique<Union<::facebook::thrift::test::terse_write::MyUnion>>("terse_write.MyUnion"), std::vector<ThriftConstStruct>{*cvStruct("thrift.TerseWrite", {}).cv_struct_ref(), }},
    {15, "bool_field", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_BOOL_TYPE), std::vector<ThriftConstStruct>{}},
    {16, "byte_field", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_BYTE_TYPE), std::vector<ThriftConstStruct>{}},
    {17, "short_field", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I16_TYPE), std::vector<ThriftConstStruct>{}},
    {18, "int_field", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE), std::vector<ThriftConstStruct>{}},
    {19, "long_field", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I64_TYPE), std::vector<ThriftConstStruct>{}},
    {20, "float_field", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_FLOAT_TYPE), std::vector<ThriftConstStruct>{}},
    {21, "double_field", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_DOUBLE_TYPE), std::vector<ThriftConstStruct>{}},
    {22, "string_field", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::vector<ThriftConstStruct>{}},
    {23, "binary_field", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_BINARY_TYPE), std::vector<ThriftConstStruct>{}},
    {24, "enum_field", false, std::make_unique<Enum<::facebook::thrift::test::terse_write::MyEnum>>("terse_write.MyEnum"), std::vector<ThriftConstStruct>{}},
    {25, "list_field", false, std::make_unique<List>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I16_TYPE)), std::vector<ThriftConstStruct>{}},
    {26, "set_field", false, std::make_unique<Set>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I16_TYPE)), std::vector<ThriftConstStruct>{}},
    {27, "map_field", false, std::make_unique<Map>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I16_TYPE), std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I16_TYPE)), std::vector<ThriftConstStruct>{}},
    {28, "struct_field", false, std::make_unique<Struct<::facebook::thrift::test::terse_write::MyStruct>>("terse_write.MyStruct"), std::vector<ThriftConstStruct>{}},
    {30, "union_field", false, std::make_unique<Union<::facebook::thrift::test::terse_write::MyUnion>>("terse_write.MyUnion"), std::vector<ThriftConstStruct>{}},
  }};
  for (const auto& f : *terse_write_FieldLevelTerseStruct_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id() = f.id;
    field.name() = f.name;
    field.is_optional() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type(), metadata);
    field.structured_annotations() = f.structured_annotations;
    terse_write_FieldLevelTerseStruct.fields()->push_back(std::move(field));
  }
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::facebook::thrift::test::terse_write::TerseStructWithCustomDefault>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs()->emplace("terse_write.TerseStructWithCustomDefault", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& terse_write_TerseStructWithCustomDefault = res.first->second;
  terse_write_TerseStructWithCustomDefault.name() = "terse_write.TerseStructWithCustomDefault";
  terse_write_TerseStructWithCustomDefault.is_union() = false;
  static const auto* const
  terse_write_TerseStructWithCustomDefault_fields = new std::array<EncodedThriftField, 14>{{
    {1, "bool_field", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_BOOL_TYPE), std::vector<ThriftConstStruct>{}},
    {2, "byte_field", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_BYTE_TYPE), std::vector<ThriftConstStruct>{}},
    {3, "short_field", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I16_TYPE), std::vector<ThriftConstStruct>{}},
    {4, "int_field", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE), std::vector<ThriftConstStruct>{}},
    {5, "long_field", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I64_TYPE), std::vector<ThriftConstStruct>{}},
    {6, "float_field", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_FLOAT_TYPE), std::vector<ThriftConstStruct>{}},
    {7, "double_field", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_DOUBLE_TYPE), std::vector<ThriftConstStruct>{}},
    {8, "string_field", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::vector<ThriftConstStruct>{}},
    {9, "binary_field", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_BINARY_TYPE), std::vector<ThriftConstStruct>{}},
    {10, "enum_field", false, std::make_unique<Enum<::facebook::thrift::test::terse_write::MyEnum>>("terse_write.MyEnum"), std::vector<ThriftConstStruct>{}},
    {11, "list_field", false, std::make_unique<List>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I16_TYPE)), std::vector<ThriftConstStruct>{}},
    {12, "set_field", false, std::make_unique<Set>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I16_TYPE)), std::vector<ThriftConstStruct>{}},
    {13, "map_field", false, std::make_unique<Map>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I16_TYPE), std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I16_TYPE)), std::vector<ThriftConstStruct>{}},
    {14, "struct_field", false, std::make_unique<Struct<::facebook::thrift::test::terse_write::MyStructWithCustomDefault>>("terse_write.MyStructWithCustomDefault"), std::vector<ThriftConstStruct>{}},
  }};
  for (const auto& f : *terse_write_TerseStructWithCustomDefault_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id() = f.id;
    field.name() = f.name;
    field.is_optional() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type(), metadata);
    field.structured_annotations() = f.structured_annotations;
    terse_write_TerseStructWithCustomDefault.fields()->push_back(std::move(field));
  }
  terse_write_TerseStructWithCustomDefault.structured_annotations()->push_back(*cvStruct("thrift.TerseWrite", {}).cv_struct_ref());
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::facebook::thrift::test::terse_write::AdaptedFields>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs()->emplace("terse_write.AdaptedFields", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& terse_write_AdaptedFields = res.first->second;
  terse_write_AdaptedFields.name() = "terse_write.AdaptedFields";
  terse_write_AdaptedFields.is_union() = false;
  static const auto* const
  terse_write_AdaptedFields_fields = new std::array<EncodedThriftField, 3>{{
    {1, "field1", false, std::make_unique<Typedef>("terse_write.MyInteger", std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE), std::vector<ThriftConstStruct>{*cvStruct("hack.Adapter", {{"name", cvString("\\Adapter1")}}).cv_struct_ref(), *cvStruct("cpp.Adapter", {{"name", cvString("::my::Adapter")}}).cv_struct_ref(), }), std::vector<ThriftConstStruct>{}},
    {2, "field2", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE), std::vector<ThriftConstStruct>{*cvStruct("hack.Adapter", {{"name", cvString("\\Adapter1")}}).cv_struct_ref(), *cvStruct("cpp.Adapter", {{"name", cvString("::my::Adapter")}}).cv_struct_ref(), }},
    {3, "field3", false, std::make_unique<Typedef>("terse_write.MyInteger", std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE), std::vector<ThriftConstStruct>{*cvStruct("hack.Adapter", {{"name", cvString("\\Adapter1")}}).cv_struct_ref(), *cvStruct("cpp.Adapter", {{"name", cvString("::my::Adapter")}}).cv_struct_ref(), }), std::vector<ThriftConstStruct>{*cvStruct("cpp.Adapter", {{"name", cvString("::my::Adapter")}}).cv_struct_ref(), }},
  }};
  for (const auto& f : *terse_write_AdaptedFields_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id() = f.id;
    field.name() = f.name;
    field.is_optional() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type(), metadata);
    field.structured_annotations() = f.structured_annotations;
    terse_write_AdaptedFields.fields()->push_back(std::move(field));
  }
  terse_write_AdaptedFields.structured_annotations()->push_back(*cvStruct("thrift.TerseWrite", {}).cv_struct_ref());
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::facebook::thrift::test::terse_write::WrappedFields>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs()->emplace("terse_write.WrappedFields", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& terse_write_WrappedFields = res.first->second;
  terse_write_WrappedFields.name() = "terse_write.WrappedFields";
  terse_write_WrappedFields.is_union() = false;
  static const auto* const
  terse_write_WrappedFields_fields = new std::array<EncodedThriftField, 1>{{
    {1, "field1", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE), std::vector<ThriftConstStruct>{*cvStruct("hack.FieldWrapper", {{"name", cvString("\\MyFieldWrapper")}}).cv_struct_ref(), }},
  }};
  for (const auto& f : *terse_write_WrappedFields_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id() = f.id;
    field.name() = f.name;
    field.is_optional() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type(), metadata);
    field.structured_annotations() = f.structured_annotations;
    terse_write_WrappedFields.fields()->push_back(std::move(field));
  }
  terse_write_WrappedFields.structured_annotations()->push_back(*cvStruct("thrift.TerseWrite", {}).cv_struct_ref());
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::facebook::thrift::test::terse_write::TerseException>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs()->emplace("terse_write.TerseException", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& terse_write_TerseException = res.first->second;
  terse_write_TerseException.name() = "terse_write.TerseException";
  terse_write_TerseException.is_union() = false;
  static const auto* const
  terse_write_TerseException_fields = new std::array<EncodedThriftField, 1>{{
    {1, "msg", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::vector<ThriftConstStruct>{}},
  }};
  for (const auto& f : *terse_write_TerseException_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id() = f.id;
    field.name() = f.name;
    field.is_optional() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type(), metadata);
    field.structured_annotations() = f.structured_annotations;
    terse_write_TerseException.fields()->push_back(std::move(field));
  }
  terse_write_TerseException.structured_annotations()->push_back(*cvStruct("thrift.TerseWrite", {}).cv_struct_ref());
  return res.first->second;
}

void ExceptionMetadata<::facebook::thrift::test::terse_write::TerseException>::gen(ThriftMetadata& metadata) {
  auto res = metadata.exceptions()->emplace("terse_write.TerseException", ::apache::thrift::metadata::ThriftException{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftException& terse_write_TerseException = res.first->second;
  terse_write_TerseException.name() = "terse_write.TerseException";
  static const auto* const
  terse_write_TerseException_fields = new std::array<EncodedThriftField, 1>{{
    {1, "msg", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::vector<ThriftConstStruct>{}},
  }};
  for (const auto& f : *terse_write_TerseException_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id() = f.id;
    field.name() = f.name;
    field.is_optional() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type(), metadata);
    terse_write_TerseException.fields()->push_back(std::move(field));
  }
  terse_write_TerseException.structured_annotations()->push_back(*cvStruct("thrift.TerseWrite", {}).cv_struct_ref());
}
} // namespace md
} // namespace detail
} // namespace thrift
} // namespace apache
