
#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#

from thrift.python.capi.cpp_converter cimport cpp_to_python, python_to_cpp

cdef extern from "thrift/compiler/test/fixtures/namespace_from_package/gen-python-capi/module/thrift_types_capi.h":
    pass

cdef cFoo Foo_convert_to_cpp(object inst) except *:
    return python_to_cpp[cFoo](inst)

cdef object Foo_from_cpp(const cFoo& c_struct):
    return cpp_to_python[cFoo](c_struct)

