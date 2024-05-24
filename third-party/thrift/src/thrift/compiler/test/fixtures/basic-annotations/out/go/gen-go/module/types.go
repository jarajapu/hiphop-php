// @generated by Thrift for [[[ program path ]]]
// This file is probably not the place you want to edit!

package module // [[[ program thrift source path ]]]

import (
    "fmt"
    "strings"

    thrift "github.com/facebook/fbthrift/thrift/lib/go/thrift"
)

// (needed to ensure safety because of naive import list construction)
var _ = fmt.Printf
var _ = strings.Split
var _ = thrift.ZERO


type IncredibleStruct = MyStruct

func NewIncredibleStruct() *IncredibleStruct {
    return NewMyStruct()
}

func WriteIncredibleStruct(item *IncredibleStruct, p thrift.Format) error {
    if err := item.Write(p); err != nil {
    return err
}
    return nil
}

func ReadIncredibleStruct(p thrift.Format) (IncredibleStruct, error) {
    var decodeResult IncredibleStruct
    decodeErr := func() error {
        result := *NewMyStruct()
err := result.Read(p)
if err != nil {
    return err
}
        decodeResult = result
        return nil
    }()
    return decodeResult, decodeErr
}

type BrilliantStruct = MyStruct

func NewBrilliantStruct() *BrilliantStruct {
    return NewMyStruct()
}

func WriteBrilliantStruct(item *BrilliantStruct, p thrift.Format) error {
    if err := item.Write(p); err != nil {
    return err
}
    return nil
}

func ReadBrilliantStruct(p thrift.Format) (BrilliantStruct, error) {
    var decodeResult BrilliantStruct
    decodeErr := func() error {
        result := *NewMyStruct()
err := result.Read(p)
if err != nil {
    return err
}
        decodeResult = result
        return nil
    }()
    return decodeResult, decodeErr
}

type ListString_6884 = []string

func NewListString_6884() ListString_6884 {
    return make([]string, 0)
}

func WriteListString_6884(item ListString_6884, p thrift.Format) error {
    if err := p.WriteListBegin(thrift.STRING, len(item)); err != nil {
    return thrift.PrependError("error writing list begin: ", err)
}
for _, v := range item {
    {
        item := v
        if err := p.WriteString(item); err != nil {
    return err
}
    }
}
if err := p.WriteListEnd(); err != nil {
    return thrift.PrependError("error writing list end: ", err)
}
    return nil
}

func ReadListString_6884(p thrift.Format) (ListString_6884, error) {
    var decodeResult ListString_6884
    decodeErr := func() error {
        _ /* elemType */, size, err := p.ReadListBegin()
if err != nil {
    return thrift.PrependError("error reading list begin: ", err)
}

listResult := make([]string, 0, size)
for i := 0; i < size; i++ {
    var elem string
    {
        result, err := p.ReadString()
if err != nil {
    return err
}
        elem = result
    }
    listResult = append(listResult, elem)
}

if err := p.ReadListEnd(); err != nil {
    return thrift.PrependError("error reading list end: ", err)
}
result := listResult
        decodeResult = result
        return nil
    }()
    return decodeResult, decodeErr
}

type MyEnum int32

const (
    MyEnum_MyValue1 MyEnum = 0
    MyEnum_MyValue2 MyEnum = 1
    MyEnum_DOMAIN MyEnum = 2
)

// Enum value maps for MyEnum
var (
    MyEnumToName = map[MyEnum]string {
        MyEnum_MyValue1: "MyValue1",
        MyEnum_MyValue2: "MyValue2",
        MyEnum_DOMAIN: "DOMAIN",
    }

    MyEnumToValue = map[string]MyEnum {
        "MyValue1": MyEnum_MyValue1,
        "MyValue2": MyEnum_MyValue2,
        "DOMAIN": MyEnum_DOMAIN,
    }
)

func (x MyEnum) String() string {
    if v, ok := MyEnumToName[x]; ok {
        return v
    }
    return "<UNSET>"
}

func (x MyEnum) Ptr() *MyEnum {
    return &x
}

