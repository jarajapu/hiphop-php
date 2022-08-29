/**
 * Autogenerated by Thrift for 
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <thrift/lib/cpp2/gen/service_h.h>

#include "thrift/compiler/test/fixtures/single_file_service/gen-cpp2/module_types.h"

// cpp_include's
#include <memory>

// for sinks
#include <thrift/lib/cpp2/async/Sink.h>

// for streams
#include <thrift/lib/cpp2/async/ServerStream.h>

// for interactions
#include <thrift/lib/cpp2/async/ServerStream.h>
#include <thrift/lib/cpp2/async/Sink.h>

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
class A;
class AAsyncProcessor;

class AServiceInfoHolder : public apache::thrift::ServiceInfoHolder {
  public:
   apache::thrift::ServiceRequestInfoMap const& requestInfoMap() const override;
   static apache::thrift::ServiceRequestInfoMap staticRequestInfoMap();
};
} // cpp2

namespace apache::thrift {
template <>
class ServiceHandler<::cpp2::A> : public apache::thrift::ServerInterface {
 public:
  std::string_view getGeneratedName() const override { return "A"; }

  typedef ::cpp2::AAsyncProcessor ProcessorType;
  std::unique_ptr<apache::thrift::AsyncProcessor> getProcessor() override;
  CreateMethodMetadataResult createMethodMetadata() override;
 private:
  std::optional<std::reference_wrapper<apache::thrift::ServiceRequestInfoMap const>> getServiceRequestInfoMap() const;
 public:
class IServiceInfoHolder : public apache::thrift::ServiceInfoHolder {
  public:
   apache::thrift::ServiceRequestInfoMap const& requestInfoMap() const override;
   static apache::thrift::ServiceRequestInfoMap staticRequestInfoMap();
};

class IIf : public apache::thrift::Tile, public apache::thrift::ServerInterface {
 public:
  std::string_view getGeneratedName() const override { return "I"; }

  typedef ::cpp2::AAsyncProcessor ProcessorType;
  virtual ~IIf() = default;
  std::unique_ptr<apache::thrift::AsyncProcessor> getProcessor() override {
    std::terminate();
  }
  CreateMethodMetadataResult createMethodMetadata() override {
    std::terminate();
  }
  virtual void interact();
  virtual folly::SemiFuture<folly::Unit> semifuture_interact();
#if FOLLY_HAS_COROUTINES
  virtual folly::coro::Task<void> co_interact();
  virtual folly::coro::Task<void> co_interact(apache::thrift::RequestParams params);
#endif
  virtual void async_tm_interact(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback);
 private:
  std::atomic<apache::thrift::detail::si::InvocationType> __fbthrift_invocation_interact{apache::thrift::detail::si::InvocationType::AsyncTm};
};
  virtual std::unique_ptr<IIf> createI();
  virtual void foo(::cpp2::Foo& /*_return*/);
  virtual folly::Future<std::unique_ptr<::cpp2::Foo>> future_foo();
  virtual folly::SemiFuture<std::unique_ptr<::cpp2::Foo>> semifuture_foo();
#if FOLLY_HAS_COROUTINES
  virtual folly::coro::Task<std::unique_ptr<::cpp2::Foo>> co_foo();
  virtual folly::coro::Task<std::unique_ptr<::cpp2::Foo>> co_foo(apache::thrift::RequestParams params);
#endif
  virtual void async_tm_foo(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr<::cpp2::Foo>>> callback);
 private:
  static ::cpp2::AServiceInfoHolder __fbthrift_serviceInfoHolder;
  std::atomic<apache::thrift::detail::si::InvocationType> __fbthrift_invocation_createI{apache::thrift::detail::si::InvocationType::AsyncTm};
  std::atomic<apache::thrift::detail::si::InvocationType> __fbthrift_invocation_foo{apache::thrift::detail::si::InvocationType::AsyncTm};
};

} // namespace apache::thrift

