// @generated by Thrift for thrift/compiler/test/fixtures/params/src/module.thrift
// This file is probably not the place you want to edit!

//! Client implementation for each service in `module`.

#![recursion_limit = "100000000"]
#![allow(non_camel_case_types, non_snake_case, non_upper_case_globals, unused_crate_dependencies, unused_imports, clippy::all)]

#[doc(inline)]
pub use :: as types;

pub mod errors {
    #[doc(inline)]
    pub use ::::errors::nested_containers;
    #[doc(inline)]
    #[allow(ambiguous_glob_reexports)]
    pub use ::::errors::nested_containers::*;
}

pub(crate) use crate as client;
pub(crate) use ::::services;

// Used by Thrift-generated code to implement service inheritance.
#[doc(hidden)]
#[deprecated]
pub mod dependencies {
}


/// Client definitions for `NestedContainers`.
pub struct NestedContainersImpl<P, T, S = ::fbthrift::NoopSpawner> {
    transport: T,
    _phantom: ::std::marker::PhantomData<fn() -> (P, S)>,
}

impl<P, T, S> NestedContainersImpl<P, T, S>
where
    P: ::fbthrift::Protocol,
    T: ::fbthrift::Transport,
    P::Frame: ::fbthrift::Framing<DecBuf = ::fbthrift::FramingDecoded<T>>,
    ::fbthrift::ProtocolEncoded<P>: ::fbthrift::BufMutExt<Final = ::fbthrift::FramingEncodedFinal<T>>,
    P::Deserializer: ::std::marker::Send,
    S: ::fbthrift::help::Spawner,
{
    pub fn new(
        transport: T,
    ) -> Self {
        Self {
            transport,
            _phantom: ::std::marker::PhantomData,
        }
    }

    pub fn transport(&self) -> &T {
        &self.transport
    }


    fn _mapList_impl(
        &self,
        arg_foo: &::std::collections::BTreeMap<::std::primitive::i32, ::std::vec::Vec<::std::primitive::i32>>,
        rpc_options: T::RpcOptions,
    ) -> ::futures::future::BoxFuture<'static, ::std::result::Result<(), crate::errors::nested_containers::MapListError>> {
        use ::const_cstr::const_cstr;
        use ::tracing::Instrument as _;
        use ::futures::FutureExt as _;

        const_cstr! {
            SERVICE_NAME = "NestedContainers";
            SERVICE_METHOD_NAME = "NestedContainers.mapList";
        }
        let args = self::Args_NestedContainers_mapList {
            foo: arg_foo,
            _phantom: ::std::marker::PhantomData,
        };

        let transport = self.transport();

        // need to do call setup outside of async block because T: Transport isn't Send
        let request_env = match ::fbthrift::help::serialize_request_envelope::<P, _>("mapList", &args) {
            ::std::result::Result::Ok(res) => res,
            ::std::result::Result::Err(err) => return ::futures::future::err(err.into()).boxed(),
        };

        let call = transport
            .call(SERVICE_NAME.as_cstr(), SERVICE_METHOD_NAME.as_cstr(), request_env, rpc_options)
            .instrument(::tracing::trace_span!("call", method = "NestedContainers.mapList"));

        async move {
            let reply_env = call.await?;

            let de = P::deserializer(reply_env);
            let res: ::std::result::Result<crate::services::nested_containers::MapListExn, _> =
                ::fbthrift::help::async_deserialize_response_envelope::<P, _, S>(de).await?;

            let res = match res {
                ::std::result::Result::Ok(exn) => ::std::convert::From::from(exn),
                ::std::result::Result::Err(aexn) =>
                    ::std::result::Result::Err(crate::errors::nested_containers::MapListError::ApplicationException(aexn))
            };
            res
        }
        .instrument(::tracing::info_span!("stream", method = "NestedContainers.mapList"))
        .boxed()
    }

    fn _mapSet_impl(
        &self,
        arg_foo: &::std::collections::BTreeMap<::std::primitive::i32, ::std::collections::BTreeSet<::std::primitive::i32>>,
        rpc_options: T::RpcOptions,
    ) -> ::futures::future::BoxFuture<'static, ::std::result::Result<(), crate::errors::nested_containers::MapSetError>> {
        use ::const_cstr::const_cstr;
        use ::tracing::Instrument as _;
        use ::futures::FutureExt as _;

        const_cstr! {
            SERVICE_NAME = "NestedContainers";
            SERVICE_METHOD_NAME = "NestedContainers.mapSet";
        }
        let args = self::Args_NestedContainers_mapSet {
            foo: arg_foo,
            _phantom: ::std::marker::PhantomData,
        };

        let transport = self.transport();

        // need to do call setup outside of async block because T: Transport isn't Send
        let request_env = match ::fbthrift::help::serialize_request_envelope::<P, _>("mapSet", &args) {
            ::std::result::Result::Ok(res) => res,
            ::std::result::Result::Err(err) => return ::futures::future::err(err.into()).boxed(),
        };

        let call = transport
            .call(SERVICE_NAME.as_cstr(), SERVICE_METHOD_NAME.as_cstr(), request_env, rpc_options)
            .instrument(::tracing::trace_span!("call", method = "NestedContainers.mapSet"));

        async move {
            let reply_env = call.await?;

            let de = P::deserializer(reply_env);
            let res: ::std::result::Result<crate::services::nested_containers::MapSetExn, _> =
                ::fbthrift::help::async_deserialize_response_envelope::<P, _, S>(de).await?;

            let res = match res {
                ::std::result::Result::Ok(exn) => ::std::convert::From::from(exn),
                ::std::result::Result::Err(aexn) =>
                    ::std::result::Result::Err(crate::errors::nested_containers::MapSetError::ApplicationException(aexn))
            };
            res
        }
        .instrument(::tracing::info_span!("stream", method = "NestedContainers.mapSet"))
        .boxed()
    }

    fn _listMap_impl(
        &self,
        arg_foo: &[::std::collections::BTreeMap<::std::primitive::i32, ::std::primitive::i32>],
        rpc_options: T::RpcOptions,
    ) -> ::futures::future::BoxFuture<'static, ::std::result::Result<(), crate::errors::nested_containers::ListMapError>> {
        use ::const_cstr::const_cstr;
        use ::tracing::Instrument as _;
        use ::futures::FutureExt as _;

        const_cstr! {
            SERVICE_NAME = "NestedContainers";
            SERVICE_METHOD_NAME = "NestedContainers.listMap";
        }
        let args = self::Args_NestedContainers_listMap {
            foo: arg_foo,
            _phantom: ::std::marker::PhantomData,
        };

        let transport = self.transport();

        // need to do call setup outside of async block because T: Transport isn't Send
        let request_env = match ::fbthrift::help::serialize_request_envelope::<P, _>("listMap", &args) {
            ::std::result::Result::Ok(res) => res,
            ::std::result::Result::Err(err) => return ::futures::future::err(err.into()).boxed(),
        };

        let call = transport
            .call(SERVICE_NAME.as_cstr(), SERVICE_METHOD_NAME.as_cstr(), request_env, rpc_options)
            .instrument(::tracing::trace_span!("call", method = "NestedContainers.listMap"));

        async move {
            let reply_env = call.await?;

            let de = P::deserializer(reply_env);
            let res: ::std::result::Result<crate::services::nested_containers::ListMapExn, _> =
                ::fbthrift::help::async_deserialize_response_envelope::<P, _, S>(de).await?;

            let res = match res {
                ::std::result::Result::Ok(exn) => ::std::convert::From::from(exn),
                ::std::result::Result::Err(aexn) =>
                    ::std::result::Result::Err(crate::errors::nested_containers::ListMapError::ApplicationException(aexn))
            };
            res
        }
        .instrument(::tracing::info_span!("stream", method = "NestedContainers.listMap"))
        .boxed()
    }

    fn _listSet_impl(
        &self,
        arg_foo: &[::std::collections::BTreeSet<::std::primitive::i32>],
        rpc_options: T::RpcOptions,
    ) -> ::futures::future::BoxFuture<'static, ::std::result::Result<(), crate::errors::nested_containers::ListSetError>> {
        use ::const_cstr::const_cstr;
        use ::tracing::Instrument as _;
        use ::futures::FutureExt as _;

        const_cstr! {
            SERVICE_NAME = "NestedContainers";
            SERVICE_METHOD_NAME = "NestedContainers.listSet";
        }
        let args = self::Args_NestedContainers_listSet {
            foo: arg_foo,
            _phantom: ::std::marker::PhantomData,
        };

        let transport = self.transport();

        // need to do call setup outside of async block because T: Transport isn't Send
        let request_env = match ::fbthrift::help::serialize_request_envelope::<P, _>("listSet", &args) {
            ::std::result::Result::Ok(res) => res,
            ::std::result::Result::Err(err) => return ::futures::future::err(err.into()).boxed(),
        };

        let call = transport
            .call(SERVICE_NAME.as_cstr(), SERVICE_METHOD_NAME.as_cstr(), request_env, rpc_options)
            .instrument(::tracing::trace_span!("call", method = "NestedContainers.listSet"));

        async move {
            let reply_env = call.await?;

            let de = P::deserializer(reply_env);
            let res: ::std::result::Result<crate::services::nested_containers::ListSetExn, _> =
                ::fbthrift::help::async_deserialize_response_envelope::<P, _, S>(de).await?;

            let res = match res {
                ::std::result::Result::Ok(exn) => ::std::convert::From::from(exn),
                ::std::result::Result::Err(aexn) =>
                    ::std::result::Result::Err(crate::errors::nested_containers::ListSetError::ApplicationException(aexn))
            };
            res
        }
        .instrument(::tracing::info_span!("stream", method = "NestedContainers.listSet"))
        .boxed()
    }

    fn _turtles_impl(
        &self,
        arg_foo: &[::std::vec::Vec<::std::collections::BTreeMap<::std::primitive::i32, ::std::collections::BTreeMap<::std::primitive::i32, ::std::collections::BTreeSet<::std::primitive::i32>>>>],
        rpc_options: T::RpcOptions,
    ) -> ::futures::future::BoxFuture<'static, ::std::result::Result<(), crate::errors::nested_containers::TurtlesError>> {
        use ::const_cstr::const_cstr;
        use ::tracing::Instrument as _;
        use ::futures::FutureExt as _;

        const_cstr! {
            SERVICE_NAME = "NestedContainers";
            SERVICE_METHOD_NAME = "NestedContainers.turtles";
        }
        let args = self::Args_NestedContainers_turtles {
            foo: arg_foo,
            _phantom: ::std::marker::PhantomData,
        };

        let transport = self.transport();

        // need to do call setup outside of async block because T: Transport isn't Send
        let request_env = match ::fbthrift::help::serialize_request_envelope::<P, _>("turtles", &args) {
            ::std::result::Result::Ok(res) => res,
            ::std::result::Result::Err(err) => return ::futures::future::err(err.into()).boxed(),
        };

        let call = transport
            .call(SERVICE_NAME.as_cstr(), SERVICE_METHOD_NAME.as_cstr(), request_env, rpc_options)
            .instrument(::tracing::trace_span!("call", method = "NestedContainers.turtles"));

        async move {
            let reply_env = call.await?;

            let de = P::deserializer(reply_env);
            let res: ::std::result::Result<crate::services::nested_containers::TurtlesExn, _> =
                ::fbthrift::help::async_deserialize_response_envelope::<P, _, S>(de).await?;

            let res = match res {
                ::std::result::Result::Ok(exn) => ::std::convert::From::from(exn),
                ::std::result::Result::Err(aexn) =>
                    ::std::result::Result::Err(crate::errors::nested_containers::TurtlesError::ApplicationException(aexn))
            };
            res
        }
        .instrument(::tracing::info_span!("stream", method = "NestedContainers.turtles"))
        .boxed()
    }
}

