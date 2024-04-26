#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#
cimport cython as __cython
from cpython.object cimport PyTypeObject, Py_LT, Py_LE, Py_EQ, Py_NE, Py_GT, Py_GE
from libcpp.memory cimport shared_ptr, make_shared, unique_ptr
from libcpp.optional cimport optional as __optional
from libcpp.string cimport string
from libcpp cimport bool as cbool
from libcpp.iterator cimport inserter as cinserter
from libcpp.utility cimport move as cmove
from cpython cimport bool as pbool
from cython.operator cimport dereference as deref, preincrement as inc, address as ptr_address
import thrift.py3.types
from thrift.py3.types import _IsSet as _fbthrift_IsSet
from thrift.py3.types cimport make_unique
cimport thrift.py3.types
cimport thrift.py3.exceptions
from thrift.py3.std_libcpp cimport sv_to_str as __sv_to_str, string_view as __cstring_view
from thrift.py3.types cimport (
    cSetOp as __cSetOp,
    richcmp as __richcmp,
    set_op as __set_op,
    setcmp as __setcmp,
    list_index as __list_index,
    list_count as __list_count,
    list_slice as __list_slice,
    list_getitem as __list_getitem,
    set_iter as __set_iter,
    map_iter as __map_iter,
    map_contains as __map_contains,
    map_getitem as __map_getitem,
    reference_shared_ptr as __reference_shared_ptr,
    get_field_name_by_index as __get_field_name_by_index,
    reset_field as __reset_field,
    translate_cpp_enum_to_python,
    SetMetaClass as __SetMetaClass,
    const_pointer_cast,
    constant_shared_ptr,
    NOTSET as __NOTSET,
    EnumData as __EnumData,
    EnumFlagsData as __EnumFlagsData,
    UnionTypeEnumData as __UnionTypeEnumData,
    createEnumDataForUnionType as __createEnumDataForUnionType,
)
cimport thrift.py3.serializer as serializer
from thrift.python.protocol cimport Protocol as __Protocol
import folly.iobuf as _fbthrift_iobuf
from folly.optional cimport cOptional
from folly.memory cimport to_shared_ptr as __to_shared_ptr
from folly.range cimport Range as __cRange

import sys
from collections.abc import Sequence, Set, Mapping, Iterable
import weakref as __weakref
import builtins as _builtins



@__cython.auto_pickle(False)
cdef class std_unordered_map__Map__i32_string(thrift.py3.types.Map):
    def __init__(self, items=None):
        if isinstance(items, std_unordered_map__Map__i32_string):
            self._cpp_obj = (<std_unordered_map__Map__i32_string> items)._cpp_obj
        else:
            self._cpp_obj = std_unordered_map__Map__i32_string._make_instance(items)

    @staticmethod
    cdef _fbthrift_create(shared_ptr[std_unordered_map[cint32_t,string]] c_items):
        __fbthrift_inst = <std_unordered_map__Map__i32_string>std_unordered_map__Map__i32_string.__new__(std_unordered_map__Map__i32_string)
        __fbthrift_inst._cpp_obj = cmove(c_items)
        return __fbthrift_inst

    def __copy__(std_unordered_map__Map__i32_string self):
        cdef shared_ptr[std_unordered_map[cint32_t,string]] cpp_obj = make_shared[std_unordered_map[cint32_t,string]](
            deref(self._cpp_obj)
        )
        return std_unordered_map__Map__i32_string._fbthrift_create(cmove(cpp_obj))

    def __len__(self):
        return deref(self._cpp_obj).size()

    @staticmethod
    cdef shared_ptr[std_unordered_map[cint32_t,string]] _make_instance(object items) except *:
        cdef shared_ptr[std_unordered_map[cint32_t,string]] c_inst = make_shared[std_unordered_map[cint32_t,string]]()
        if items is not None:
            for key, item in items.items():
                if not isinstance(key, int):
                    raise TypeError(f"{key!r} is not of type int")
                key = <cint32_t> key
                if not isinstance(item, str):
                    raise TypeError(f"{item!r} is not of type str")

                deref(c_inst)[key] = item.encode('UTF-8')
        return c_inst

    cdef _check_key_type(self, key):
        if not self or key is None:
            return
        if isinstance(key, int):
            return key

    def __getitem__(self, key):
        err = KeyError(f'{key}')
        key = self._check_key_type(key)
        if key is None:
            raise err
        cdef cint32_t ckey = key
        if not __map_contains(self._cpp_obj, ckey):
            raise err
        cdef string citem
        __map_getitem(self._cpp_obj, ckey, citem)
        return bytes(citem).decode('UTF-8')

    def __iter__(self):
        if not self:
            return
        cdef __map_iter[std_unordered_map[cint32_t,string]] itr = __map_iter[std_unordered_map[cint32_t,string]](self._cpp_obj)
        cdef cint32_t citem = 0
        for i in range(deref(self._cpp_obj).size()):
            itr.genNextKey(self._cpp_obj, citem)
            yield citem

    def __contains__(self, key):
        key = self._check_key_type(key)
        if key is None:
            return False
        cdef cint32_t ckey = key
        return __map_contains(self._cpp_obj, ckey)

    def values(self):
        if not self:
            return
        cdef __map_iter[std_unordered_map[cint32_t,string]] itr = __map_iter[std_unordered_map[cint32_t,string]](self._cpp_obj)
        cdef string citem
        for i in range(deref(self._cpp_obj).size()):
            itr.genNextValue(self._cpp_obj, citem)
            yield bytes(citem).decode('UTF-8')

    def items(self):
        if not self:
            return
        cdef __map_iter[std_unordered_map[cint32_t,string]] itr = __map_iter[std_unordered_map[cint32_t,string]](self._cpp_obj)
        cdef cint32_t ckey = 0
        cdef string citem
        for i in range(deref(self._cpp_obj).size()):
            itr.genNextItem(self._cpp_obj, ckey, citem)
            yield (ckey, bytes(citem).decode('UTF-8'))

    @staticmethod
    def __get_reflection__():
        import importlib
        types_reflection = importlib.import_module(
            "apache.thrift.fixtures.types.included.types_reflection"
        )
        return types_reflection.get_reflection__std_unordered_map__Map__i32_string()

