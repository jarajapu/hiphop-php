/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#include "thrift/compiler/test/fixtures/adapter/gen-py3/rust/metadata.h"

namespace facebook {
namespace thrift {
namespace annotation {
namespace rust {
::apache::thrift::metadata::ThriftMetadata rust_getThriftModuleMetadata() {
  ::apache::thrift::metadata::ThriftServiceMetadataResponse response;
  ::apache::thrift::metadata::ThriftMetadata& metadata = *response.metadata_ref();
  ::apache::thrift::detail::md::StructMetadata<Name>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<Copy>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<RequestContext>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<Arc>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<Box>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<Exhaustive>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<Ord>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<NewType>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<Type>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<Serde>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<Mod>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<Adapter>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<Derive>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<ServiceExn>::gen(metadata);
  return metadata;
}
} // namespace facebook
} // namespace thrift
} // namespace annotation
} // namespace rust
