// @generated by Thrift for [[[ program path ]]]
// This file is probably not the place you want to edit!

package module // [[[ program thrift source path ]]]

import (
    "fmt"
    "strings"

    includes "includes"
    thrift "github.com/facebook/fbthrift/thrift/lib/go/thrift"
)

var _ = includes.GoUnusedProtection__

// (needed to ensure safety because of naive import list construction)
var _ = fmt.Printf
var _ = thrift.ZERO
var _ = strings.Split


type MyStruct struct {
    MyIncludedField *includes.Included `thrift:"MyIncludedField,1" json:"MyIncludedField" db:"MyIncludedField"`
    MyOtherIncludedField *includes.Included `thrift:"MyOtherIncludedField,2" json:"MyOtherIncludedField" db:"MyOtherIncludedField"`
    MyIncludedInt includes.IncludedInt64 `thrift:"MyIncludedInt,3" json:"MyIncludedInt" db:"MyIncludedInt"`
}
// Compile time interface enforcer
var _ thrift.Struct = &MyStruct{}

func NewMyStruct() *MyStruct {
    return (&MyStruct{}).
        SetMyIncludedFieldNonCompat(
              *includes.ExampleIncluded,
          ).
        SetMyOtherIncludedFieldNonCompat(*includes.NewIncluded()).
        SetMyIncludedIntNonCompat(42)
}

func (x *MyStruct) GetMyIncludedFieldNonCompat() *includes.Included {
    return x.MyIncludedField
}

func (x *MyStruct) GetMyIncludedField() *includes.Included {
    if !x.IsSetMyIncludedField() {
        return nil
    }

    return x.MyIncludedField
}

func (x *MyStruct) GetMyOtherIncludedFieldNonCompat() *includes.Included {
    return x.MyOtherIncludedField
}

func (x *MyStruct) GetMyOtherIncludedField() *includes.Included {
    if !x.IsSetMyOtherIncludedField() {
        return nil
    }

    return x.MyOtherIncludedField
}

func (x *MyStruct) GetMyIncludedIntNonCompat() includes.IncludedInt64 {
    return x.MyIncludedInt
}

func (x *MyStruct) GetMyIncludedInt() includes.IncludedInt64 {
    return x.MyIncludedInt
}

func (x *MyStruct) SetMyIncludedFieldNonCompat(value includes.Included) *MyStruct {
    x.MyIncludedField = &value
    return x
}

func (x *MyStruct) SetMyIncludedField(value *includes.Included) *MyStruct {
    x.MyIncludedField = value
    return x
}

func (x *MyStruct) SetMyOtherIncludedFieldNonCompat(value includes.Included) *MyStruct {
    x.MyOtherIncludedField = &value
    return x
}

func (x *MyStruct) SetMyOtherIncludedField(value *includes.Included) *MyStruct {
    x.MyOtherIncludedField = value
    return x
}

func (x *MyStruct) SetMyIncludedIntNonCompat(value includes.IncludedInt64) *MyStruct {
    x.MyIncludedInt = value
    return x
}

func (x *MyStruct) SetMyIncludedInt(value includes.IncludedInt64) *MyStruct {
    x.MyIncludedInt = value
    return x
}

func (x *MyStruct) IsSetMyIncludedField() bool {
    return x != nil && x.MyIncludedField != nil
}

func (x *MyStruct) IsSetMyOtherIncludedField() bool {
    return x != nil && x.MyOtherIncludedField != nil
}

func (x *MyStruct) writeField1(p thrift.Protocol) error {  // MyIncludedField
    if !x.IsSetMyIncludedField() {
        return nil
    }

    if err := p.WriteFieldBegin("MyIncludedField", thrift.STRUCT, 1); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.GetMyIncludedFieldNonCompat()
    if err := item.Write(p); err != nil {
    return err
}

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *MyStruct) writeField2(p thrift.Protocol) error {  // MyOtherIncludedField
    if !x.IsSetMyOtherIncludedField() {
        return nil
    }

    if err := p.WriteFieldBegin("MyOtherIncludedField", thrift.STRUCT, 2); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.GetMyOtherIncludedFieldNonCompat()
    if err := item.Write(p); err != nil {
    return err
}

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *MyStruct) writeField3(p thrift.Protocol) error {  // MyIncludedInt
    if err := p.WriteFieldBegin("MyIncludedInt", thrift.I64, 3); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.GetMyIncludedIntNonCompat()
    err := includes.WriteIncludedInt64(item, p)
if err != nil {
    return err
}

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *MyStruct) readField1(p thrift.Protocol) error {  // MyIncludedField
    result := *includes.NewIncluded()
err := result.Read(p)
if err != nil {
    return err
}

    x.SetMyIncludedFieldNonCompat(result)
    return nil
}