Mapping.register(std_unordered_map__Map__i32_string)

@__cython.auto_pickle(False)
cdef class List__std_unordered_map__Map__i32_string(thrift.py3.types.List):
    def __init__(self, items=None):
        if isinstance(items, List__std_unordered_map__Map__i32_string):
            self._cpp_obj = (<List__std_unordered_map__Map__i32_string> items)._cpp_obj
        else:
            self._cpp_obj = List__std_unordered_map__Map__i32_string._make_instance(items)

    @staticmethod
    cdef _fbthrift_create(shared_ptr[vector[std_unordered_map[cint32_t,string]]] c_items):
        __fbthrift_inst = <List__std_unordered_map__Map__i32_string>List__std_unordered_map__Map__i32_string.__new__(List__std_unordered_map__Map__i32_string)
        __fbthrift_inst._cpp_obj = cmove(c_items)
        return __fbthrift_inst

    def __copy__(List__std_unordered_map__Map__i32_string self):
        cdef shared_ptr[vector[std_unordered_map[cint32_t,string]]] cpp_obj = make_shared[vector[std_unordered_map[cint32_t,string]]](
            deref(self._cpp_obj)
        )
        return List__std_unordered_map__Map__i32_string._fbthrift_create(cmove(cpp_obj))

    def __len__(self):
        return deref(self._cpp_obj).size()

    @staticmethod
    cdef shared_ptr[vector[std_unordered_map[cint32_t,string]]] _make_instance(object items) except *:
        cdef shared_ptr[vector[std_unordered_map[cint32_t,string]]] c_inst = make_shared[vector[std_unordered_map[cint32_t,string]]]()
        if items is not None:
            for item in items:
                if item is None:
                    raise TypeError("None is not of the type _typing.Mapping[int, str]")
                if not isinstance(item, std_unordered_map__Map__i32_string):
                    item = std_unordered_map__Map__i32_string(item)
                deref(c_inst).push_back(deref((<std_unordered_map__Map__i32_string>item)._cpp_obj))
        return c_inst

    cdef _get_slice(self, slice index_obj):
        cdef int start, stop, step
        start, stop, step = index_obj.indices(deref(self._cpp_obj).size())
        return List__std_unordered_map__Map__i32_string._fbthrift_create(
            __list_slice[vector[std_unordered_map[cint32_t,string]]](self._cpp_obj, start, stop, step)
        )

    cdef _get_single_item(self, size_t index):
        cdef shared_ptr[std_unordered_map[cint32_t,string]] citem
        __list_getitem(self._cpp_obj, index, citem)
        return std_unordered_map__Map__i32_string._fbthrift_create(citem)

    cdef _check_item_type(self, item):
        if not self or item is None:
            return
        if isinstance(item, std_unordered_map__Map__i32_string):
            return item
        try:
            return std_unordered_map__Map__i32_string(item)
        except:
            pass

    def index(self, item, start=0, stop=None):
        err = ValueError(f'{item} is not in list')
        item = self._check_item_type(item)
        if item is None:
            raise err
        cdef (int, int, int) indices = slice(start, stop).indices(deref(self._cpp_obj).size())
        cdef std_unordered_map[cint32_t,string] citem = deref((<std_unordered_map__Map__i32_string>item)._cpp_obj)
        cdef __optional[size_t] found = __list_index[vector[std_unordered_map[cint32_t,string]]](self._cpp_obj, indices[0], indices[1], citem)
        if not found.has_value():
            raise err
        return found.value()

    def count(self, item):
        item = self._check_item_type(item)
        if item is None:
            return 0
        cdef std_unordered_map[cint32_t,string] citem = deref((<std_unordered_map__Map__i32_string>item)._cpp_obj)
        return __list_count[vector[std_unordered_map[cint32_t,string]]](self._cpp_obj, citem)

    @staticmethod
    def __get_reflection__():
        import importlib
        types_reflection = importlib.import_module(
            "apache.thrift.fixtures.types.included.types_reflection"
        )
        return types_reflection.get_reflection__List__std_unordered_map__Map__i32_string()


Sequence.register(List__std_unordered_map__Map__i32_string)

SomeMap = std_unordered_map__Map__i32_string
SomeListOfTypeMap = List__std_unordered_map__Map__i32_string