pub trait NestedContainers: ::std::marker::Send {
    fn mapList(
        &self,
        arg_foo: &::std::collections::BTreeMap<::std::primitive::i32, ::std::vec::Vec<::std::primitive::i32>>,
    ) -> ::futures::future::BoxFuture<'static, ::std::result::Result<(), crate::errors::nested_containers::MapListError>>;

    fn mapSet(
        &self,
        arg_foo: &::std::collections::BTreeMap<::std::primitive::i32, ::std::collections::BTreeSet<::std::primitive::i32>>,
    ) -> ::futures::future::BoxFuture<'static, ::std::result::Result<(), crate::errors::nested_containers::MapSetError>>;

    fn listMap(
        &self,
        arg_foo: &[::std::collections::BTreeMap<::std::primitive::i32, ::std::primitive::i32>],
    ) -> ::futures::future::BoxFuture<'static, ::std::result::Result<(), crate::errors::nested_containers::ListMapError>>;

    fn listSet(
        &self,
        arg_foo: &[::std::collections::BTreeSet<::std::primitive::i32>],
    ) -> ::futures::future::BoxFuture<'static, ::std::result::Result<(), crate::errors::nested_containers::ListSetError>>;

    fn turtles(
        &self,
        arg_foo: &[::std::vec::Vec<::std::collections::BTreeMap<::std::primitive::i32, ::std::collections::BTreeMap<::std::primitive::i32, ::std::collections::BTreeSet<::std::primitive::i32>>>>],
    ) -> ::futures::future::BoxFuture<'static, ::std::result::Result<(), crate::errors::nested_containers::TurtlesError>>;
}

