#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#
from libc.stdint cimport (
    int8_t as cint8_t,
    int16_t as cint16_t,
    int32_t as cint32_t,
    int64_t as cint64_t,
)
from libcpp.memory cimport shared_ptr, make_shared, unique_ptr
from libcpp.string cimport string
from libcpp cimport bool as cbool
from cpython cimport bool as pbool
from libcpp.vector cimport vector
from libcpp.set cimport set as cset
from libcpp.map cimport map as cmap
from libcpp.utility cimport move as cmove
from cython.operator cimport dereference as deref, typeid
from cpython.ref cimport PyObject
from thrift.py3.client cimport cRequestChannel_ptr, makeClientWrapper, cClientWrapper
from thrift.py3.exceptions cimport try_make_shared_exception
from thrift.python.exceptions cimport create_py_exception
from folly cimport cFollyTry, cFollyUnit, c_unit
from folly.cast cimport down_cast_ptr
from libcpp.typeinfo cimport type_info
import thrift.py3.types
cimport thrift.py3.types
from thrift.py3.types cimport make_unique
import thrift.py3.client
cimport thrift.py3.client
from thrift.python.common cimport (
    RpcOptions as __RpcOptions,
    cThriftServiceMetadataResponse as __fbthrift_cThriftServiceMetadataResponse,
    ServiceMetadata,
    MetadataBox as __MetadataBox,
)

from folly.futures cimport bridgeFutureWith
from folly.executor cimport get_executor
cimport folly.iobuf as _fbthrift_iobuf
import folly.iobuf as _fbthrift_iobuf
from folly.iobuf cimport move as move_iobuf
cimport cython

import sys
import types as _py_types
from asyncio import get_event_loop as asyncio_get_event_loop, shield as asyncio_shield, InvalidStateError as asyncio_InvalidStateError

cimport apache.thrift.fixtures.types.module.types as _apache_thrift_fixtures_types_module_types
import apache.thrift.fixtures.types.module.types as _apache_thrift_fixtures_types_module_types
cimport apache.thrift.fixtures.types.included.types as _apache_thrift_fixtures_types_included_types
import apache.thrift.fixtures.types.included.types as _apache_thrift_fixtures_types_included_types

import apache.thrift.fixtures.types.module.services_reflection as _services_reflection
cimport apache.thrift.fixtures.types.module.services_reflection as _services_reflection

from apache.thrift.fixtures.types.module.clients_wrapper cimport cSomeServiceAsyncClient, cSomeServiceClientWrapper


cdef void SomeService_bounce_map_callback(
    cFollyTry[_apache_thrift_fixtures_types_module_types.std_unordered_map[cint32_t,string]]&& result,
    PyObject* userdata
) noexcept:
    client, pyfuture, options = <object> userdata  
    if result.hasException():
        pyfuture.set_exception(create_py_exception(result.exception(), <__RpcOptions>options))
    else:
        try:
            pyfuture.set_result(_apache_thrift_fixtures_types_module_types.std_unordered_map__Map__i32_string._fbthrift_create(make_shared[_apache_thrift_fixtures_types_module_types.std_unordered_map[cint32_t,string]](cmove(result.value()))))
        except Exception as ex:
            pyfuture.set_exception(ex.with_traceback(None))

cdef void SomeService_binary_keyed_map_callback(
    cFollyTry[cmap[string,cint64_t]]&& result,
    PyObject* userdata
) noexcept:
    client, pyfuture, options = <object> userdata  
    if result.hasException():
        pyfuture.set_exception(create_py_exception(result.exception(), <__RpcOptions>options))
    else:
        try:
            pyfuture.set_result(_apache_thrift_fixtures_types_module_types.Map__binary_i64._fbthrift_create(make_shared[cmap[string,cint64_t]](cmove(result.value()))))
        except Exception as ex:
            pyfuture.set_exception(ex.with_traceback(None))


cdef object _SomeService_annotations = _py_types.MappingProxyType({
})


@cython.auto_pickle(False)
cdef class SomeService(thrift.py3.client.Client):
    annotations = _SomeService_annotations

    cdef const type_info* _typeid(SomeService self):
        return &typeid(cSomeServiceAsyncClient)

    cdef bind_client(SomeService self, cRequestChannel_ptr&& channel):
        self._client = makeClientWrapper[cSomeServiceAsyncClient, cSomeServiceClientWrapper](
            cmove(channel)
        )

    @cython.always_allow_keywords(True)
    def bounce_map(
            SomeService self,
            m not None,
            __RpcOptions rpc_options=None
    ):
        if rpc_options is None:
            rpc_options = <__RpcOptions>__RpcOptions.__new__(__RpcOptions)
        if not isinstance(m, _apache_thrift_fixtures_types_module_types.std_unordered_map__Map__i32_string):
            m = _apache_thrift_fixtures_types_module_types.std_unordered_map__Map__i32_string(m)
        self._check_connect_future()
        __loop = asyncio_get_event_loop()
        __future = __loop.create_future()
        __userdata = (self, __future, rpc_options)
        bridgeFutureWith[_apache_thrift_fixtures_types_module_types.std_unordered_map[cint32_t,string]](
            self._executor,
            down_cast_ptr[cSomeServiceClientWrapper, cClientWrapper](self._client.get()).bounce_map(rpc_options._cpp_obj, 
                deref((<_apache_thrift_fixtures_types_module_types.std_unordered_map__Map__i32_string>m)._cpp_obj),
            ),
            SomeService_bounce_map_callback,
            <PyObject *> __userdata
        )
        return asyncio_shield(__future)

    @cython.always_allow_keywords(True)
    def binary_keyed_map(
            SomeService self,
            r not None,
            __RpcOptions rpc_options=None
    ):
        if rpc_options is None:
            rpc_options = <__RpcOptions>__RpcOptions.__new__(__RpcOptions)
        if not isinstance(r, _apache_thrift_fixtures_types_module_types.List__i64):
            r = _apache_thrift_fixtures_types_module_types.List__i64(r)
        self._check_connect_future()
        __loop = asyncio_get_event_loop()
        __future = __loop.create_future()
        __userdata = (self, __future, rpc_options)
        bridgeFutureWith[cmap[string,cint64_t]](
            self._executor,
            down_cast_ptr[cSomeServiceClientWrapper, cClientWrapper](self._client.get()).binary_keyed_map(rpc_options._cpp_obj, 
                deref((<_apache_thrift_fixtures_types_module_types.List__i64>r)._cpp_obj),
            ),
            SomeService_binary_keyed_map_callback,
            <PyObject *> __userdata
        )
        return asyncio_shield(__future)


    @classmethod
    def __get_reflection__(cls):
        return _services_reflection.get_reflection__SomeService(for_clients=True)

    @staticmethod
    def __get_metadata__():
        cdef __fbthrift_cThriftServiceMetadataResponse response
        ServiceMetadata[_services_reflection.cSomeServiceSvIf].gen(response)
        return __MetadataBox.box(cmove(deref(response.metadata_ref())))

    @staticmethod
    def __get_thrift_name__():
        return "module.SomeService"

