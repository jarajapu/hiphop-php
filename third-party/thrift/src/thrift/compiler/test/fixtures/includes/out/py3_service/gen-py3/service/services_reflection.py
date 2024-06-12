#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

from thrift.py3.reflection import (
  ArgumentSpec as __ArgumentSpec,
  InterfaceSpec as __InterfaceSpec,
  MethodSpec as __MethodSpec,
  NumberType as __NumberType,
)

import folly.iobuf as _fbthrift_iobuf

import includes.types as _includes_types
import module.types as _module_types
import transitive.types as _transitive_types

import service.types as _service_types


def get_reflection__MyService(for_clients: bool):
    spec: __InterfaceSpec = __InterfaceSpec(
        name="MyService",
        methods=None,
        annotations={
        },
    )
    spec.add_method(
        __MethodSpec.__new__(
            __MethodSpec,
            name="query",
            arguments=(
                __ArgumentSpec.__new__(
                    __ArgumentSpec,
                    name="s",
                    type=_module_types.MyStruct,
                    kind=__NumberType.NOT_A_NUMBER,
                    annotations={
                    },
                ),
                __ArgumentSpec.__new__(
                    __ArgumentSpec,
                    name="i",
                    type=_includes_types.Included,
                    kind=__NumberType.NOT_A_NUMBER,
                    annotations={
                    },
                ),
            ),
            result=None,
            result_kind=__NumberType.NOT_A_NUMBER,
            exceptions=(
            ),
            annotations={
            },
        )
    )
    spec.add_method(
        __MethodSpec.__new__(
            __MethodSpec,
            name="has_arg_docs",
            arguments=(
                __ArgumentSpec.__new__(
                    __ArgumentSpec,
                    name="s",
                    type=_module_types.MyStruct,
                    kind=__NumberType.NOT_A_NUMBER,
                    annotations={
                    },
                ),
                __ArgumentSpec.__new__(
                    __ArgumentSpec,
                    name="i",
                    type=_includes_types.Included,
                    kind=__NumberType.NOT_A_NUMBER,
                    annotations={
                    },
                ),
            ),
            result=None,
            result_kind=__NumberType.NOT_A_NUMBER,
            exceptions=(
            ),
            annotations={
            },
        )
    )
    return spec