pub trait NestedContainersExt<T>: NestedContainers
where
    T: ::fbthrift::Transport,
{
    fn mapList_with_rpc_opts(
        &self,
        arg_foo: &::std::collections::BTreeMap<::std::primitive::i32, ::std::vec::Vec<::std::primitive::i32>>,
        rpc_options: T::RpcOptions,
    ) -> ::futures::future::BoxFuture<'static, ::std::result::Result<(), crate::errors::nested_containers::MapListError>>;
    fn mapSet_with_rpc_opts(
        &self,
        arg_foo: &::std::collections::BTreeMap<::std::primitive::i32, ::std::collections::BTreeSet<::std::primitive::i32>>,
        rpc_options: T::RpcOptions,
    ) -> ::futures::future::BoxFuture<'static, ::std::result::Result<(), crate::errors::nested_containers::MapSetError>>;
    fn listMap_with_rpc_opts(
        &self,
        arg_foo: &[::std::collections::BTreeMap<::std::primitive::i32, ::std::primitive::i32>],
        rpc_options: T::RpcOptions,
    ) -> ::futures::future::BoxFuture<'static, ::std::result::Result<(), crate::errors::nested_containers::ListMapError>>;
    fn listSet_with_rpc_opts(
        &self,
        arg_foo: &[::std::collections::BTreeSet<::std::primitive::i32>],
        rpc_options: T::RpcOptions,
    ) -> ::futures::future::BoxFuture<'static, ::std::result::Result<(), crate::errors::nested_containers::ListSetError>>;
    fn turtles_with_rpc_opts(
        &self,
        arg_foo: &[::std::vec::Vec<::std::collections::BTreeMap<::std::primitive::i32, ::std::collections::BTreeMap<::std::primitive::i32, ::std::collections::BTreeSet<::std::primitive::i32>>>>],
        rpc_options: T::RpcOptions,
    ) -> ::futures::future::BoxFuture<'static, ::std::result::Result<(), crate::errors::nested_containers::TurtlesError>>;

    fn transport(&self) -> &T;
}

