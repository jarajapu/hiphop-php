/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/any/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include "thrift/compiler/test/fixtures/any/gen-cpp2/module_types.h"

#include <thrift/lib/cpp2/gen/module_types_tcc.h>


namespace apache {
namespace thrift {
namespace detail {

template <>
struct TccStructTraits<::cpp2::MyStruct> {
  static void translateFieldName(
      folly::StringPiece _fname,
      int16_t& fid,
      apache::thrift::protocol::TType& _ftype) noexcept;
};
template <>
struct TccStructTraits<::cpp2::MyUnion> {
  static void translateFieldName(
      folly::StringPiece _fname,
      int16_t& fid,
      apache::thrift::protocol::TType& _ftype) noexcept;
};
template <>
struct TccStructTraits<::cpp2::MyException> {
  static void translateFieldName(
      folly::StringPiece _fname,
      int16_t& fid,
      apache::thrift::protocol::TType& _ftype) noexcept;
};

} // namespace detail
} // namespace thrift
} // namespace apache

namespace cpp2 {

template <class Protocol_>
void MyStruct::readNoXfer(Protocol_* iprot) {
  __fbthrift_clear_terse_fields();

  apache::thrift::detail::ProtocolReaderStructReadState<Protocol_> _readState;

  _readState.readStructBegin(iprot);

  using apache::thrift::TProtocolException;


  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          0,
          1,
          apache::thrift::protocol::T_STRING))) {
    goto _loop;
  }
_readField_myString:
  {
    ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::string, ::std::string>::readWithContext(*iprot, this->__fbthrift_field_myString, _readState);
    
  }
 this->__isset.set(0, true);

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          1,
          0,
          apache::thrift::protocol::T_STOP))) {
    goto _loop;
  }

_end:
  _readState.readStructEnd(iprot);

  return;

_loop:
  _readState.afterAdvanceFailure(iprot);
  if (_readState.atStop()) {
    goto _end;
  }
  if (iprot->kUsesFieldNames()) {
    _readState.template fillFieldTraitsFromName<apache::thrift::detail::TccStructTraits<MyStruct>>();
  }

  switch (_readState.fieldId) {
    case 1:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_STRING))) {
        goto _readField_myString;
      } else {
        goto _skip;
      }
    }
    default:
    {
_skip:
      _readState.skip(iprot);
      _readState.readFieldEnd(iprot);
      _readState.readFieldBeginNoInline(iprot);
      goto _loop;
    }
  }
}

