
#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#

from thrift.python.capi.cpp_converter cimport cpp_to_python, python_to_cpp

cdef extern from "thrift/compiler/test/fixtures/basic/gen-python-capi/module/thrift_types_capi.h":
    pass

cdef cMyStruct MyStruct_convert_to_cpp(object inst) except *:
    return python_to_cpp[cMyStruct](inst)

cdef object MyStruct_from_cpp(const cMyStruct& c_struct):
    return cpp_to_python[cMyStruct](c_struct)

cdef cMyDataItem MyDataItem_convert_to_cpp(object inst) except *:
    return python_to_cpp[cMyDataItem](inst)

cdef object MyDataItem_from_cpp(const cMyDataItem& c_struct):
    return cpp_to_python[cMyDataItem](c_struct)

cdef cMyUnion MyUnion_convert_to_cpp(object inst) except *:
    return python_to_cpp[cMyUnion](inst)

cdef object MyUnion_from_cpp(const cMyUnion& c_struct):
    return cpp_to_python[cMyUnion](c_struct)

cdef cReservedKeyword ReservedKeyword_convert_to_cpp(object inst) except *:
    return python_to_cpp[cReservedKeyword](inst)

cdef object ReservedKeyword_from_cpp(const cReservedKeyword& c_struct):
    return cpp_to_python[cReservedKeyword](c_struct)

cdef cUnionToBeRenamed UnionToBeRenamed_convert_to_cpp(object inst) except *:
    return python_to_cpp[cUnionToBeRenamed](inst)

cdef object UnionToBeRenamed_from_cpp(const cUnionToBeRenamed& c_struct):
    return cpp_to_python[cUnionToBeRenamed](c_struct)