// Deprecated: Use MyEnumToValue instead (e.g. `x, ok := MyEnumToValue["name"]`).
func MyEnumFromString(s string) (MyEnum, error) {
    if v, ok := MyEnumToValue[s]; ok {
        return v, nil
    }
    return MyEnum(0), fmt.Errorf("not a valid MyEnum string")
}


type MyStructNestedAnnotation struct {
    Name string `thrift:"name,1" json:"name" db:"name"`
}
// Compile time interface enforcer
var _ thrift.Struct = (*MyStructNestedAnnotation)(nil)

func NewMyStructNestedAnnotation() *MyStructNestedAnnotation {
    return (&MyStructNestedAnnotation{}).
        SetNameNonCompat("")
}

func (x *MyStructNestedAnnotation) GetName() string {
    return x.Name
}

func (x *MyStructNestedAnnotation) SetNameNonCompat(value string) *MyStructNestedAnnotation {
    x.Name = value
    return x
}

func (x *MyStructNestedAnnotation) SetName(value string) *MyStructNestedAnnotation {
    x.Name = value
    return x
}

func (x *MyStructNestedAnnotation) writeField1(p thrift.Format) error {  // Name
    if err := p.WriteFieldBegin("name", thrift.STRING, 1); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.Name
    if err := p.WriteString(item); err != nil {
    return err
}

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *MyStructNestedAnnotation) readField1(p thrift.Format) error {  // Name
    result, err := p.ReadString()
if err != nil {
    return err
}

    x.Name = result
    return nil
}

func (x *MyStructNestedAnnotation) toString1() string {  // Name
    return fmt.Sprintf("%v", x.Name)
}



func (x *MyStructNestedAnnotation) Write(p thrift.Format) error {
    if err := p.WriteStructBegin("MyStructNestedAnnotation"); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", x), err)
    }

    if err := x.writeField1(p); err != nil {
        return err
    }

    if err := p.WriteFieldStop(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field stop error: ", x), err)
    }

    if err := p.WriteStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct end error: ", x), err)
    }
    return nil
}

func (x *MyStructNestedAnnotation) Read(p thrift.Format) error {
    if _, err := p.ReadStructBegin(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read error: ", x), err)
    }

    for {
        _, wireType, id, err := p.ReadFieldBegin()
        if err != nil {
            return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", x, id), err)
        }

        if wireType == thrift.STOP {
            break;
        }

        switch {
        case (id == 1 && wireType == thrift.Type(thrift.STRING)):  // name
            if err := x.readField1(p); err != nil {
                return err
            }
        default:
            if err := p.Skip(wireType); err != nil {
                return err
            }
        }

        if err := p.ReadFieldEnd(); err != nil {
            return err
        }
    }

    if err := p.ReadStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", x), err)
    }

    return nil
}

func (x *MyStructNestedAnnotation) String() string {
    if x == nil {
        return "<nil>"
    }

    var sb strings.Builder

    sb.WriteString("MyStructNestedAnnotation({")
    sb.WriteString(fmt.Sprintf("Name:%s", x.toString1()))
    sb.WriteString("})")

    return sb.String()
}

type MyUnion struct {
}
// Compile time interface enforcer
var _ thrift.Struct = (*MyUnion)(nil)

func NewMyUnion() *MyUnion {
    return (&MyUnion{})
}

func (x *MyUnion) countSetFields() int {
    count := int(0)
    return count
}

func (x *MyUnion) CountSetFieldsMyUnion() int {
    return x.countSetFields()
}



func (x *MyUnion) Write(p thrift.Format) error {
    if countSet := x.countSetFields(); countSet > 1 {
        return fmt.Errorf("%T write union: no more than one field must be set (%d set).", x, countSet)
    }
    if err := p.WriteStructBegin("MyUnion"); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", x), err)
    }

    if err := p.WriteFieldStop(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field stop error: ", x), err)
    }

    if err := p.WriteStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct end error: ", x), err)
    }
    return nil
}

func (x *MyUnion) Read(p thrift.Format) error {
    if _, err := p.ReadStructBegin(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read error: ", x), err)
    }

    for {
        _, wireType, id, err := p.ReadFieldBegin()
        if err != nil {
            return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", x, id), err)
        }

        if wireType == thrift.STOP {
            break;
        }

        switch {
        default:
            if err := p.Skip(wireType); err != nil {
                return err
            }
        }

        if err := p.ReadFieldEnd(); err != nil {
            return err
        }
    }

    if err := p.ReadStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", x), err)
    }

    return nil
}

