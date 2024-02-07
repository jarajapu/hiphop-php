#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#
cimport cython as __cython
from cython.operator cimport dereference as deref
from libcpp.memory cimport unique_ptr, shared_ptr
from thrift.py3.types cimport assign_unique_ptr, assign_shared_ptr, assign_shared_const_ptr, make_unique

cimport thrift.py3.types
from thrift.py3.types cimport (
    reset_field as __reset_field,
    StructFieldsSetter as __StructFieldsSetter
)

from thrift.py3.types cimport const_pointer_cast, BadEnum as _fbthrift_BadEnum


@__cython.auto_pickle(False)
cdef class __MyStruct_FieldsSetter(__StructFieldsSetter):

    @staticmethod
    cdef __MyStruct_FieldsSetter _fbthrift_create(_test_fixtures_enumstrict_module_types.cMyStruct* struct_cpp_obj):
        cdef __MyStruct_FieldsSetter __fbthrift_inst = __MyStruct_FieldsSetter.__new__(__MyStruct_FieldsSetter)
        __fbthrift_inst._struct_cpp_obj = struct_cpp_obj
        __fbthrift_inst._setters[__cstring_view(<const char*>"myEnum")] = __MyStruct_FieldsSetter._set_field_0
        __fbthrift_inst._setters[__cstring_view(<const char*>"myBigEnum")] = __MyStruct_FieldsSetter._set_field_1
        return __fbthrift_inst

    cdef void set_field(__MyStruct_FieldsSetter self, const char* name, object value) except *:
        cdef __cstring_view cname = __cstring_view(name)
        cdef cumap[__cstring_view, __MyStruct_FieldsSetterFunc].iterator found = self._setters.find(cname)
        if found == self._setters.end():
            raise TypeError(f"invalid field name {name.decode('utf-8')}")
        deref(found).second(self, value)

    cdef void _set_field_0(self, _fbthrift_value) except *:
        # for field myEnum
        if _fbthrift_value is None:
            __reset_field[_test_fixtures_enumstrict_module_types.cMyStruct](deref(self._struct_cpp_obj), 0)
            return
        if not isinstance(_fbthrift_value, _fbthrift_BadEnum) and not isinstance(_fbthrift_value, _test_fixtures_enumstrict_module_types.MyEnum):
            raise TypeError(f'field myEnum value: {repr(_fbthrift_value)} is not of the enum type { _test_fixtures_enumstrict_module_types.MyEnum }.')
        deref(self._struct_cpp_obj).myEnum_ref().assign(<_test_fixtures_enumstrict_module_types.cMyEnum><int>_fbthrift_value)

    cdef void _set_field_1(self, _fbthrift_value) except *:
        # for field myBigEnum
        if _fbthrift_value is None:
            __reset_field[_test_fixtures_enumstrict_module_types.cMyStruct](deref(self._struct_cpp_obj), 1)
            return
        if not isinstance(_fbthrift_value, _fbthrift_BadEnum) and not isinstance(_fbthrift_value, _test_fixtures_enumstrict_module_types.MyBigEnum):
            raise TypeError(f'field myBigEnum value: {repr(_fbthrift_value)} is not of the enum type { _test_fixtures_enumstrict_module_types.MyBigEnum }.')
        deref(self._struct_cpp_obj).myBigEnum_ref().assign(<_test_fixtures_enumstrict_module_types.cMyBigEnum><int>_fbthrift_value)