struct Args_NestedContainers_mapList<'a> {
    foo: &'a ::std::collections::BTreeMap<::std::primitive::i32, ::std::vec::Vec<::std::primitive::i32>>,
    _phantom: ::std::marker::PhantomData<&'a ()>,
}

impl<'a, P: ::fbthrift::ProtocolWriter> ::fbthrift::Serialize<P> for self::Args_NestedContainers_mapList<'a> {
    #[inline]
    #[::tracing::instrument(skip_all, level = "trace", name = "serialize_args", fields(method = "NestedContainers.mapList"))]
    fn write(&self, p: &mut P) {
        p.write_struct_begin("args");
        p.write_field_begin("foo", ::fbthrift::TType::Map, 1i16);
        ::fbthrift::Serialize::write(&self.foo, p);
        p.write_field_end();
        p.write_field_stop();
        p.write_struct_end();
    }
}

struct Args_NestedContainers_mapSet<'a> {
    foo: &'a ::std::collections::BTreeMap<::std::primitive::i32, ::std::collections::BTreeSet<::std::primitive::i32>>,
    _phantom: ::std::marker::PhantomData<&'a ()>,
}

impl<'a, P: ::fbthrift::ProtocolWriter> ::fbthrift::Serialize<P> for self::Args_NestedContainers_mapSet<'a> {
    #[inline]
    #[::tracing::instrument(skip_all, level = "trace", name = "serialize_args", fields(method = "NestedContainers.mapSet"))]
    fn write(&self, p: &mut P) {
        p.write_struct_begin("args");
        p.write_field_begin("foo", ::fbthrift::TType::Map, 1i16);
        ::fbthrift::Serialize::write(&self.foo, p);
        p.write_field_end();
        p.write_field_stop();
        p.write_struct_end();
    }
}