func (x *MyUnion) String() string {
    if x == nil {
        return "<nil>"
    }

    var sb strings.Builder

    sb.WriteString("MyUnion({")
    sb.WriteString("})")

    return sb.String()
}

type MyException struct {
}
// Compile time interface enforcer
var _ thrift.Struct = (*MyException)(nil)

func NewMyException() *MyException {
    return (&MyException{})
}



func (x *MyException) Write(p thrift.Format) error {
    if err := p.WriteStructBegin("MyException"); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", x), err)
    }

    if err := p.WriteFieldStop(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field stop error: ", x), err)
    }

    if err := p.WriteStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct end error: ", x), err)
    }
    return nil
}

func (x *MyException) Read(p thrift.Format) error {
    if _, err := p.ReadStructBegin(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read error: ", x), err)
    }

    for {
        _, wireType, id, err := p.ReadFieldBegin()
        if err != nil {
            return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", x, id), err)
        }

        if wireType == thrift.STOP {
            break;
        }

        switch {
        default:
            if err := p.Skip(wireType); err != nil {
                return err
            }
        }

        if err := p.ReadFieldEnd(); err != nil {
            return err
        }
    }

    if err := p.ReadStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", x), err)
    }

    return nil
}

func (x *MyException) String() string {
    if x == nil {
        return "<nil>"
    }

    var sb strings.Builder

    sb.WriteString("MyException({")
    sb.WriteString("})")

    return sb.String()
}
func (x *MyException) Error() string {
    return x.String()
}

type MyStruct struct {
    AbstractName string `thrift:"abstract,1" tag:"some_abstract"`
    MajorVer int64 `thrift:"major,2" json:"major" db:"major"`
    AnnotationWithQuote string `thrift:"annotation_with_quote,3" tag:"somevalue"`
    Class_ string `thrift:"class_,4" json:"class_" db:"class_"`
    AnnotationWithTrailingComma string `thrift:"annotation_with_trailing_comma,5" json:"annotation_with_trailing_comma" db:"annotation_with_trailing_comma"`
    EmptyAnnotations string `thrift:"empty_annotations,6" json:"empty_annotations" db:"empty_annotations"`
    MyEnum MyEnum `thrift:"my_enum,7" json:"my_enum" db:"my_enum"`
    CppTypeAnnotation ListString_6884 `thrift:"cpp_type_annotation,8" json:"cpp_type_annotation" db:"cpp_type_annotation"`
    MyUnion *MyUnion `thrift:"my_union,9" json:"my_union" db:"my_union"`
}
// Compile time interface enforcer
var _ thrift.Struct = (*MyStruct)(nil)

func NewMyStruct() *MyStruct {
    return (&MyStruct{}).
        SetAbstractNameNonCompat("").
        SetMajorVerNonCompat(0).
        SetAnnotationWithQuoteNonCompat("").
        SetClass_NonCompat("").
        SetAnnotationWithTrailingCommaNonCompat("").
        SetEmptyAnnotationsNonCompat("").
        SetMyEnumNonCompat(0).
        SetCppTypeAnnotationNonCompat(NewListString_6884()).
        SetMyUnionNonCompat(*NewMyUnion())
}

func (x *MyStruct) GetAbstractName() string {
    return x.AbstractName
}

func (x *MyStruct) GetMajorVer() int64 {
    return x.MajorVer
}

func (x *MyStruct) GetAnnotationWithQuote() string {
    return x.AnnotationWithQuote
}

func (x *MyStruct) GetClass_() string {
    return x.Class_
}

func (x *MyStruct) GetAnnotationWithTrailingComma() string {
    return x.AnnotationWithTrailingComma
}

func (x *MyStruct) GetEmptyAnnotations() string {
    return x.EmptyAnnotations
}

func (x *MyStruct) GetMyEnum() MyEnum {
    return x.MyEnum
}

func (x *MyStruct) GetCppTypeAnnotation() ListString_6884 {
    if !x.IsSetCppTypeAnnotation() {
        return NewListString_6884()
    }

    return x.CppTypeAnnotation
}

