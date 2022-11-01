/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#pragma once

#include <functional>
#include <folly/Range.h>

#include <thrift/lib/py3/enums.h>
#include "thrift/compiler/test/fixtures/adapter/src/gen-cpp2/module_data.h"
#include "thrift/compiler/test/fixtures/adapter/src/gen-cpp2/module_types.h"
#include "thrift/compiler/test/fixtures/adapter/src/gen-cpp2/module_metadata.h"
namespace thrift {
namespace py3 {


template<>
const std::vector<std::pair<std::string_view, std::string_view>>& PyEnumTraits<
    ::facebook::thrift::test::ThriftAdaptedEnum>::namesmap() {
  static const folly::Indestructible<NamesMap> pairs {
    {
    }
  };
  return *pairs;
}


template<>
const std::vector<std::pair<std::string_view, std::string_view>>& PyEnumTraits<
    ::facebook::thrift::test::Baz::Type>::namesmap() {
  static const folly::Indestructible<NamesMap> pairs {
    {
    }
  };
  return *pairs;
}

template<>
const std::vector<std::pair<std::string_view, std::string_view>>& PyEnumTraits<
    ::facebook::thrift::test::AdaptTestUnion::Type>::namesmap() {
  static const folly::Indestructible<NamesMap> pairs {
    {
    }
  };
  return *pairs;
}


template<>
void reset_field<::facebook::thrift::test::MyAnnotation>(
    ::facebook::thrift::test::MyAnnotation& obj, uint16_t index) {
  switch (index) {
    case 0:
      obj.signature_ref().copy_from(default_inst<::facebook::thrift::test::MyAnnotation>().signature_ref());
      return;
  }
}

template<>
void reset_field<::facebook::thrift::test::Foo>(
    ::facebook::thrift::test::Foo& obj, uint16_t index) {
  switch (index) {
    case 0:
      obj.intField_ref().copy_from(default_inst<::facebook::thrift::test::Foo>().intField_ref());
      return;
    case 1:
      obj.optionalIntField_ref().copy_from(default_inst<::facebook::thrift::test::Foo>().optionalIntField_ref());
      return;
    case 2:
      obj.intFieldWithDefault_ref().copy_from(default_inst<::facebook::thrift::test::Foo>().intFieldWithDefault_ref());
      return;
    case 3:
      obj.setField_ref().copy_from(default_inst<::facebook::thrift::test::Foo>().setField_ref());
      return;
    case 4:
      obj.optionalSetField_ref().copy_from(default_inst<::facebook::thrift::test::Foo>().optionalSetField_ref());
      return;
    case 5:
      obj.mapField_ref().copy_from(default_inst<::facebook::thrift::test::Foo>().mapField_ref());
      return;
    case 6:
      obj.optionalMapField_ref().copy_from(default_inst<::facebook::thrift::test::Foo>().optionalMapField_ref());
      return;
    case 7:
      obj.binaryField_ref().copy_from(default_inst<::facebook::thrift::test::Foo>().binaryField_ref());
      return;
    case 8:
      obj.longField_ref().copy_from(default_inst<::facebook::thrift::test::Foo>().longField_ref());
      return;
    case 9:
      obj.adaptedLongField_ref().copy_from(default_inst<::facebook::thrift::test::Foo>().adaptedLongField_ref());
      return;
    case 10:
      obj.doubleAdaptedField_ref().copy_from(default_inst<::facebook::thrift::test::Foo>().doubleAdaptedField_ref());
      return;
  }
}

template<>
void reset_field<::facebook::thrift::test::Bar>(
    ::facebook::thrift::test::Bar& obj, uint16_t index) {
  switch (index) {
    case 0:
      obj.structField_ref().copy_from(default_inst<::facebook::thrift::test::Bar>().structField_ref());
      return;
    case 1:
      obj.optionalStructField_ref().copy_from(default_inst<::facebook::thrift::test::Bar>().optionalStructField_ref());
      return;
    case 2:
      obj.structListField_ref().copy_from(default_inst<::facebook::thrift::test::Bar>().structListField_ref());
      return;
    case 3:
      obj.optionalStructListField_ref().copy_from(default_inst<::facebook::thrift::test::Bar>().optionalStructListField_ref());
      return;
    case 4:
      obj.unionField_ref().copy_from(default_inst<::facebook::thrift::test::Bar>().unionField_ref());
      return;
    case 5:
      obj.optionalUnionField_ref().copy_from(default_inst<::facebook::thrift::test::Bar>().optionalUnionField_ref());
      return;
    case 6:
      obj.adaptedStructField_ref().copy_from(default_inst<::facebook::thrift::test::Bar>().adaptedStructField_ref());
      return;
  }
}

template<>
void reset_field<::facebook::thrift::test::StructWithFieldAdapter>(
    ::facebook::thrift::test::StructWithFieldAdapter& obj, uint16_t index) {
  switch (index) {
    case 0:
      obj.field_ref().copy_from(default_inst<::facebook::thrift::test::StructWithFieldAdapter>().field_ref());
      return;
    case 1:
      obj.shared_field_ref().reset();
      return;
    case 2:
      obj.opt_shared_field_ref().reset();
      return;
    case 3:
      obj.opt_boxed_field_ref().copy_from(default_inst<::facebook::thrift::test::StructWithFieldAdapter>().opt_boxed_field_ref());
      return;
    case 4:
      obj.boxed_field_ref().copy_from(default_inst<::facebook::thrift::test::StructWithFieldAdapter>().boxed_field_ref());
      return;
  }
}

template<>
void reset_field<::facebook::thrift::test::TerseAdaptedFields>(
    ::facebook::thrift::test::TerseAdaptedFields& obj, uint16_t index) {
  switch (index) {
    case 0:
      obj.int_field_ref().copy_from(default_inst<::facebook::thrift::test::TerseAdaptedFields>().int_field_ref());
      return;
    case 1:
      obj.string_field_ref().copy_from(default_inst<::facebook::thrift::test::TerseAdaptedFields>().string_field_ref());
      return;
    case 2:
      obj.set_field_ref().copy_from(default_inst<::facebook::thrift::test::TerseAdaptedFields>().set_field_ref());
      return;
  }
}

template<>
void reset_field<::facebook::thrift::test::B>(
    ::facebook::thrift::test::B& obj, uint16_t index) {
  switch (index) {
    case 0:
      obj.a_ref().copy_from(default_inst<::facebook::thrift::test::B>().a_ref());
      return;
  }
}

template<>
void reset_field<::facebook::thrift::test::A>(
    ::facebook::thrift::test::A& obj, uint16_t index) {
  switch (index) {
  }
}

template<>
void reset_field<::facebook::thrift::test::Config>(
    ::facebook::thrift::test::Config& obj, uint16_t index) {
  switch (index) {
    case 0:
      obj.path_ref().copy_from(default_inst<::facebook::thrift::test::Config>().path_ref());
      return;
  }
}

template<>
void reset_field<::facebook::thrift::test::MyStruct>(
    ::facebook::thrift::test::MyStruct& obj, uint16_t index) {
  switch (index) {
    case 0:
      obj.field_ref().copy_from(default_inst<::facebook::thrift::test::MyStruct>().field_ref());
      return;
    case 1:
      obj.set_string_ref().copy_from(default_inst<::facebook::thrift::test::MyStruct>().set_string_ref());
      return;
  }
}

template<>
void reset_field<::facebook::thrift::test::AdaptTestStruct>(
    ::facebook::thrift::test::AdaptTestStruct& obj, uint16_t index) {
  switch (index) {
    case 0:
      obj.delay_ref().copy_from(default_inst<::facebook::thrift::test::AdaptTestStruct>().delay_ref());
      return;
    case 1:
      obj.custom_ref().copy_from(default_inst<::facebook::thrift::test::AdaptTestStruct>().custom_ref());
      return;
    case 2:
      obj.timeout_ref().copy_from(default_inst<::facebook::thrift::test::AdaptTestStruct>().timeout_ref());
      return;
    case 3:
      obj.data_ref().copy_from(default_inst<::facebook::thrift::test::AdaptTestStruct>().data_ref());
      return;
    case 4:
      obj.meta_ref().copy_from(default_inst<::facebook::thrift::test::AdaptTestStruct>().meta_ref());
      return;
    case 5:
      obj.indirectionString_ref().copy_from(default_inst<::facebook::thrift::test::AdaptTestStruct>().indirectionString_ref());
      return;
    case 6:
      obj.string_data_ref().copy_from(default_inst<::facebook::thrift::test::AdaptTestStruct>().string_data_ref());
      return;
    case 7:
      obj.double_wrapped_bool_ref().copy_from(default_inst<::facebook::thrift::test::AdaptTestStruct>().double_wrapped_bool_ref());
      return;
    case 8:
      obj.double_wrapped_integer_ref().copy_from(default_inst<::facebook::thrift::test::AdaptTestStruct>().double_wrapped_integer_ref());
      return;
    case 9:
      obj.binary_data_ref().copy_from(default_inst<::facebook::thrift::test::AdaptTestStruct>().binary_data_ref());
      return;
  }
}

template<>
void reset_field<::facebook::thrift::test::AdaptTemplatedTestStruct>(
    ::facebook::thrift::test::AdaptTemplatedTestStruct& obj, uint16_t index) {
  switch (index) {
    case 0:
      obj.adaptedBool_ref().copy_from(default_inst<::facebook::thrift::test::AdaptTemplatedTestStruct>().adaptedBool_ref());
      return;
    case 1:
      obj.adaptedByte_ref().copy_from(default_inst<::facebook::thrift::test::AdaptTemplatedTestStruct>().adaptedByte_ref());
      return;
    case 2:
      obj.adaptedShort_ref().copy_from(default_inst<::facebook::thrift::test::AdaptTemplatedTestStruct>().adaptedShort_ref());
      return;
    case 3:
      obj.adaptedInteger_ref().copy_from(default_inst<::facebook::thrift::test::AdaptTemplatedTestStruct>().adaptedInteger_ref());
      return;
    case 4:
      obj.adaptedLong_ref().copy_from(default_inst<::facebook::thrift::test::AdaptTemplatedTestStruct>().adaptedLong_ref());
      return;
    case 5:
      obj.adaptedDouble_ref().copy_from(default_inst<::facebook::thrift::test::AdaptTemplatedTestStruct>().adaptedDouble_ref());
      return;
    case 6:
      obj.adaptedString_ref().copy_from(default_inst<::facebook::thrift::test::AdaptTemplatedTestStruct>().adaptedString_ref());
      return;
    case 7:
      obj.adaptedList_ref().copy_from(default_inst<::facebook::thrift::test::AdaptTemplatedTestStruct>().adaptedList_ref());
      return;
    case 8:
      obj.adaptedSet_ref().copy_from(default_inst<::facebook::thrift::test::AdaptTemplatedTestStruct>().adaptedSet_ref());
      return;
    case 9:
      obj.adaptedMap_ref().copy_from(default_inst<::facebook::thrift::test::AdaptTemplatedTestStruct>().adaptedMap_ref());
      return;
    case 10:
      obj.adaptedBoolDefault_ref().copy_from(default_inst<::facebook::thrift::test::AdaptTemplatedTestStruct>().adaptedBoolDefault_ref());
      return;
    case 11:
      obj.adaptedByteDefault_ref().copy_from(default_inst<::facebook::thrift::test::AdaptTemplatedTestStruct>().adaptedByteDefault_ref());
      return;
    case 12:
      obj.adaptedShortDefault_ref().copy_from(default_inst<::facebook::thrift::test::AdaptTemplatedTestStruct>().adaptedShortDefault_ref());
      return;
    case 13:
      obj.adaptedIntegerDefault_ref().copy_from(default_inst<::facebook::thrift::test::AdaptTemplatedTestStruct>().adaptedIntegerDefault_ref());
      return;
    case 14:
      obj.adaptedLongDefault_ref().copy_from(default_inst<::facebook::thrift::test::AdaptTemplatedTestStruct>().adaptedLongDefault_ref());
      return;
    case 15:
      obj.adaptedDoubleDefault_ref().copy_from(default_inst<::facebook::thrift::test::AdaptTemplatedTestStruct>().adaptedDoubleDefault_ref());
      return;
    case 16:
      obj.adaptedStringDefault_ref().copy_from(default_inst<::facebook::thrift::test::AdaptTemplatedTestStruct>().adaptedStringDefault_ref());
      return;
    case 17:
      obj.adaptedEnum_ref().copy_from(default_inst<::facebook::thrift::test::AdaptTemplatedTestStruct>().adaptedEnum_ref());
      return;
    case 18:
      obj.adaptedListDefault_ref().copy_from(default_inst<::facebook::thrift::test::AdaptTemplatedTestStruct>().adaptedListDefault_ref());
      return;
    case 19:
      obj.adaptedSetDefault_ref().copy_from(default_inst<::facebook::thrift::test::AdaptTemplatedTestStruct>().adaptedSetDefault_ref());
      return;
    case 20:
      obj.adaptedMapDefault_ref().copy_from(default_inst<::facebook::thrift::test::AdaptTemplatedTestStruct>().adaptedMapDefault_ref());
      return;
    case 21:
      obj.doubleTypedefBool_ref().copy_from(default_inst<::facebook::thrift::test::AdaptTemplatedTestStruct>().doubleTypedefBool_ref());
      return;
  }
}

template<>
void reset_field<::facebook::thrift::test::AdaptTemplatedNestedTestStruct>(
    ::facebook::thrift::test::AdaptTemplatedNestedTestStruct& obj, uint16_t index) {
  switch (index) {
    case 0:
      obj.adaptedStruct_ref().copy_from(default_inst<::facebook::thrift::test::AdaptTemplatedNestedTestStruct>().adaptedStruct_ref());
      return;
  }
}

template<>
void reset_field<::facebook::thrift::test::AdaptedStruct>(
    ::facebook::thrift::test::AdaptedStruct& obj, uint16_t index) {
  switch (index) {
    case 0:
      obj.data_ref().copy_from(default_inst<::facebook::thrift::test::AdaptedStruct>().data_ref());
      return;
  }
}

template<>
void reset_field<::facebook::thrift::test::StructFieldAdaptedStruct>(
    ::facebook::thrift::test::StructFieldAdaptedStruct& obj, uint16_t index) {
  switch (index) {
    case 0:
      obj.adaptedStruct_ref().copy_from(default_inst<::facebook::thrift::test::StructFieldAdaptedStruct>().adaptedStruct_ref());
      return;
    case 1:
      obj.adaptedTypedef_ref().copy_from(default_inst<::facebook::thrift::test::StructFieldAdaptedStruct>().adaptedTypedef_ref());
      return;
    case 2:
      obj.directlyAdapted_ref().copy_from(default_inst<::facebook::thrift::test::StructFieldAdaptedStruct>().directlyAdapted_ref());
      return;
    case 3:
      obj.typedefOfAdapted_ref().copy_from(default_inst<::facebook::thrift::test::StructFieldAdaptedStruct>().typedefOfAdapted_ref());
      return;
  }
}

template<>
void reset_field<::facebook::thrift::test::CircularAdaptee>(
    ::facebook::thrift::test::CircularAdaptee& obj, uint16_t index) {
  switch (index) {
    case 0:
      obj.field_ref().copy_from(default_inst<::facebook::thrift::test::CircularAdaptee>().field_ref());
      return;
  }
}

template<>
void reset_field<::facebook::thrift::test::CircularStruct>(
    ::facebook::thrift::test::CircularStruct& obj, uint16_t index) {
  switch (index) {
    case 0:
      obj.field_ref().reset();
      return;
  }
}

template<>
void reset_field<::facebook::thrift::test::ReorderedStruct>(
    ::facebook::thrift::test::ReorderedStruct& obj, uint16_t index) {
  switch (index) {
    case 0:
      obj.reordered_dependent_adapted_ref().reset();
      return;
  }
}

template<>
void reset_field<::facebook::thrift::test::MoveOnly>(
    ::facebook::thrift::test::MoveOnly& obj, uint16_t index) {
  switch (index) {
    case 0:
      obj.ptr_ref().copy_from(default_inst<::facebook::thrift::test::MoveOnly>().ptr_ref());
      return;
  }
}

template<>
void reset_field<::facebook::thrift::test::AlsoMoveOnly>(
    ::facebook::thrift::test::AlsoMoveOnly& obj, uint16_t index) {
  switch (index) {
    case 0:
      obj.ptr_ref().copy_from(default_inst<::facebook::thrift::test::AlsoMoveOnly>().ptr_ref());
      return;
  }
}

template<>
void reset_field<::facebook::thrift::test::ApplyAdapter>(
    ::facebook::thrift::test::ApplyAdapter& obj, uint16_t index) {
  switch (index) {
  }
}

template<>
void reset_field<::facebook::thrift::test::CountingStruct>(
    ::facebook::thrift::test::CountingStruct& obj, uint16_t index) {
  switch (index) {
    case 0:
      obj.regularInt_ref().copy_from(default_inst<::facebook::thrift::test::CountingStruct>().regularInt_ref());
      return;
    case 1:
      obj.countingInt_ref().copy_from(default_inst<::facebook::thrift::test::CountingStruct>().countingInt_ref());
      return;
    case 2:
      obj.regularString_ref().copy_from(default_inst<::facebook::thrift::test::CountingStruct>().regularString_ref());
      return;
  }
}

template<>
void reset_field<::facebook::thrift::test::Person>(
    ::facebook::thrift::test::Person& obj, uint16_t index) {
  switch (index) {
    case 0:
      obj.name_ref().copy_from(default_inst<::facebook::thrift::test::Person>().name_ref());
      return;
  }
}

template<>
void reset_field<::facebook::thrift::test::Person2>(
    ::facebook::thrift::test::Person2& obj, uint16_t index) {
  switch (index) {
    case 0:
      obj.name_ref().copy_from(default_inst<::facebook::thrift::test::Person2>().name_ref());
      return;
  }
}

template<>
const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::facebook::thrift::test::MyAnnotation>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::facebook::thrift::test::Foo>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::facebook::thrift::test::Baz>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::facebook::thrift::test::Bar>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::facebook::thrift::test::StructWithFieldAdapter>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::facebook::thrift::test::TerseAdaptedFields>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::facebook::thrift::test::B>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::facebook::thrift::test::A>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::facebook::thrift::test::Config>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::facebook::thrift::test::MyStruct>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::facebook::thrift::test::AdaptTestStruct>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::facebook::thrift::test::AdaptTemplatedTestStruct>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::facebook::thrift::test::AdaptTemplatedNestedTestStruct>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::facebook::thrift::test::AdaptTestUnion>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::facebook::thrift::test::AdaptedStruct>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::facebook::thrift::test::StructFieldAdaptedStruct>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::facebook::thrift::test::CircularAdaptee>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::facebook::thrift::test::CircularStruct>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::facebook::thrift::test::ReorderedStruct>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::facebook::thrift::test::MoveOnly>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::facebook::thrift::test::AlsoMoveOnly>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::facebook::thrift::test::ApplyAdapter>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::facebook::thrift::test::CountingStruct>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::facebook::thrift::test::Person>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::facebook::thrift::test::Person2>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}
} // namespace py3
} // namespace thrift