template <class Protocol_>
uint32_t MyStruct::serializedSize(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("MyStruct");
  {
    xfer += prot_->serializedFieldSize("myString", apache::thrift::protocol::T_STRING, 1);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::string, ::std::string>::serializedSize<false>(*prot_, this->__fbthrift_field_myString);
  }
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t MyStruct::serializedSizeZC(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("MyStruct");
  {
    xfer += prot_->serializedFieldSize("myString", apache::thrift::protocol::T_STRING, 1);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::string, ::std::string>::serializedSize<false>(*prot_, this->__fbthrift_field_myString);
  }
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t MyStruct::write(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("MyStruct");
  bool previousFieldHasValue = true;
  {
    constexpr int16_t kPrevFieldId = 0;
    xfer += ::apache::thrift::detail::writeFieldBegin<apache::thrift::protocol::T_STRING, 1, kPrevFieldId>(*prot_, "myString", previousFieldHasValue);
    previousFieldHasValue = true;
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::string, ::std::string>::write(*prot_, this->__fbthrift_field_myString);
    xfer += prot_->writeFieldEnd();
  }
  xfer += prot_->writeFieldStop();
  xfer += prot_->writeStructEnd();
  return xfer;
}

extern template void MyStruct::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
extern template uint32_t MyStruct::write<>(apache::thrift::BinaryProtocolWriter*) const;
extern template uint32_t MyStruct::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t MyStruct::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template void MyStruct::readNoXfer<>(apache::thrift::CompactProtocolReader*);
extern template uint32_t MyStruct::write<>(apache::thrift::CompactProtocolWriter*) const;
extern template uint32_t MyStruct::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
extern template uint32_t MyStruct::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;


template <class Protocol_>
void MyUnion::readNoXfer(Protocol_* iprot) {
  apache::thrift::detail::ProtocolReaderStructReadState<Protocol_> _readState;
  _readState.fieldId = 0;

  _readState.readStructBegin(iprot);

  _readState.readFieldBegin(iprot);
  if (_readState.atStop()) {
    apache::thrift::clear(*this);
  } else {
    if (iprot->kUsesFieldNames()) {
      _readState.template fillFieldTraitsFromName<apache::thrift::detail::TccStructTraits<MyUnion>>();
    }
    switch (_readState.fieldId) {
      case 1:
      {
        if (_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_STRING)) {
          this->myString_ref().ensure();
          ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::string, ::std::string>::readWithContext(*iprot, value_.myString, _readState);
          
        } else {
          _readState.skip(iprot);
        }
        break;
      }
      default:
      {
        _readState.skip(iprot);
        break;
      }
    }
    _readState.readFieldEnd(iprot);
    _readState.readFieldBegin(iprot);
    if (UNLIKELY(!_readState.atStop())) {
      using apache::thrift::protocol::TProtocolException;
      TProtocolException::throwUnionMissingStop();
    }
  }
  _readState.readStructEnd(iprot);
}
template <class Protocol_>
uint32_t MyUnion::serializedSize(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("MyUnion");
  switch(this->getType()) {
    case MyUnion::Type::myString:
    {
      xfer += prot_->serializedFieldSize("myString", apache::thrift::protocol::T_STRING, 1);
      xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::string, ::std::string>::serializedSize<false>(*prot_, value_.myString);
      break;
    }
    case MyUnion::Type::__EMPTY__:;
  }
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t MyUnion::serializedSizeZC(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("MyUnion");
  switch(this->getType()) {
    case MyUnion::Type::myString:
    {
      xfer += prot_->serializedFieldSize("myString", apache::thrift::protocol::T_STRING, 1);
      xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::string, ::std::string>::serializedSize<false>(*prot_, value_.myString);
      break;
    }
    case MyUnion::Type::__EMPTY__:;
  }
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t MyUnion::write(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("MyUnion");
  switch(this->getType()) {
    case MyUnion::Type::myString:
    {
      constexpr int16_t kPrevFieldId = 0;
      xfer += ::apache::thrift::detail::writeFieldBegin<apache::thrift::protocol::T_STRING, 1, kPrevFieldId>(*prot_, "myString", false);
      xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::string, ::std::string>::write(*prot_, value_.myString);
      xfer += prot_->writeFieldEnd();
      break;
    }
    case MyUnion::Type::__EMPTY__:;
  }
  xfer += prot_->writeFieldStop();
  xfer += prot_->writeStructEnd();
  return xfer;
}

extern template void MyUnion::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
extern template uint32_t MyUnion::write<>(apache::thrift::BinaryProtocolWriter*) const;
extern template uint32_t MyUnion::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t MyUnion::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template void MyUnion::readNoXfer<>(apache::thrift::CompactProtocolReader*);
extern template uint32_t MyUnion::write<>(apache::thrift::CompactProtocolWriter*) const;
extern template uint32_t MyUnion::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
extern template uint32_t MyUnion::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;


template <class Protocol_>
void MyException::readNoXfer(Protocol_* iprot) {
  __fbthrift_clear_terse_fields();

  apache::thrift::detail::ProtocolReaderStructReadState<Protocol_> _readState;

  _readState.readStructBegin(iprot);

  using apache::thrift::TProtocolException;


  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          0,
          1,
          apache::thrift::protocol::T_STRING))) {
    goto _loop;
  }
_readField_myString:
  {
    ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::string, ::std::string>::readWithContext(*iprot, this->__fbthrift_field_myString, _readState);
    
  }
 this->__isset.set(0, true);

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          1,
          0,
          apache::thrift::protocol::T_STOP))) {
    goto _loop;
  }

_end:
  _readState.readStructEnd(iprot);

  return;

_loop:
  _readState.afterAdvanceFailure(iprot);
  if (_readState.atStop()) {
    goto _end;
  }
  if (iprot->kUsesFieldNames()) {
    _readState.template fillFieldTraitsFromName<apache::thrift::detail::TccStructTraits<MyException>>();
  }

  switch (_readState.fieldId) {
    case 1:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_STRING))) {
        goto _readField_myString;
      } else {
        goto _skip;
      }
    }
    default:
    {
_skip:
      _readState.skip(iprot);
      _readState.readFieldEnd(iprot);
      _readState.readFieldBeginNoInline(iprot);
      goto _loop;
    }
  }
}

template <class Protocol_>
uint32_t MyException::serializedSize(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("MyException");
  {
    xfer += prot_->serializedFieldSize("myString", apache::thrift::protocol::T_STRING, 1);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::string, ::std::string>::serializedSize<false>(*prot_, this->__fbthrift_field_myString);
  }
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t MyException::serializedSizeZC(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("MyException");
  {
    xfer += prot_->serializedFieldSize("myString", apache::thrift::protocol::T_STRING, 1);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::string, ::std::string>::serializedSize<false>(*prot_, this->__fbthrift_field_myString);
  }
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t MyException::write(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("MyException");
  bool previousFieldHasValue = true;
  {
    constexpr int16_t kPrevFieldId = 0;
    xfer += ::apache::thrift::detail::writeFieldBegin<apache::thrift::protocol::T_STRING, 1, kPrevFieldId>(*prot_, "myString", previousFieldHasValue);
    previousFieldHasValue = true;
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::string, ::std::string>::write(*prot_, this->__fbthrift_field_myString);
    xfer += prot_->writeFieldEnd();
  }
  xfer += prot_->writeFieldStop();
  xfer += prot_->writeStructEnd();
  return xfer;
}

extern template void MyException::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
extern template uint32_t MyException::write<>(apache::thrift::BinaryProtocolWriter*) const;
extern template uint32_t MyException::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t MyException::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template void MyException::readNoXfer<>(apache::thrift::CompactProtocolReader*);
extern template uint32_t MyException::write<>(apache::thrift::CompactProtocolWriter*) const;
extern template uint32_t MyException::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
extern template uint32_t MyException::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;


} // cpp2