func (x *MyStruct) GetMyUnion() *MyUnion {
    if !x.IsSetMyUnion() {
        return nil
    }

    return x.MyUnion
}

func (x *MyStruct) SetAbstractNameNonCompat(value string) *MyStruct {
    x.AbstractName = value
    return x
}

func (x *MyStruct) SetAbstractName(value string) *MyStruct {
    x.AbstractName = value
    return x
}

func (x *MyStruct) SetMajorVerNonCompat(value int64) *MyStruct {
    x.MajorVer = value
    return x
}

func (x *MyStruct) SetMajorVer(value int64) *MyStruct {
    x.MajorVer = value
    return x
}

func (x *MyStruct) SetAnnotationWithQuoteNonCompat(value string) *MyStruct {
    x.AnnotationWithQuote = value
    return x
}

func (x *MyStruct) SetAnnotationWithQuote(value string) *MyStruct {
    x.AnnotationWithQuote = value
    return x
}

func (x *MyStruct) SetClass_NonCompat(value string) *MyStruct {
    x.Class_ = value
    return x
}

func (x *MyStruct) SetClass_(value string) *MyStruct {
    x.Class_ = value
    return x
}

func (x *MyStruct) SetAnnotationWithTrailingCommaNonCompat(value string) *MyStruct {
    x.AnnotationWithTrailingComma = value
    return x
}

func (x *MyStruct) SetAnnotationWithTrailingComma(value string) *MyStruct {
    x.AnnotationWithTrailingComma = value
    return x
}

func (x *MyStruct) SetEmptyAnnotationsNonCompat(value string) *MyStruct {
    x.EmptyAnnotations = value
    return x
}

func (x *MyStruct) SetEmptyAnnotations(value string) *MyStruct {
    x.EmptyAnnotations = value
    return x
}

func (x *MyStruct) SetMyEnumNonCompat(value MyEnum) *MyStruct {
    x.MyEnum = value
    return x
}

func (x *MyStruct) SetMyEnum(value MyEnum) *MyStruct {
    x.MyEnum = value
    return x
}

func (x *MyStruct) SetCppTypeAnnotationNonCompat(value ListString_6884) *MyStruct {
    x.CppTypeAnnotation = value
    return x
}

func (x *MyStruct) SetCppTypeAnnotation(value ListString_6884) *MyStruct {
    x.CppTypeAnnotation = value
    return x
}

func (x *MyStruct) SetMyUnionNonCompat(value MyUnion) *MyStruct {
    x.MyUnion = &value
    return x
}

func (x *MyStruct) SetMyUnion(value *MyUnion) *MyStruct {
    x.MyUnion = value
    return x
}

func (x *MyStruct) IsSetCppTypeAnnotation() bool {
    return x != nil && x.CppTypeAnnotation != nil
}

func (x *MyStruct) IsSetMyUnion() bool {
    return x != nil && x.MyUnion != nil
}