struct Args_NestedContainers_listMap<'a> {
    foo: &'a [::std::collections::BTreeMap<::std::primitive::i32, ::std::primitive::i32>],
    _phantom: ::std::marker::PhantomData<&'a ()>,
}

impl<'a, P: ::fbthrift::ProtocolWriter> ::fbthrift::Serialize<P> for self::Args_NestedContainers_listMap<'a> {
    #[inline]
    #[::tracing::instrument(skip_all, level = "trace", name = "serialize_args", fields(method = "NestedContainers.listMap"))]
    fn write(&self, p: &mut P) {
        p.write_struct_begin("args");
        p.write_field_begin("foo", ::fbthrift::TType::List, 1i16);
        ::fbthrift::Serialize::write(&self.foo, p);
        p.write_field_end();
        p.write_field_stop();
        p.write_struct_end();
    }
}

struct Args_NestedContainers_listSet<'a> {
    foo: &'a [::std::collections::BTreeSet<::std::primitive::i32>],
    _phantom: ::std::marker::PhantomData<&'a ()>,
}

impl<'a, P: ::fbthrift::ProtocolWriter> ::fbthrift::Serialize<P> for self::Args_NestedContainers_listSet<'a> {
    #[inline]
    #[::tracing::instrument(skip_all, level = "trace", name = "serialize_args", fields(method = "NestedContainers.listSet"))]
    fn write(&self, p: &mut P) {
        p.write_struct_begin("args");
        p.write_field_begin("foo", ::fbthrift::TType::List, 1i16);
        ::fbthrift::Serialize::write(&self.foo, p);
        p.write_field_end();
        p.write_field_stop();
        p.write_struct_end();
    }
}

struct Args_NestedContainers_turtles<'a> {
    foo: &'a [::std::vec::Vec<::std::collections::BTreeMap<::std::primitive::i32, ::std::collections::BTreeMap<::std::primitive::i32, ::std::collections::BTreeSet<::std::primitive::i32>>>>],
    _phantom: ::std::marker::PhantomData<&'a ()>,
}

impl<'a, P: ::fbthrift::ProtocolWriter> ::fbthrift::Serialize<P> for self::Args_NestedContainers_turtles<'a> {
    #[inline]
    #[::tracing::instrument(skip_all, level = "trace", name = "serialize_args", fields(method = "NestedContainers.turtles"))]
    fn write(&self, p: &mut P) {
        p.write_struct_begin("args");
        p.write_field_begin("foo", ::fbthrift::TType::List, 1i16);
        ::fbthrift::Serialize::write(&self.foo, p);
        p.write_field_end();
        p.write_field_stop();
        p.write_struct_end();
    }
}

impl<P, T, S> NestedContainers for NestedContainersImpl<P, T, S>
where
    P: ::fbthrift::Protocol,
    T: ::fbthrift::Transport,
    P::Frame: ::fbthrift::Framing<DecBuf = ::fbthrift::FramingDecoded<T>>,
    ::fbthrift::ProtocolEncoded<P>: ::fbthrift::BufMutExt<Final = ::fbthrift::FramingEncodedFinal<T>>,
    P::Deserializer: ::std::marker::Send,
    S: ::fbthrift::help::Spawner,
{
    fn mapList(
        &self,
        arg_foo: &::std::collections::BTreeMap<::std::primitive::i32, ::std::vec::Vec<::std::primitive::i32>>,
    ) -> ::futures::future::BoxFuture<'static, ::std::result::Result<(), crate::errors::nested_containers::MapListError>> {
        let rpc_options = T::RpcOptions::default();
        self._mapList_impl(
            arg_foo,
            rpc_options,
        )
    }
    fn mapSet(
        &self,
        arg_foo: &::std::collections::BTreeMap<::std::primitive::i32, ::std::collections::BTreeSet<::std::primitive::i32>>,
    ) -> ::futures::future::BoxFuture<'static, ::std::result::Result<(), crate::errors::nested_containers::MapSetError>> {
        let rpc_options = T::RpcOptions::default();
        self._mapSet_impl(
            arg_foo,
            rpc_options,
        )
    }
    fn listMap(
        &self,
        arg_foo: &[::std::collections::BTreeMap<::std::primitive::i32, ::std::primitive::i32>],
    ) -> ::futures::future::BoxFuture<'static, ::std::result::Result<(), crate::errors::nested_containers::ListMapError>> {
        let rpc_options = T::RpcOptions::default();
        self._listMap_impl(
            arg_foo,
            rpc_options,
        )
    }
    fn listSet(
        &self,
        arg_foo: &[::std::collections::BTreeSet<::std::primitive::i32>],
    ) -> ::futures::future::BoxFuture<'static, ::std::result::Result<(), crate::errors::nested_containers::ListSetError>> {
        let rpc_options = T::RpcOptions::default();
        self._listSet_impl(
            arg_foo,
            rpc_options,
        )
    }
    fn turtles(
        &self,
        arg_foo: &[::std::vec::Vec<::std::collections::BTreeMap<::std::primitive::i32, ::std::collections::BTreeMap<::std::primitive::i32, ::std::collections::BTreeSet<::std::primitive::i32>>>>],
    ) -> ::futures::future::BoxFuture<'static, ::std::result::Result<(), crate::errors::nested_containers::TurtlesError>> {
        let rpc_options = T::RpcOptions::default();
        self._turtles_impl(
            arg_foo,
            rpc_options,
        )
    }
}