namespace cpp2 {
using ASvIf [[deprecated("Use apache::thrift::ServiceHandler<A> instead")]] = ::apache::thrift::ServiceHandler<A>;
} // cpp2
namespace cpp2 {
class ASvNull : public ::apache::thrift::ServiceHandler<A> {
 public:
  void foo(::cpp2::Foo& /*_return*/) override;
};

class AAsyncProcessor : public ::apache::thrift::GeneratedAsyncProcessor {
 public:
  const char* getServiceName() override;
  void getServiceMetadata(apache::thrift::metadata::ThriftServiceMetadataResponse& response) override;
  using BaseAsyncProcessor = void;
 protected:
  ::apache::thrift::ServiceHandler<::cpp2::A>* iface_;
 public:
  // This is implemented in case the corresponding AsyncProcessorFactory did not implement createMethodMetadata.
  // This can happen if the service is using a custom AsyncProcessorFactory but re-using the same AsyncProcessor.
  void processSerializedCompressedRequest(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) override;
  // By default, this overload will be called for generated services
  void processSerializedCompressedRequestWithMetadata(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, const apache::thrift::AsyncProcessorFactory::MethodMetadata& methodMetadata, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) override;
  void executeRequest(apache::thrift::ServerRequest&& serverRequest, const apache::thrift::AsyncProcessorFactory::MethodMetadata& methodMetadata) override;
 public:
  using ProcessFuncs = GeneratedAsyncProcessor::ProcessFuncs<AAsyncProcessor>;
  using ProcessMap = GeneratedAsyncProcessor::ProcessMap<ProcessFuncs>;
  using InteractionConstructor = GeneratedAsyncProcessor::InteractionConstructor<AAsyncProcessor>;
  using InteractionConstructorMap = GeneratedAsyncProcessor::InteractionConstructorMap<InteractionConstructor>;
  static const AAsyncProcessor::ProcessMap& getOwnProcessMap();
  static const AAsyncProcessor::InteractionConstructorMap& getInteractionConstructorMap();
  std::unique_ptr<apache::thrift::Tile> createInteractionImpl(const std::string& name) override;
 private:
  static const AAsyncProcessor::ProcessMap kOwnProcessMap_;
  static const AAsyncProcessor::InteractionConstructorMap interactionConstructorMap_;
 private:
  std::unique_ptr<apache::thrift::Tile> createI() {
    return iface_->createI();
  }
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_foo(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void executeRequest_foo(apache::thrift::ServerRequest&& serverRequest);
  template <class ProtocolIn_, class ProtocolOut_>
  static apache::thrift::SerializedResponse return_foo(apache::thrift::ContextStack* ctx, ::cpp2::Foo const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_foo(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_I_interact(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void executeRequest_I_interact(apache::thrift::ServerRequest&& serverRequest);
  template <class ProtocolIn_, class ProtocolOut_>
  static apache::thrift::SerializedResponse return_I_interact(apache::thrift::ContextStack* ctx);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_I_interact(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
 public:
  AAsyncProcessor(::apache::thrift::ServiceHandler<::cpp2::A>* iface) :
      iface_(iface) {}
  ~AAsyncProcessor() override {}
};

} // cpp2

namespace cpp2 {
class B;
class BAsyncProcessor;

class BServiceInfoHolder : public apache::thrift::ServiceInfoHolder {
  public:
   apache::thrift::ServiceRequestInfoMap const& requestInfoMap() const override;
   static apache::thrift::ServiceRequestInfoMap staticRequestInfoMap();
};
} // cpp2

namespace apache::thrift {
template <>
class ServiceHandler<::cpp2::B> : virtual public ::cpp2::ASvIf {
 public:
  std::string_view getGeneratedName() const override { return "B"; }

  typedef ::cpp2::BAsyncProcessor ProcessorType;
  std::unique_ptr<apache::thrift::AsyncProcessor> getProcessor() override;
  CreateMethodMetadataResult createMethodMetadata() override;
 private:
  std::optional<std::reference_wrapper<apache::thrift::ServiceRequestInfoMap const>> getServiceRequestInfoMap() const;
 public:

  virtual void bar(std::unique_ptr<::cpp2::Foo> /*foo*/);
  virtual folly::Future<folly::Unit> future_bar(std::unique_ptr<::cpp2::Foo> p_foo);
  virtual folly::SemiFuture<folly::Unit> semifuture_bar(std::unique_ptr<::cpp2::Foo> p_foo);
#if FOLLY_HAS_COROUTINES
  virtual folly::coro::Task<void> co_bar(std::unique_ptr<::cpp2::Foo> p_foo);
  virtual folly::coro::Task<void> co_bar(apache::thrift::RequestParams params, std::unique_ptr<::cpp2::Foo> p_foo);
#endif
  virtual void async_tm_bar(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, std::unique_ptr<::cpp2::Foo> p_foo);
  virtual ::apache::thrift::ServerStream<::std::int32_t> stream_stuff();
  virtual folly::Future<::apache::thrift::ServerStream<::std::int32_t>> future_stream_stuff();
  virtual folly::SemiFuture<::apache::thrift::ServerStream<::std::int32_t>> semifuture_stream_stuff();
#if FOLLY_HAS_COROUTINES
  virtual folly::coro::Task<::apache::thrift::ServerStream<::std::int32_t>> co_stream_stuff();
  virtual folly::coro::Task<::apache::thrift::ServerStream<::std::int32_t>> co_stream_stuff(apache::thrift::RequestParams params);
#endif
  virtual void async_tm_stream_stuff(std::unique_ptr<apache::thrift::HandlerCallback<::apache::thrift::ServerStream<::std::int32_t>>> callback);
  virtual ::apache::thrift::SinkConsumer<::std::int32_t, ::std::int32_t> sink_stuff();
  virtual folly::Future<::apache::thrift::SinkConsumer<::std::int32_t, ::std::int32_t>> future_sink_stuff();
  virtual folly::SemiFuture<::apache::thrift::SinkConsumer<::std::int32_t, ::std::int32_t>> semifuture_sink_stuff();
#if FOLLY_HAS_COROUTINES
  virtual folly::coro::Task<::apache::thrift::SinkConsumer<::std::int32_t, ::std::int32_t>> co_sink_stuff();
  virtual folly::coro::Task<::apache::thrift::SinkConsumer<::std::int32_t, ::std::int32_t>> co_sink_stuff(apache::thrift::RequestParams params);
#endif
  virtual void async_tm_sink_stuff(std::unique_ptr<apache::thrift::HandlerCallback<::apache::thrift::SinkConsumer<::std::int32_t, ::std::int32_t>>> callback);
 private:
  static ::cpp2::BServiceInfoHolder __fbthrift_serviceInfoHolder;
  std::atomic<apache::thrift::detail::si::InvocationType> __fbthrift_invocation_bar{apache::thrift::detail::si::InvocationType::AsyncTm};
  std::atomic<apache::thrift::detail::si::InvocationType> __fbthrift_invocation_stream_stuff{apache::thrift::detail::si::InvocationType::AsyncTm};
  std::atomic<apache::thrift::detail::si::InvocationType> __fbthrift_invocation_sink_stuff{apache::thrift::detail::si::InvocationType::AsyncTm};
};

} // namespace apache::thrift

namespace cpp2 {
using BSvIf [[deprecated("Use apache::thrift::ServiceHandler<B> instead")]] = ::apache::thrift::ServiceHandler<B>;
} // cpp2
namespace cpp2 {
class BSvNull : public ::apache::thrift::ServiceHandler<B>, virtual public ::apache::thrift::ServiceHandler<::cpp2::A> {
 public:
  void bar(std::unique_ptr<::cpp2::Foo> /*foo*/) override;
  ::apache::thrift::SinkConsumer<::std::int32_t, ::std::int32_t> sink_stuff() override;
};

class BAsyncProcessor : public ::cpp2::AAsyncProcessor {
 public:
  const char* getServiceName() override;
  void getServiceMetadata(apache::thrift::metadata::ThriftServiceMetadataResponse& response) override;
  using BaseAsyncProcessor = ::cpp2::AAsyncProcessor;
 protected:
  ::apache::thrift::ServiceHandler<::cpp2::B>* iface_;
 public:
  // This is implemented in case the corresponding AsyncProcessorFactory did not implement createMethodMetadata.
  // This can happen if the service is using a custom AsyncProcessorFactory but re-using the same AsyncProcessor.
  void processSerializedCompressedRequest(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) override;
  // By default, this overload will be called for generated services
  void processSerializedCompressedRequestWithMetadata(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, const apache::thrift::AsyncProcessorFactory::MethodMetadata& methodMetadata, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) override;
  void executeRequest(apache::thrift::ServerRequest&& serverRequest, const apache::thrift::AsyncProcessorFactory::MethodMetadata& methodMetadata) override;
 public:
  using ProcessFuncs = GeneratedAsyncProcessor::ProcessFuncs<BAsyncProcessor>;
  using ProcessMap = GeneratedAsyncProcessor::ProcessMap<ProcessFuncs>;
  static const BAsyncProcessor::ProcessMap& getOwnProcessMap();
 private:
  static const BAsyncProcessor::ProcessMap kOwnProcessMap_;
 private:
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_bar(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void executeRequest_bar(apache::thrift::ServerRequest&& serverRequest);
  template <class ProtocolIn_, class ProtocolOut_>
  static apache::thrift::SerializedResponse return_bar(apache::thrift::ContextStack* ctx);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_bar(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_stream_stuff(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void executeRequest_stream_stuff(apache::thrift::ServerRequest&& serverRequest);
  template <class ProtocolIn_, class ProtocolOut_>
  static apache::thrift::ResponseAndServerStreamFactory return_stream_stuff(apache::thrift::ContextStack* ctx, folly::Executor::KeepAlive<> executor, ::apache::thrift::ServerStream<::std::int32_t>&& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_stream_stuff(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_sink_stuff(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void executeRequest_sink_stuff(apache::thrift::ServerRequest&& serverRequest);
  template <class ProtocolIn_, class ProtocolOut_>
  static std::pair<apache::thrift::SerializedResponse, apache::thrift::detail::SinkConsumerImpl> return_sink_stuff(apache::thrift::ContextStack* ctx, ::apache::thrift::SinkConsumer<::std::int32_t, ::std::int32_t>&& _return, folly::Executor::KeepAlive<> executor);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_sink_stuff(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
 public:
  BAsyncProcessor(::apache::thrift::ServiceHandler<::cpp2::B>* iface) :
      ::cpp2::AAsyncProcessor(iface),
      iface_(iface) {}
  ~BAsyncProcessor() override {}
};

} // cpp2

namespace cpp2 {
class C;
class CAsyncProcessor;

class CServiceInfoHolder : public apache::thrift::ServiceInfoHolder {
  public:
   apache::thrift::ServiceRequestInfoMap const& requestInfoMap() const override;
   static apache::thrift::ServiceRequestInfoMap staticRequestInfoMap();
};
} // cpp2

namespace apache::thrift {
template <>
class ServiceHandler<::cpp2::C> : public apache::thrift::ServerInterface {
 public:
  std::string_view getGeneratedName() const override { return "C"; }

  typedef ::cpp2::CAsyncProcessor ProcessorType;
  std::unique_ptr<apache::thrift::AsyncProcessor> getProcessor() override;
  CreateMethodMetadataResult createMethodMetadata() override;
 private:
  std::optional<std::reference_wrapper<apache::thrift::ServiceRequestInfoMap const>> getServiceRequestInfoMap() const;
 public:
class IServiceInfoHolder : public apache::thrift::ServiceInfoHolder {
  public:
   apache::thrift::ServiceRequestInfoMap const& requestInfoMap() const override;
   static apache::thrift::ServiceRequestInfoMap staticRequestInfoMap();
};

class IIf : public apache::thrift::Tile, public apache::thrift::ServerInterface {
 public:
  std::string_view getGeneratedName() const override { return "I"; }

  typedef ::cpp2::CAsyncProcessor ProcessorType;
  virtual ~IIf() = default;
  std::unique_ptr<apache::thrift::AsyncProcessor> getProcessor() override {
    std::terminate();
  }
  CreateMethodMetadataResult createMethodMetadata() override {
    std::terminate();
  }
  virtual void interact();
  virtual folly::SemiFuture<folly::Unit> semifuture_interact();
#if FOLLY_HAS_COROUTINES
  virtual folly::coro::Task<void> co_interact();
  virtual folly::coro::Task<void> co_interact(apache::thrift::RequestParams params);
#endif
  virtual void async_tm_interact(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback);
 private:
  std::atomic<apache::thrift::detail::si::InvocationType> __fbthrift_invocation_interact{apache::thrift::detail::si::InvocationType::AsyncTm};
};
  virtual std::unique_ptr<IIf> createI();
 private:
  static ::cpp2::CServiceInfoHolder __fbthrift_serviceInfoHolder;
  std::atomic<apache::thrift::detail::si::InvocationType> __fbthrift_invocation_createI{apache::thrift::detail::si::InvocationType::AsyncTm};
};

} // namespace apache::thrift

namespace cpp2 {
using CSvIf [[deprecated("Use apache::thrift::ServiceHandler<C> instead")]] = ::apache::thrift::ServiceHandler<C>;
} // cpp2
namespace cpp2 {
class CSvNull : public ::apache::thrift::ServiceHandler<C> {
 public:
};

class CAsyncProcessor : public ::apache::thrift::GeneratedAsyncProcessor {
 public:
  const char* getServiceName() override;
  void getServiceMetadata(apache::thrift::metadata::ThriftServiceMetadataResponse& response) override;
  using BaseAsyncProcessor = void;
 protected:
  ::apache::thrift::ServiceHandler<::cpp2::C>* iface_;
 public:
  // This is implemented in case the corresponding AsyncProcessorFactory did not implement createMethodMetadata.
  // This can happen if the service is using a custom AsyncProcessorFactory but re-using the same AsyncProcessor.
  void processSerializedCompressedRequest(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) override;
  // By default, this overload will be called for generated services
  void processSerializedCompressedRequestWithMetadata(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, const apache::thrift::AsyncProcessorFactory::MethodMetadata& methodMetadata, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) override;
  void executeRequest(apache::thrift::ServerRequest&& serverRequest, const apache::thrift::AsyncProcessorFactory::MethodMetadata& methodMetadata) override;
 public:
  using ProcessFuncs = GeneratedAsyncProcessor::ProcessFuncs<CAsyncProcessor>;
  using ProcessMap = GeneratedAsyncProcessor::ProcessMap<ProcessFuncs>;
  using InteractionConstructor = GeneratedAsyncProcessor::InteractionConstructor<CAsyncProcessor>;
  using InteractionConstructorMap = GeneratedAsyncProcessor::InteractionConstructorMap<InteractionConstructor>;
  static const CAsyncProcessor::ProcessMap& getOwnProcessMap();
  static const CAsyncProcessor::InteractionConstructorMap& getInteractionConstructorMap();
  std::unique_ptr<apache::thrift::Tile> createInteractionImpl(const std::string& name) override;
 private:
  static const CAsyncProcessor::ProcessMap kOwnProcessMap_;
  static const CAsyncProcessor::InteractionConstructorMap interactionConstructorMap_;
 private:
  std::unique_ptr<apache::thrift::Tile> createI() {
    return iface_->createI();
  }
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_I_interact(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void executeRequest_I_interact(apache::thrift::ServerRequest&& serverRequest);
  template <class ProtocolIn_, class ProtocolOut_>
  static apache::thrift::SerializedResponse return_I_interact(apache::thrift::ContextStack* ctx);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_I_interact(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
 public:
  CAsyncProcessor(::apache::thrift::ServiceHandler<::cpp2::C>* iface) :
      iface_(iface) {}
  ~CAsyncProcessor() override {}
};

} // cpp2