func (x *MyStruct) writeField1(p thrift.Format) error {  // AbstractName
    if err := p.WriteFieldBegin("abstract", thrift.STRING, 1); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.AbstractName
    if err := p.WriteString(item); err != nil {
    return err
}

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *MyStruct) writeField2(p thrift.Format) error {  // MajorVer
    if err := p.WriteFieldBegin("major", thrift.I64, 2); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.MajorVer
    if err := p.WriteI64(item); err != nil {
    return err
}

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *MyStruct) writeField3(p thrift.Format) error {  // AnnotationWithQuote
    if err := p.WriteFieldBegin("annotation_with_quote", thrift.STRING, 3); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.AnnotationWithQuote
    if err := p.WriteString(item); err != nil {
    return err
}

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *MyStruct) writeField4(p thrift.Format) error {  // Class_
    if err := p.WriteFieldBegin("class_", thrift.STRING, 4); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.Class_
    if err := p.WriteString(item); err != nil {
    return err
}

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *MyStruct) writeField5(p thrift.Format) error {  // AnnotationWithTrailingComma
    if err := p.WriteFieldBegin("annotation_with_trailing_comma", thrift.STRING, 5); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.AnnotationWithTrailingComma
    if err := p.WriteString(item); err != nil {
    return err
}

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *MyStruct) writeField6(p thrift.Format) error {  // EmptyAnnotations
    if err := p.WriteFieldBegin("empty_annotations", thrift.STRING, 6); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.EmptyAnnotations
    if err := p.WriteString(item); err != nil {
    return err
}

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *MyStruct) writeField7(p thrift.Format) error {  // MyEnum
    if err := p.WriteFieldBegin("my_enum", thrift.I32, 7); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.MyEnum
    if err := p.WriteI32(int32(item)); err != nil {
    return err
}

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *MyStruct) writeField8(p thrift.Format) error {  // CppTypeAnnotation
    if err := p.WriteFieldBegin("cpp_type_annotation", thrift.LIST, 8); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.CppTypeAnnotation
    err := WriteListString_6884(item, p)
if err != nil {
    return err
}

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *MyStruct) writeField9(p thrift.Format) error {  // MyUnion
    if !x.IsSetMyUnion() {
        return nil
    }

    if err := p.WriteFieldBegin("my_union", thrift.STRUCT, 9); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.MyUnion
    if err := item.Write(p); err != nil {
    return err
}

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *MyStruct) readField1(p thrift.Format) error {  // AbstractName
    result, err := p.ReadString()
if err != nil {
    return err
}

    x.AbstractName = result
    return nil
}

func (x *MyStruct) readField2(p thrift.Format) error {  // MajorVer
    result, err := p.ReadI64()
if err != nil {
    return err
}

    x.MajorVer = result
    return nil
}

func (x *MyStruct) readField3(p thrift.Format) error {  // AnnotationWithQuote
    result, err := p.ReadString()
if err != nil {
    return err
}

    x.AnnotationWithQuote = result
    return nil
}

func (x *MyStruct) readField4(p thrift.Format) error {  // Class_
    result, err := p.ReadString()
if err != nil {
    return err
}

    x.Class_ = result
    return nil
}

func (x *MyStruct) readField5(p thrift.Format) error {  // AnnotationWithTrailingComma
    result, err := p.ReadString()
if err != nil {
    return err
}

    x.AnnotationWithTrailingComma = result
    return nil
}

func (x *MyStruct) readField6(p thrift.Format) error {  // EmptyAnnotations
    result, err := p.ReadString()
if err != nil {
    return err
}

    x.EmptyAnnotations = result
    return nil
}

func (x *MyStruct) readField7(p thrift.Format) error {  // MyEnum
    enumResult, err := p.ReadI32()
if err != nil {
    return err
}
result := MyEnum(enumResult)

    x.MyEnum = result
    return nil
}

func (x *MyStruct) readField8(p thrift.Format) error {  // CppTypeAnnotation
    result, err := ReadListString_6884(p)
if err != nil {
    return err
}

    x.CppTypeAnnotation = result
    return nil
}

func (x *MyStruct) readField9(p thrift.Format) error {  // MyUnion
    result := *NewMyUnion()
err := result.Read(p)
if err != nil {
    return err
}

    x.MyUnion = &result
    return nil
}

func (x *MyStruct) toString1() string {  // AbstractName
    return fmt.Sprintf("%v", x.AbstractName)
}

func (x *MyStruct) toString2() string {  // MajorVer
    return fmt.Sprintf("%v", x.MajorVer)
}

func (x *MyStruct) toString3() string {  // AnnotationWithQuote
    return fmt.Sprintf("%v", x.AnnotationWithQuote)
}

func (x *MyStruct) toString4() string {  // Class_
    return fmt.Sprintf("%v", x.Class_)
}

func (x *MyStruct) toString5() string {  // AnnotationWithTrailingComma
    return fmt.Sprintf("%v", x.AnnotationWithTrailingComma)
}

func (x *MyStruct) toString6() string {  // EmptyAnnotations
    return fmt.Sprintf("%v", x.EmptyAnnotations)
}

func (x *MyStruct) toString7() string {  // MyEnum
    return fmt.Sprintf("%v", x.MyEnum)
}

func (x *MyStruct) toString8() string {  // CppTypeAnnotation
    return fmt.Sprintf("%v", x.CppTypeAnnotation)
}