impl<P, T, S> NestedContainersExt<T> for NestedContainersImpl<P, T, S>
where
    P: ::fbthrift::Protocol,
    T: ::fbthrift::Transport,
    P::Frame: ::fbthrift::Framing<DecBuf = ::fbthrift::FramingDecoded<T>>,
    ::fbthrift::ProtocolEncoded<P>: ::fbthrift::BufMutExt<Final = ::fbthrift::FramingEncodedFinal<T>>,
    P::Deserializer: ::std::marker::Send,
    S: ::fbthrift::help::Spawner,
{
    fn mapList_with_rpc_opts(
        &self,
        arg_foo: &::std::collections::BTreeMap<::std::primitive::i32, ::std::vec::Vec<::std::primitive::i32>>,
        rpc_options: T::RpcOptions,
    ) -> ::futures::future::BoxFuture<'static, ::std::result::Result<(), crate::errors::nested_containers::MapListError>> {
        self._mapList_impl(
            arg_foo,
            rpc_options,
        )
    }
    fn mapSet_with_rpc_opts(
        &self,
        arg_foo: &::std::collections::BTreeMap<::std::primitive::i32, ::std::collections::BTreeSet<::std::primitive::i32>>,
        rpc_options: T::RpcOptions,
    ) -> ::futures::future::BoxFuture<'static, ::std::result::Result<(), crate::errors::nested_containers::MapSetError>> {
        self._mapSet_impl(
            arg_foo,
            rpc_options,
        )
    }
    fn listMap_with_rpc_opts(
        &self,
        arg_foo: &[::std::collections::BTreeMap<::std::primitive::i32, ::std::primitive::i32>],
        rpc_options: T::RpcOptions,
    ) -> ::futures::future::BoxFuture<'static, ::std::result::Result<(), crate::errors::nested_containers::ListMapError>> {
        self._listMap_impl(
            arg_foo,
            rpc_options,
        )
    }
    fn listSet_with_rpc_opts(
        &self,
        arg_foo: &[::std::collections::BTreeSet<::std::primitive::i32>],
        rpc_options: T::RpcOptions,
    ) -> ::futures::future::BoxFuture<'static, ::std::result::Result<(), crate::errors::nested_containers::ListSetError>> {
        self._listSet_impl(
            arg_foo,
            rpc_options,
        )
    }
    fn turtles_with_rpc_opts(
        &self,
        arg_foo: &[::std::vec::Vec<::std::collections::BTreeMap<::std::primitive::i32, ::std::collections::BTreeMap<::std::primitive::i32, ::std::collections::BTreeSet<::std::primitive::i32>>>>],
        rpc_options: T::RpcOptions,
    ) -> ::futures::future::BoxFuture<'static, ::std::result::Result<(), crate::errors::nested_containers::TurtlesError>> {
        self._turtles_impl(
            arg_foo,
            rpc_options,
        )
    }

    fn transport(&self) -> &T {
      self.transport()
    }
}

