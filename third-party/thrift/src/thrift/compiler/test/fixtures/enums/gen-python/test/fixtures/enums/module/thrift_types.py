#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#

from __future__ import annotations

import folly.iobuf as _fbthrift_iobuf
import thrift.python.types as _fbthrift_python_types
import thrift.python.exceptions as _fbthrift_python_exceptions


import facebook.thrift.annotation.thrift.thrift_types


class SomeStruct(metaclass=_fbthrift_python_types.StructMeta):
    _fbthrift_SPEC = (
        (
            1,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "reasonable",  # name
            lambda: _fbthrift_python_types.EnumTypeInfo(Metasyntactic),  # typeinfo
            lambda: Metasyntactic.FOO,  # default value
            None,  # adapter info
        ),
        (
            2,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "fine",  # name
            lambda: _fbthrift_python_types.EnumTypeInfo(Metasyntactic),  # typeinfo
            lambda: Metasyntactic.BAR,  # default value
            None,  # adapter info
        ),
        (
            3,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "questionable",  # name
            lambda: _fbthrift_python_types.EnumTypeInfo(Metasyntactic),  # typeinfo
            lambda: _fbthrift_python_types.BadEnum(Metasyntactic, -1),  # default value
            None,  # adapter info
        ),
        (
            4,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "tags",  # name
            lambda: _fbthrift_python_types.SetTypeInfo(_fbthrift_python_types.typeinfo_i32),  # typeinfo
            lambda: _fbthrift_python_types.Set(_fbthrift_python_types.typeinfo_i32, ()),  # default value
            None,  # adapter info
        ),
    )

    @staticmethod
    def __get_thrift_name__() -> str:
        return "module.SomeStruct"

    @staticmethod
    def __get_thrift_uri__():
        return "test.dev/fixtures/enums/SomeStruct"

    @staticmethod
    def __get_metadata__():
        return _fbthrift_metadata__struct_SomeStruct()

    def _to_python(self):
        return self

    def _to_py3(self):
        import importlib
        py3_types = importlib.import_module("test.fixtures.enums.module.types")
        import thrift.py3.converter
        return thrift.py3.converter.to_py3_struct(py3_types.SomeStruct, self)

    def _to_py_deprecated(self):
        import importlib
        py_deprecated_types = importlib.import_module("module.ttypes")
        import thrift.util.converter
        return thrift.util.converter.to_py_struct(py_deprecated_types.SomeStruct, self)


class MyStruct(metaclass=_fbthrift_python_types.StructMeta):
    _fbthrift_SPEC = (
        (
            1,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "me2_3",  # name
            lambda: _fbthrift_python_types.EnumTypeInfo(MyEnum2),  # typeinfo
            lambda: _fbthrift_python_types.BadEnum(MyEnum2, 3),  # default value
            None,  # adapter info
        ),
        (
            2,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "me3_n3",  # name
            lambda: _fbthrift_python_types.EnumTypeInfo(MyEnum3),  # typeinfo
            lambda: _fbthrift_python_types.BadEnum(MyEnum3, -3),  # default value
            None,  # adapter info
        ),
        (
            4,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "me1_t1",  # name
            lambda: _fbthrift_python_types.EnumTypeInfo(MyEnum1),  # typeinfo
            lambda: MyEnum1.ME1_1,  # default value
            None,  # adapter info
        ),
        (
            6,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "me1_t2",  # name
            lambda: _fbthrift_python_types.EnumTypeInfo(MyEnum1),  # typeinfo
            lambda: MyEnum1.ME1_1,  # default value
            None,  # adapter info
        ),
    )

    @staticmethod
    def __get_thrift_name__() -> str:
        return "module.MyStruct"

    @staticmethod
    def __get_thrift_uri__():
        return "test.dev/fixtures/enums/MyStruct"

    @staticmethod
    def __get_metadata__():
        return _fbthrift_metadata__struct_MyStruct()

    def _to_python(self):
        return self

    def _to_py3(self):
        import importlib
        py3_types = importlib.import_module("test.fixtures.enums.module.types")
        import thrift.py3.converter
        return thrift.py3.converter.to_py3_struct(py3_types.MyStruct, self)

    def _to_py_deprecated(self):
        import importlib
        py_deprecated_types = importlib.import_module("module.ttypes")
        import thrift.util.converter
        return thrift.util.converter.to_py_struct(py_deprecated_types.MyStruct, self)

# This unfortunately has to be down here to prevent circular imports
import test.fixtures.enums.module.thrift_metadata

class Metasyntactic(_fbthrift_python_types.Enum, int):
    FOO = 1
    BAR = 2
    BAZ = 3
    BAX = 4
    Unspecified = 0
    @staticmethod
    def __get_thrift_name__() -> str:
        return "module.Metasyntactic"

    @staticmethod
    def __get_thrift_uri__():
        return "test.dev/fixtures/enums/Metasyntactic"

    @staticmethod
    def __get_metadata__():
        return test.fixtures.enums.module.thrift_metadata.gen_metadata_enum_Metasyntactic()

    def _to_python(self):
        return self

    def _to_py3(self):
        import importlib
        py3_types = importlib.import_module("test.fixtures.enums.module.types")
        return py3_types.Metasyntactic(self.value)

    def _to_py_deprecated(self):
        return self.value