func (x *MyStruct) readField2(p thrift.Protocol) error {  // MyOtherIncludedField
    result := *includes.NewIncluded()
err := result.Read(p)
if err != nil {
    return err
}

    x.SetMyOtherIncludedFieldNonCompat(result)
    return nil
}

func (x *MyStruct) readField3(p thrift.Protocol) error {  // MyIncludedInt
    result, err := includes.ReadIncludedInt64(p)
if err != nil {
    return err
}

    x.SetMyIncludedIntNonCompat(result)
    return nil
}

func (x *MyStruct) toString1() string {  // MyIncludedField
    return fmt.Sprintf("%v", x.GetMyIncludedFieldNonCompat())
}

func (x *MyStruct) toString2() string {  // MyOtherIncludedField
    return fmt.Sprintf("%v", x.GetMyOtherIncludedFieldNonCompat())
}

func (x *MyStruct) toString3() string {  // MyIncludedInt
    return fmt.Sprintf("%v", x.GetMyIncludedIntNonCompat())
}

// Deprecated: Use NewMyStruct().GetMyIncludedField() instead.
var MyStruct_MyIncludedField_DEFAULT = NewMyStruct().GetMyIncludedField()

// Deprecated: Use NewMyStruct().GetMyIncludedField() instead.
func (x *MyStruct) DefaultGetMyIncludedField() *includes.Included {
    if !x.IsSetMyIncludedField() {
        return includes.NewIncluded()
    }
    return x.MyIncludedField
}

// Deprecated: Use NewMyStruct().GetMyOtherIncludedField() instead.
var MyStruct_MyOtherIncludedField_DEFAULT = NewMyStruct().GetMyOtherIncludedField()

// Deprecated: Use NewMyStruct().GetMyOtherIncludedField() instead.
func (x *MyStruct) DefaultGetMyOtherIncludedField() *includes.Included {
    if !x.IsSetMyOtherIncludedField() {
        return includes.NewIncluded()
    }
    return x.MyOtherIncludedField
}


// Deprecated: Use MyStruct.Set* methods instead or set the fields directly.
type MyStructBuilder struct {
    obj *MyStruct
}

func NewMyStructBuilder() *MyStructBuilder {
    return &MyStructBuilder{
        obj: NewMyStruct(),
    }
}

func (x *MyStructBuilder) MyIncludedField(value *includes.Included) *MyStructBuilder {
    x.obj.MyIncludedField = value
    return x
}

func (x *MyStructBuilder) MyOtherIncludedField(value *includes.Included) *MyStructBuilder {
    x.obj.MyOtherIncludedField = value
    return x
}

func (x *MyStructBuilder) MyIncludedInt(value includes.IncludedInt64) *MyStructBuilder {
    x.obj.MyIncludedInt = value
    return x
}

func (x *MyStructBuilder) Emit() *MyStruct {
    var objCopy MyStruct = *x.obj
    return &objCopy
}

func (x *MyStruct) Write(p thrift.Protocol) error {
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

    if err := p.WriteFieldStop(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field stop error: ", x), err)
    }

    if err := p.WriteStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct end error: ", x), err)
    }
    return nil
}

func (x *MyStruct) Read(p thrift.Protocol) error {
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

        switch id {
        case 1:  // MyIncludedField
            expectedType := thrift.Type(thrift.STRUCT)
            if wireType == expectedType {
                if err := x.readField1(p); err != nil {
                   return err
                }
            } else {
                if err := p.Skip(wireType); err != nil {
                    return err
                }
            }
        case 2:  // MyOtherIncludedField
            expectedType := thrift.Type(thrift.STRUCT)
            if wireType == expectedType {
                if err := x.readField2(p); err != nil {
                   return err
                }
            } else {
                if err := p.Skip(wireType); err != nil {
                    return err
                }
            }
        case 3:  // MyIncludedInt
            expectedType := thrift.Type(thrift.I64)
            if wireType == expectedType {
                if err := x.readField3(p); err != nil {
                   return err
                }
            } else {
                if err := p.Skip(wireType); err != nil {
                    return err
                }
            }
        default:
            if err := p.Skip(wireType); err != nil {
                return err
            }
        }
    }

    if err := p.ReadFieldEnd(); err != nil {
        return err
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
    sb.WriteString(fmt.Sprintf("MyIncludedField:%s ", x.toString1()))
    sb.WriteString(fmt.Sprintf("MyOtherIncludedField:%s ", x.toString2()))
    sb.WriteString(fmt.Sprintf("MyIncludedInt:%s", x.toString3()))
    sb.WriteString("})")

    return sb.String()
}

// RegisterTypes registers types found in this file that have a thrift_uri with the passed in registry.
func RegisterTypes(registry interface {
	  RegisterType(name string, initializer func() any)
}) {

}