#[allow(deprecated)]
impl<'a, S> NestedContainers for S
where
    S: ::std::convert::AsRef<dyn NestedContainers + 'a>,
    S: ::std::marker::Send,
{
    fn mapList(
        &self,
        arg_foo: &::std::collections::BTreeMap<::std::primitive::i32, ::std::vec::Vec<::std::primitive::i32>>,
    ) -> ::futures::future::BoxFuture<'static, ::std::result::Result<(), crate::errors::nested_containers::MapListError>> {
        self.as_ref().mapList(
            arg_foo,
        )
    }
    fn mapSet(
        &self,
        arg_foo: &::std::collections::BTreeMap<::std::primitive::i32, ::std::collections::BTreeSet<::std::primitive::i32>>,
    ) -> ::futures::future::BoxFuture<'static, ::std::result::Result<(), crate::errors::nested_containers::MapSetError>> {
        self.as_ref().mapSet(
            arg_foo,
        )
    }
    fn listMap(
        &self,
        arg_foo: &[::std::collections::BTreeMap<::std::primitive::i32, ::std::primitive::i32>],
    ) -> ::futures::future::BoxFuture<'static, ::std::result::Result<(), crate::errors::nested_containers::ListMapError>> {
        self.as_ref().listMap(
            arg_foo,
        )
    }
    fn listSet(
        &self,
        arg_foo: &[::std::collections::BTreeSet<::std::primitive::i32>],
    ) -> ::futures::future::BoxFuture<'static, ::std::result::Result<(), crate::errors::nested_containers::ListSetError>> {
        self.as_ref().listSet(
            arg_foo,
        )
    }
    fn turtles(
        &self,
        arg_foo: &[::std::vec::Vec<::std::collections::BTreeMap<::std::primitive::i32, ::std::collections::BTreeMap<::std::primitive::i32, ::std::collections::BTreeSet<::std::primitive::i32>>>>],
    ) -> ::futures::future::BoxFuture<'static, ::std::result::Result<(), crate::errors::nested_containers::TurtlesError>> {
        self.as_ref().turtles(
            arg_foo,
        )
    }
}

#[allow(deprecated)]
impl<S, T> NestedContainersExt<T> for S
where
    S: ::std::convert::AsRef<dyn NestedContainers + 'static>,
    S: ::std::convert::AsRef<dyn NestedContainersExt<T> + 'static>,
    S: ::std::marker::Send,
    T: ::fbthrift::Transport,
{
    fn mapList_with_rpc_opts(
        &self,
        arg_foo: &::std::collections::BTreeMap<::std::primitive::i32, ::std::vec::Vec<::std::primitive::i32>>,
        rpc_options: T::RpcOptions,
    ) -> ::futures::future::BoxFuture<'static, ::std::result::Result<(), crate::errors::nested_containers::MapListError>> {
        <Self as ::std::convert::AsRef<dyn NestedContainersExt<T>>>::as_ref(self).mapList_with_rpc_opts(
            arg_foo,
            rpc_options,
        )
    }
    fn mapSet_with_rpc_opts(
        &self,
        arg_foo: &::std::collections::BTreeMap<::std::primitive::i32, ::std::collections::BTreeSet<::std::primitive::i32>>,
        rpc_options: T::RpcOptions,
    ) -> ::futures::future::BoxFuture<'static, ::std::result::Result<(), crate::errors::nested_containers::MapSetError>> {
        <Self as ::std::convert::AsRef<dyn NestedContainersExt<T>>>::as_ref(self).mapSet_with_rpc_opts(
            arg_foo,
            rpc_options,
        )
    }
    fn listMap_with_rpc_opts(
        &self,
        arg_foo: &[::std::collections::BTreeMap<::std::primitive::i32, ::std::primitive::i32>],
        rpc_options: T::RpcOptions,
    ) -> ::futures::future::BoxFuture<'static, ::std::result::Result<(), crate::errors::nested_containers::ListMapError>> {
        <Self as ::std::convert::AsRef<dyn NestedContainersExt<T>>>::as_ref(self).listMap_with_rpc_opts(
            arg_foo,
            rpc_options,
        )
    }
    fn listSet_with_rpc_opts(
        &self,
        arg_foo: &[::std::collections::BTreeSet<::std::primitive::i32>],
        rpc_options: T::RpcOptions,
    ) -> ::futures::future::BoxFuture<'static, ::std::result::Result<(), crate::errors::nested_containers::ListSetError>> {
        <Self as ::std::convert::AsRef<dyn NestedContainersExt<T>>>::as_ref(self).listSet_with_rpc_opts(
            arg_foo,
            rpc_options,
        )
    }
    fn turtles_with_rpc_opts(
        &self,
        arg_foo: &[::std::vec::Vec<::std::collections::BTreeMap<::std::primitive::i32, ::std::collections::BTreeMap<::std::primitive::i32, ::std::collections::BTreeSet<::std::primitive::i32>>>>],
        rpc_options: T::RpcOptions,
    ) -> ::futures::future::BoxFuture<'static, ::std::result::Result<(), crate::errors::nested_containers::TurtlesError>> {
        <Self as ::std::convert::AsRef<dyn NestedContainersExt<T>>>::as_ref(self).turtles_with_rpc_opts(
            arg_foo,
            rpc_options,
        )
    }

    fn transport(&self) -> &T {
        <dyn NestedContainersExt<T> as NestedContainersExt<T>>::transport(<Self as ::std::convert::AsRef<dyn NestedContainersExt<T>>>::as_ref(self))
    }
}

