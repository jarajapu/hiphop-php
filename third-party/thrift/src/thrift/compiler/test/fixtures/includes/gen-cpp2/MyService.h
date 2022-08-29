/**
 * Autogenerated by Thrift for src/service.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <thrift/lib/cpp2/gen/service_h.h>

#include "thrift/compiler/test/fixtures/includes/gen-cpp2/MyServiceAsyncClient.h"
#include "thrift/compiler/test/fixtures/includes/gen-cpp2/service_types.h"
#include "thrift/compiler/test/fixtures/includes/gen-cpp2/module_types.h"
#include "thrift/compiler/test/fixtures/includes/gen-cpp2/includes_types.h"

namespace folly {
  class IOBuf;
  class IOBufQueue;
}
namespace apache { namespace thrift {
  class Cpp2RequestContext;
  class BinaryProtocolReader;
  class CompactProtocolReader;
  namespace transport { class THeader; }
}}

namespace cpp2 {
class MyService;
class MyServiceAsyncProcessor;

class MyServiceServiceInfoHolder : public apache::thrift::ServiceInfoHolder {
  public:
   apache::thrift::ServiceRequestInfoMap const& requestInfoMap() const override;
   static apache::thrift::ServiceRequestInfoMap staticRequestInfoMap();
};
} // cpp2

namespace apache::thrift {
template <>
class ServiceHandler<::cpp2::MyService> : public apache::thrift::ServerInterface {
 public:
  std::string_view getGeneratedName() const override { return "MyService"; }

  typedef ::cpp2::MyServiceAsyncProcessor ProcessorType;
  std::unique_ptr<apache::thrift::AsyncProcessor> getProcessor() override;
  CreateMethodMetadataResult createMethodMetadata() override;
 private:
  std::optional<std::reference_wrapper<apache::thrift::ServiceRequestInfoMap const>> getServiceRequestInfoMap() const;
 public:

  virtual void query(std::unique_ptr<::cpp2::MyStruct> /*s*/, std::unique_ptr<::cpp2::Included> /*i*/);
  virtual folly::Future<folly::Unit> future_query(std::unique_ptr<::cpp2::MyStruct> p_s, std::unique_ptr<::cpp2::Included> p_i);
  virtual folly::SemiFuture<folly::Unit> semifuture_query(std::unique_ptr<::cpp2::MyStruct> p_s, std::unique_ptr<::cpp2::Included> p_i);
#if FOLLY_HAS_COROUTINES
  virtual folly::coro::Task<void> co_query(std::unique_ptr<::cpp2::MyStruct> p_s, std::unique_ptr<::cpp2::Included> p_i);
  virtual folly::coro::Task<void> co_query(apache::thrift::RequestParams params, std::unique_ptr<::cpp2::MyStruct> p_s, std::unique_ptr<::cpp2::Included> p_i);
#endif
  virtual void async_tm_query(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, std::unique_ptr<::cpp2::MyStruct> p_s, std::unique_ptr<::cpp2::Included> p_i);
  virtual void has_arg_docs(std::unique_ptr<::cpp2::MyStruct> /*s*/, std::unique_ptr<::cpp2::Included> /*i*/);
  virtual folly::Future<folly::Unit> future_has_arg_docs(std::unique_ptr<::cpp2::MyStruct> p_s, std::unique_ptr<::cpp2::Included> p_i);
  virtual folly::SemiFuture<folly::Unit> semifuture_has_arg_docs(std::unique_ptr<::cpp2::MyStruct> p_s, std::unique_ptr<::cpp2::Included> p_i);
#if FOLLY_HAS_COROUTINES
  virtual folly::coro::Task<void> co_has_arg_docs(std::unique_ptr<::cpp2::MyStruct> p_s, std::unique_ptr<::cpp2::Included> p_i);
  virtual folly::coro::Task<void> co_has_arg_docs(apache::thrift::RequestParams params, std::unique_ptr<::cpp2::MyStruct> p_s, std::unique_ptr<::cpp2::Included> p_i);
#endif
  virtual void async_tm_has_arg_docs(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, std::unique_ptr<::cpp2::MyStruct> p_s, std::unique_ptr<::cpp2::Included> p_i);
 private:
  static ::cpp2::MyServiceServiceInfoHolder __fbthrift_serviceInfoHolder;
  std::atomic<apache::thrift::detail::si::InvocationType> __fbthrift_invocation_query{apache::thrift::detail::si::InvocationType::AsyncTm};
  std::atomic<apache::thrift::detail::si::InvocationType> __fbthrift_invocation_has_arg_docs{apache::thrift::detail::si::InvocationType::AsyncTm};
};

} // namespace apache::thrift

namespace cpp2 {
using MyServiceSvIf [[deprecated("Use apache::thrift::ServiceHandler<MyService> instead")]] = ::apache::thrift::ServiceHandler<MyService>;
} // cpp2
namespace cpp2 {
class MyServiceSvNull : public ::apache::thrift::ServiceHandler<MyService> {
 public:
  void query(std::unique_ptr<::cpp2::MyStruct> /*s*/, std::unique_ptr<::cpp2::Included> /*i*/) override;
  void has_arg_docs(std::unique_ptr<::cpp2::MyStruct> /*s*/, std::unique_ptr<::cpp2::Included> /*i*/) override;
};

class MyServiceAsyncProcessor : public ::apache::thrift::GeneratedAsyncProcessor {
 public:
  const char* getServiceName() override;
  void getServiceMetadata(apache::thrift::metadata::ThriftServiceMetadataResponse& response) override;
  using BaseAsyncProcessor = void;
 protected:
  ::apache::thrift::ServiceHandler<::cpp2::MyService>* iface_;
 public:
  // This is implemented in case the corresponding AsyncProcessorFactory did not implement createMethodMetadata.
  // This can happen if the service is using a custom AsyncProcessorFactory but re-using the same AsyncProcessor.
  void processSerializedCompressedRequest(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) override;
  // By default, this overload will be called for generated services
  void processSerializedCompressedRequestWithMetadata(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, const apache::thrift::AsyncProcessorFactory::MethodMetadata& methodMetadata, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) override;
  void executeRequest(apache::thrift::ServerRequest&& serverRequest, const apache::thrift::AsyncProcessorFactory::MethodMetadata& methodMetadata) override;
 public:
  using ProcessFuncs = GeneratedAsyncProcessor::ProcessFuncs<MyServiceAsyncProcessor>;
  using ProcessMap = GeneratedAsyncProcessor::ProcessMap<ProcessFuncs>;
  static const MyServiceAsyncProcessor::ProcessMap& getOwnProcessMap();
 private:
  static const MyServiceAsyncProcessor::ProcessMap kOwnProcessMap_;
 private:
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_query(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void executeRequest_query(apache::thrift::ServerRequest&& serverRequest);
  template <class ProtocolIn_, class ProtocolOut_>
  static apache::thrift::SerializedResponse return_query(apache::thrift::ContextStack* ctx);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_query(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_has_arg_docs(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void executeRequest_has_arg_docs(apache::thrift::ServerRequest&& serverRequest);
  template <class ProtocolIn_, class ProtocolOut_>
  static apache::thrift::SerializedResponse return_has_arg_docs(apache::thrift::ContextStack* ctx);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_has_arg_docs(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
 public:
  MyServiceAsyncProcessor(::apache::thrift::ServiceHandler<::cpp2::MyService>* iface) :
      iface_(iface) {}
  ~MyServiceAsyncProcessor() override {}
};

} // cpp2