func (x *MyStruct) toString9() string {  // MyUnion
    return fmt.Sprintf("%v", x.MyUnion)
}

// Deprecated: Use NewMyStruct().GetMyUnion() instead.
func (x *MyStruct) DefaultGetMyUnion() *MyUnion {
    if !x.IsSetMyUnion() {
        return NewMyUnion()
    }
    return x.MyUnion
}



func (x *MyStruct) Write(p thrift.Format) error {
    if err := p.WriteStructBegin("MyStruct"); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", x), err)
    }

    if err := x.writeField1(p); err != nil {
        return err
    }

    if err := x.writeField2(p); err != nil {
        return err
    }

    if err := x.writeField3(p); err != nil {
        return err
    }

    if err := x.writeField4(p); err != nil {
        return err
    }

    if err := x.writeField5(p); err != nil {
        return err
    }

    if err := x.writeField6(p); err != nil {
        return err
    }

    if err := x.writeField7(p); err != nil {
        return err
    }

    if err := x.writeField8(p); err != nil {
        return err
    }

    if err := x.writeField9(p); err != nil {
        return err
    }

    if err := p.WriteFieldStop(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field stop error: ", x), err)
    }

    if err := p.WriteStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct end error: ", x), err)
    }
    return nil
}

func (x *MyStruct) Read(p thrift.Format) error {
    if _, err := p.ReadStructBegin(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read error: ", x), err)
    }

    for {
        _, wireType, id, err := p.ReadFieldBegin()
        if err != nil {
            return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", x, id), err)
        }

        if wireType == thrift.STOP {
            break;
        }

        switch {
        case (id == 1 && wireType == thrift.Type(thrift.STRING)):  // abstract
            if err := x.readField1(p); err != nil {
                return err
            }
        case (id == 2 && wireType == thrift.Type(thrift.I64)):  // major
            if err := x.readField2(p); err != nil {
                return err
            }
        case (id == 3 && wireType == thrift.Type(thrift.STRING)):  // annotation_with_quote
            if err := x.readField3(p); err != nil {
                return err
            }
        case (id == 4 && wireType == thrift.Type(thrift.STRING)):  // class_
            if err := x.readField4(p); err != nil {
                return err
            }
        case (id == 5 && wireType == thrift.Type(thrift.STRING)):  // annotation_with_trailing_comma
            if err := x.readField5(p); err != nil {
                return err
            }
        case (id == 6 && wireType == thrift.Type(thrift.STRING)):  // empty_annotations
            if err := x.readField6(p); err != nil {
                return err
            }
        case (id == 7 && wireType == thrift.Type(thrift.I32)):  // my_enum
            if err := x.readField7(p); err != nil {
                return err
            }
        case (id == 8 && wireType == thrift.Type(thrift.LIST)):  // cpp_type_annotation
            if err := x.readField8(p); err != nil {
                return err
            }
        case (id == 9 && wireType == thrift.Type(thrift.STRUCT)):  // my_union
            if err := x.readField9(p); err != nil {
                return err
            }
        default:
            if err := p.Skip(wireType); err != nil {
                return err
            }
        }

        if err := p.ReadFieldEnd(); err != nil {
            return err
        }
    }

    if err := p.ReadStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", x), err)
    }

    return nil
}

func (x *MyStruct) String() string {
    if x == nil {
        return "<nil>"
    }

    var sb strings.Builder

    sb.WriteString("MyStruct({")
    sb.WriteString(fmt.Sprintf("AbstractName:%s ", x.toString1()))
    sb.WriteString(fmt.Sprintf("MajorVer:%s ", x.toString2()))
    sb.WriteString(fmt.Sprintf("AnnotationWithQuote:%s ", x.toString3()))
    sb.WriteString(fmt.Sprintf("Class_:%s ", x.toString4()))
    sb.WriteString(fmt.Sprintf("AnnotationWithTrailingComma:%s ", x.toString5()))
    sb.WriteString(fmt.Sprintf("EmptyAnnotations:%s ", x.toString6()))
    sb.WriteString(fmt.Sprintf("MyEnum:%s ", x.toString7()))
    sb.WriteString(fmt.Sprintf("CppTypeAnnotation:%s ", x.toString8()))
    sb.WriteString(fmt.Sprintf("MyUnion:%s", x.toString9()))
    sb.WriteString("})")

    return sb.String()
}