#[derive(Clone)]
pub struct make_NestedContainers;

/// To be called by user directly setting up a client. Avoids
/// needing ClientFactory trait in scope, avoids unidiomatic
/// make_Trait name.
///
/// ```
/// # const _: &str = stringify! {
/// use bgs::client::BuckGraphService;
///
/// let protocol = BinaryProtocol::new();
/// let transport = HttpClient::new();
/// let client = <dyn BuckGraphService>::new(protocol, transport);
/// # };
/// ```
impl dyn NestedContainers {
    pub fn new<P, T>(
        protocol: P,
        transport: T,
    ) -> ::std::sync::Arc<impl NestedContainers + ::std::marker::Send + ::std::marker::Sync + 'static>
    where
        P: ::fbthrift::Protocol<Frame = T>,
        T: ::fbthrift::Transport,
        P::Deserializer: ::std::marker::Send,
    {
        let spawner = ::fbthrift::help::NoopSpawner;
        Self::with_spawner(protocol, transport, spawner)
    }

    pub fn with_spawner<P, T, S>(
        protocol: P,
        transport: T,
        spawner: S,
    ) -> ::std::sync::Arc<impl NestedContainers + ::std::marker::Send + ::std::marker::Sync + 'static>
    where
        P: ::fbthrift::Protocol<Frame = T>,
        T: ::fbthrift::Transport,
        P::Deserializer: ::std::marker::Send,
        S: ::fbthrift::help::Spawner,
    {
        let _ = protocol;
        let _ = spawner;
        ::std::sync::Arc::new(NestedContainersImpl::<P, T, S>::new(transport))
    }
}

impl<T> dyn NestedContainersExt<T>
where
    T: ::fbthrift::Transport,
{
    pub fn new<P>(
        protocol: P,
        transport: T,
    ) -> ::std::sync::Arc<impl NestedContainersExt<T> + ::std::marker::Send + ::std::marker::Sync + 'static>
    where
        P: ::fbthrift::Protocol<Frame = T>,
        P::Deserializer: ::std::marker::Send,
    {
        let spawner = ::fbthrift::help::NoopSpawner;
        Self::with_spawner(protocol, transport, spawner)
    }

    pub fn with_spawner<P, S>(
        protocol: P,
        transport: T,
        spawner: S,
    ) -> ::std::sync::Arc<impl NestedContainersExt<T> + ::std::marker::Send + ::std::marker::Sync + 'static>
    where
        P: ::fbthrift::Protocol<Frame = T>,
        P::Deserializer: ::std::marker::Send,
        S: ::fbthrift::help::Spawner,
    {
        let _ = protocol;
        let _ = spawner;
        ::std::sync::Arc::new(NestedContainersImpl::<P, T, S>::new(transport))
    }
}

pub type NestedContainersDynClient = <make_NestedContainers as ::fbthrift::ClientFactory>::Api;
pub type NestedContainersClient = ::std::sync::Arc<NestedContainersDynClient>;

/// The same thing, but to be called from generic contexts where we are
/// working with a type parameter `C: ClientFactory` to produce clients.
impl ::fbthrift::ClientFactory for make_NestedContainers {
    type Api = dyn NestedContainers + ::std::marker::Send + ::std::marker::Sync + 'static;

    fn with_spawner<P, T, S>(protocol: P, transport: T, spawner: S) -> ::std::sync::Arc<Self::Api>
    where
        P: ::fbthrift::Protocol<Frame = T>,
        T: ::fbthrift::Transport,
        P::Deserializer: ::std::marker::Send,
        S: ::fbthrift::help::Spawner,
    {
        <dyn NestedContainers>::with_spawner(protocol, transport, spawner)
    }
}