class MyEnum1(_fbthrift_python_types.Enum, int):
    ME1_1 = 1
    ME1_2 = 2
    ME1_3 = 3
    ME1_5 = 5
    ME1_6 = 6
    ME1_0 = 0
    @staticmethod
    def __get_thrift_name__() -> str:
        return "module.MyEnum1"

    @staticmethod
    def __get_thrift_uri__():
        return "test.dev/fixtures/enums/MyEnum1"

    @staticmethod
    def __get_metadata__():
        return test.fixtures.enums.module.thrift_metadata.gen_metadata_enum_MyEnum1()

    def _to_python(self):
        return self

    def _to_py3(self):
        import importlib
        py3_types = importlib.import_module("test.fixtures.enums.module.types")
        return py3_types.MyEnum1(self.value)

    def _to_py_deprecated(self):
        return self.value
class MyEnum2(_fbthrift_python_types.Enum, int):
    ME2_0 = 0
    ME2_1 = 1
    ME2_2 = 2
    @staticmethod
    def __get_thrift_name__() -> str:
        return "module.MyEnum2"

    @staticmethod
    def __get_thrift_uri__():
        return "test.dev/fixtures/enums/MyEnum2"

    @staticmethod
    def __get_metadata__():
        return test.fixtures.enums.module.thrift_metadata.gen_metadata_enum_MyEnum2()

    def _to_python(self):
        return self

    def _to_py3(self):
        import importlib
        py3_types = importlib.import_module("test.fixtures.enums.module.types")
        return py3_types.MyEnum2(self.value)

    def _to_py_deprecated(self):
        return self.value
class MyEnum3(_fbthrift_python_types.Enum, int):
    ME3_0 = 0
    ME3_1 = 1
    ME3_N2 = -2
    ME3_N1 = -1
    ME3_9 = 9
    ME3_10 = 10
    @staticmethod
    def __get_thrift_name__() -> str:
        return "module.MyEnum3"

    @staticmethod
    def __get_thrift_uri__():
        return "test.dev/fixtures/enums/MyEnum3"

    @staticmethod
    def __get_metadata__():
        return test.fixtures.enums.module.thrift_metadata.gen_metadata_enum_MyEnum3()

    def _to_python(self):
        return self

    def _to_py3(self):
        import importlib
        py3_types = importlib.import_module("test.fixtures.enums.module.types")
        return py3_types.MyEnum3(self.value)

    def _to_py_deprecated(self):
        return self.value
class MyEnum4(_fbthrift_python_types.Enum, int):
    ME4_A = 2147483645
    ME4_B = 2147483646
    ME4_C = 2147483647
    ME4_D = -2147483648
    Unspecified = 0
    @staticmethod
    def __get_thrift_name__() -> str:
        return "module.MyEnum4"

    @staticmethod
    def __get_thrift_uri__():
        return "test.dev/fixtures/enums/MyEnum4"

    @staticmethod
    def __get_metadata__():
        return test.fixtures.enums.module.thrift_metadata.gen_metadata_enum_MyEnum4()

    def _to_python(self):
        return self

    def _to_py3(self):
        import importlib
        py3_types = importlib.import_module("test.fixtures.enums.module.types")
        return py3_types.MyEnum4(self.value)

    def _to_py_deprecated(self):
        return self.value
class MyBitmaskEnum1(_fbthrift_python_types.Enum, int):
    ONE = 1
    TWO = 2
    FOUR = 4
    Unspecified = 0
    @staticmethod
    def __get_thrift_name__() -> str:
        return "module.MyBitmaskEnum1"

    @staticmethod
    def __get_thrift_uri__():
        return "test.dev/fixtures/enums/MyBitmaskEnum1"

    @staticmethod
    def __get_metadata__():
        return test.fixtures.enums.module.thrift_metadata.gen_metadata_enum_MyBitmaskEnum1()

    def _to_python(self):
        return self

    def _to_py3(self):
        import importlib
        py3_types = importlib.import_module("test.fixtures.enums.module.types")
        return py3_types.MyBitmaskEnum1(self.value)

    def _to_py_deprecated(self):
        return self.value
class MyBitmaskEnum2(_fbthrift_python_types.Enum, int):
    ONE = 1
    TWO = 2
    FOUR = 4
    Unspecified = 0
    @staticmethod
    def __get_thrift_name__() -> str:
        return "module.MyBitmaskEnum2"

    @staticmethod
    def __get_thrift_uri__():
        return "test.dev/fixtures/enums/MyBitmaskEnum2"

    @staticmethod
    def __get_metadata__():
        return test.fixtures.enums.module.thrift_metadata.gen_metadata_enum_MyBitmaskEnum2()

    def _to_python(self):
        return self

    def _to_py3(self):
        import importlib
        py3_types = importlib.import_module("test.fixtures.enums.module.types")
        return py3_types.MyBitmaskEnum2(self.value)

    def _to_py_deprecated(self):
        return self.value

_fbthrift_all_enums = [
    Metasyntactic,
    MyEnum1,
    MyEnum2,
    MyEnum3,
    MyEnum4,
    MyBitmaskEnum1,
    MyBitmaskEnum2,
]

def _fbthrift_metadata__struct_SomeStruct():
    return test.fixtures.enums.module.thrift_metadata.gen_metadata_struct_SomeStruct()
def _fbthrift_metadata__struct_MyStruct():
    return test.fixtures.enums.module.thrift_metadata.gen_metadata_struct_MyStruct()

_fbthrift_all_structs = [
    SomeStruct,
    MyStruct,
]
_fbthrift_python_types.fill_specs(*_fbthrift_all_structs)