type SecretStruct struct {
    Id int64 `thrift:"id,1" json:"id" db:"id"`
    Password string `thrift:"password,2" json:"password" db:"password"`
}
// Compile time interface enforcer
var _ thrift.Struct = (*SecretStruct)(nil)

func NewSecretStruct() *SecretStruct {
    return (&SecretStruct{}).
        SetIdNonCompat(0).
        SetPasswordNonCompat("")
}

func (x *SecretStruct) GetId() int64 {
    return x.Id
}

func (x *SecretStruct) GetPassword() string {
    return x.Password
}

func (x *SecretStruct) SetIdNonCompat(value int64) *SecretStruct {
    x.Id = value
    return x
}

func (x *SecretStruct) SetId(value int64) *SecretStruct {
    x.Id = value
    return x
}

func (x *SecretStruct) SetPasswordNonCompat(value string) *SecretStruct {
    x.Password = value
    return x
}

func (x *SecretStruct) SetPassword(value string) *SecretStruct {
    x.Password = value
    return x
}

func (x *SecretStruct) writeField1(p thrift.Format) error {  // Id
    if err := p.WriteFieldBegin("id", thrift.I64, 1); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.Id
    if err := p.WriteI64(item); err != nil {
    return err
}

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *SecretStruct) writeField2(p thrift.Format) error {  // Password
    if err := p.WriteFieldBegin("password", thrift.STRING, 2); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.Password
    if err := p.WriteString(item); err != nil {
    return err
}

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *SecretStruct) readField1(p thrift.Format) error {  // Id
    result, err := p.ReadI64()
if err != nil {
    return err
}

    x.Id = result
    return nil
}

func (x *SecretStruct) readField2(p thrift.Format) error {  // Password
    result, err := p.ReadString()
if err != nil {
    return err
}

    x.Password = result
    return nil
}

func (x *SecretStruct) toString1() string {  // Id
    return fmt.Sprintf("%v", x.Id)
}

func (x *SecretStruct) toString2() string {  // Password
    return fmt.Sprintf("%v", x.Password)
}



func (x *SecretStruct) Write(p thrift.Format) error {
    if err := p.WriteStructBegin("SecretStruct"); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", x), err)
    }

    if err := x.writeField1(p); err != nil {
        return err
    }

    if err := x.writeField2(p); err != nil {
        return err
    }

    if err := p.WriteFieldStop(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field stop error: ", x), err)
    }

    if err := p.WriteStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct end error: ", x), err)
    }
    return nil
}

func (x *SecretStruct) Read(p thrift.Format) error {
    if _, err := p.ReadStructBegin(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read error: ", x), err)
    }

    for {
        _, wireType, id, err := p.ReadFieldBegin()
        if err != nil {
            return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", x, id), err)
        }

        if wireType == thrift.STOP {
            break;
        }

        switch {
        case (id == 1 && wireType == thrift.Type(thrift.I64)):  // id
            if err := x.readField1(p); err != nil {
                return err
            }
        case (id == 2 && wireType == thrift.Type(thrift.STRING)):  // password
            if err := x.readField2(p); err != nil {
                return err
            }
        default:
            if err := p.Skip(wireType); err != nil {
                return err
            }
        }

        if err := p.ReadFieldEnd(); err != nil {
            return err
        }
    }

    if err := p.ReadStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", x), err)
    }

    return nil
}

func (x *SecretStruct) String() string {
    if x == nil {
        return "<nil>"
    }

    var sb strings.Builder

    sb.WriteString("SecretStruct({")
    sb.WriteString(fmt.Sprintf("Id:%s ", x.toString1()))
    sb.WriteString(fmt.Sprintf("Password:%s", x.toString2()))
    sb.WriteString("})")

    return sb.String()
}

// RegisterTypes registers types found in this file that have a thrift_uri with the passed in registry.
func RegisterTypes(registry interface {
  RegisterType(name string, initializer func() any)
}) {
    registry.RegisterType("facebook.com/thrift/compiler/test/fixtures/basic-annotations/src/module/MyStruct", func() any { return NewMyStruct() })

}
