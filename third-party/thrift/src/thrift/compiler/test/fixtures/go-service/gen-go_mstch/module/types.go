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


type GetEntityRequest struct {
    Id string `thrift:"id,1" json:"id" db:"id"`
}
// Compile time interface enforcer
var _ thrift.Struct = &GetEntityRequest{}

func NewGetEntityRequest() *GetEntityRequest {
    return (&GetEntityRequest{}).
        SetIdNonCompat("")
}

func (x *GetEntityRequest) GetIdNonCompat() string {
    return x.Id
}

func (x *GetEntityRequest) GetId() string {
    return x.Id
}

func (x *GetEntityRequest) SetIdNonCompat(value string) *GetEntityRequest {
    x.Id = value
    return x
}

func (x *GetEntityRequest) SetId(value string) *GetEntityRequest {
    x.Id = value
    return x
}

func (x *GetEntityRequest) writeField1(p thrift.Protocol) error {  // Id
    if err := p.WriteFieldBegin("id", thrift.STRING, 1); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.GetIdNonCompat()
    if err := p.WriteString(item); err != nil {
    return err
}

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *GetEntityRequest) readField1(p thrift.Protocol) error {  // Id
    result, err := p.ReadString()
if err != nil {
    return err
}

    x.SetIdNonCompat(result)
    return nil
}

func (x *GetEntityRequest) toString1() string {  // Id
    return fmt.Sprintf("%v", x.GetIdNonCompat())
}


// Deprecated: Use "New" constructor and setters to build your structs.
// e.g NewGetEntityRequest().Set<FieldNameFoo>().Set<FieldNameBar>()
type GetEntityRequestBuilder struct {
    obj *GetEntityRequest
}

// Deprecated: Use "New" constructor and setters to build your structs.
// e.g NewGetEntityRequest().Set<FieldNameFoo>().Set<FieldNameBar>()
func NewGetEntityRequestBuilder() *GetEntityRequestBuilder {
    return &GetEntityRequestBuilder{
        obj: NewGetEntityRequest(),
    }
}

// Deprecated: Use "New" constructor and setters to build your structs.
// e.g NewGetEntityRequest().Set<FieldNameFoo>().Set<FieldNameBar>()
func (x *GetEntityRequestBuilder) Id(value string) *GetEntityRequestBuilder {
    x.obj.Id = value
    return x
}

// Deprecated: Use "New" constructor and setters to build your structs.
// e.g NewGetEntityRequest().Set<FieldNameFoo>().Set<FieldNameBar>()
func (x *GetEntityRequestBuilder) Emit() *GetEntityRequest {
    var objCopy GetEntityRequest = *x.obj
    return &objCopy
}

func (x *GetEntityRequest) Write(p thrift.Protocol) error {
    if err := p.WriteStructBegin("GetEntityRequest"); err != nil {
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

func (x *GetEntityRequest) Read(p thrift.Protocol) error {
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
        case (id == 1 && wireType == thrift.Type(thrift.STRING)):  // id
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

func (x *GetEntityRequest) String() string {
    if x == nil {
        return "<nil>"
    }

    var sb strings.Builder

    sb.WriteString("GetEntityRequest({")
    sb.WriteString(fmt.Sprintf("Id:%s", x.toString1()))
    sb.WriteString("})")

    return sb.String()
}

type GetEntityResponse struct {
    Entity string `thrift:"entity,1" json:"entity" db:"entity"`
}
// Compile time interface enforcer
var _ thrift.Struct = &GetEntityResponse{}

func NewGetEntityResponse() *GetEntityResponse {
    return (&GetEntityResponse{}).
        SetEntityNonCompat("")
}

func (x *GetEntityResponse) GetEntityNonCompat() string {
    return x.Entity
}

func (x *GetEntityResponse) GetEntity() string {
    return x.Entity
}

func (x *GetEntityResponse) SetEntityNonCompat(value string) *GetEntityResponse {
    x.Entity = value
    return x
}

func (x *GetEntityResponse) SetEntity(value string) *GetEntityResponse {
    x.Entity = value
    return x
}

func (x *GetEntityResponse) writeField1(p thrift.Protocol) error {  // Entity
    if err := p.WriteFieldBegin("entity", thrift.STRING, 1); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.GetEntityNonCompat()
    if err := p.WriteString(item); err != nil {
    return err
}

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *GetEntityResponse) readField1(p thrift.Protocol) error {  // Entity
    result, err := p.ReadString()
if err != nil {
    return err
}

    x.SetEntityNonCompat(result)
    return nil
}

func (x *GetEntityResponse) toString1() string {  // Entity
    return fmt.Sprintf("%v", x.GetEntityNonCompat())
}


// Deprecated: Use "New" constructor and setters to build your structs.
// e.g NewGetEntityResponse().Set<FieldNameFoo>().Set<FieldNameBar>()
type GetEntityResponseBuilder struct {
    obj *GetEntityResponse
}

// Deprecated: Use "New" constructor and setters to build your structs.
// e.g NewGetEntityResponse().Set<FieldNameFoo>().Set<FieldNameBar>()
func NewGetEntityResponseBuilder() *GetEntityResponseBuilder {
    return &GetEntityResponseBuilder{
        obj: NewGetEntityResponse(),
    }
}

// Deprecated: Use "New" constructor and setters to build your structs.
// e.g NewGetEntityResponse().Set<FieldNameFoo>().Set<FieldNameBar>()
func (x *GetEntityResponseBuilder) Entity(value string) *GetEntityResponseBuilder {
    x.obj.Entity = value
    return x
}

// Deprecated: Use "New" constructor and setters to build your structs.
// e.g NewGetEntityResponse().Set<FieldNameFoo>().Set<FieldNameBar>()
func (x *GetEntityResponseBuilder) Emit() *GetEntityResponse {
    var objCopy GetEntityResponse = *x.obj
    return &objCopy
}

func (x *GetEntityResponse) Write(p thrift.Protocol) error {
    if err := p.WriteStructBegin("GetEntityResponse"); err != nil {
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

func (x *GetEntityResponse) Read(p thrift.Protocol) error {
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
        case (id == 1 && wireType == thrift.Type(thrift.STRING)):  // entity
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

func (x *GetEntityResponse) String() string {
    if x == nil {
        return "<nil>"
    }

    var sb strings.Builder

    sb.WriteString("GetEntityResponse({")
    sb.WriteString(fmt.Sprintf("Entity:%s", x.toString1()))
    sb.WriteString("})")

    return sb.String()
}

type NonComparableStruct struct {
    Foo string `thrift:"foo,1" json:"foo" db:"foo"`
    Bar []string `thrift:"bar,2" json:"bar" db:"bar"`
    Baz map[*NonComparableStruct]int64 `thrift:"baz,3" json:"baz" db:"baz"`
}
// Compile time interface enforcer
var _ thrift.Struct = &NonComparableStruct{}

func NewNonComparableStruct() *NonComparableStruct {
    return (&NonComparableStruct{}).
        SetFooNonCompat("").
        SetBarNonCompat(make([]string, 0)).
        SetBazNonCompat(make(map[*NonComparableStruct]int64))
}

func (x *NonComparableStruct) GetFooNonCompat() string {
    return x.Foo
}

func (x *NonComparableStruct) GetFoo() string {
    return x.Foo
}

func (x *NonComparableStruct) GetBarNonCompat() []string {
    return x.Bar
}

func (x *NonComparableStruct) GetBar() []string {
    if !x.IsSetBar() {
        return make([]string, 0)
    }

    return x.Bar
}

func (x *NonComparableStruct) GetBazNonCompat() map[*NonComparableStruct]int64 {
    return x.Baz
}

func (x *NonComparableStruct) GetBaz() map[*NonComparableStruct]int64 {
    if !x.IsSetBaz() {
        return make(map[*NonComparableStruct]int64)
    }

    return x.Baz
}

func (x *NonComparableStruct) SetFooNonCompat(value string) *NonComparableStruct {
    x.Foo = value
    return x
}

func (x *NonComparableStruct) SetFoo(value string) *NonComparableStruct {
    x.Foo = value
    return x
}

func (x *NonComparableStruct) SetBarNonCompat(value []string) *NonComparableStruct {
    x.Bar = value
    return x
}

func (x *NonComparableStruct) SetBar(value []string) *NonComparableStruct {
    x.Bar = value
    return x
}

func (x *NonComparableStruct) SetBazNonCompat(value map[*NonComparableStruct]int64) *NonComparableStruct {
    x.Baz = value
    return x
}

func (x *NonComparableStruct) SetBaz(value map[*NonComparableStruct]int64) *NonComparableStruct {
    x.Baz = value
    return x
}

func (x *NonComparableStruct) IsSetBar() bool {
    return x != nil && x.Bar != nil
}

func (x *NonComparableStruct) IsSetBaz() bool {
    return x != nil && x.Baz != nil
}

func (x *NonComparableStruct) writeField1(p thrift.Protocol) error {  // Foo
    if err := p.WriteFieldBegin("foo", thrift.STRING, 1); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.GetFooNonCompat()
    if err := p.WriteString(item); err != nil {
    return err
}

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *NonComparableStruct) writeField2(p thrift.Protocol) error {  // Bar
    if err := p.WriteFieldBegin("bar", thrift.LIST, 2); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.GetBarNonCompat()
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

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *NonComparableStruct) writeField3(p thrift.Protocol) error {  // Baz
    if err := p.WriteFieldBegin("baz", thrift.MAP, 3); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.GetBazNonCompat()
    if err := p.WriteMapBegin(thrift.STRUCT, thrift.I64, len(item)); err != nil {
    return thrift.PrependError("error writing map begin: ", err)
}
for k, v := range item {
    {
        item := k
        if err := item.Write(p); err != nil {
    return err
}
    }

    {
        item := v
        if err := p.WriteI64(item); err != nil {
    return err
}
    }
}
if err := p.WriteMapEnd(); err != nil {
    return thrift.PrependError("error writing map end: ", err)
}

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *NonComparableStruct) readField1(p thrift.Protocol) error {  // Foo
    result, err := p.ReadString()
if err != nil {
    return err
}

    x.SetFooNonCompat(result)
    return nil
}

func (x *NonComparableStruct) readField2(p thrift.Protocol) error {  // Bar
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

    x.SetBarNonCompat(result)
    return nil
}

func (x *NonComparableStruct) readField3(p thrift.Protocol) error {  // Baz
    _ /* keyType */, _ /* valueType */, size, err := p.ReadMapBegin()
if err != nil {
    return thrift.PrependError("error reading map begin: ", err)
}

mapResult := make(map[*NonComparableStruct]int64, size)
for i := 0; i < size; i++ {
    var key *NonComparableStruct
    {
        result := *NewNonComparableStruct()
err := result.Read(p)
if err != nil {
    return err
}
        key = &result
    }

    var value int64
    {
        result, err := p.ReadI64()
if err != nil {
    return err
}
        value = result
    }

    mapResult[key] = value
}

if err := p.ReadMapEnd(); err != nil {
    return thrift.PrependError("error reading map end: ", err)
}
result := mapResult

    x.SetBazNonCompat(result)
    return nil
}

func (x *NonComparableStruct) toString1() string {  // Foo
    return fmt.Sprintf("%v", x.GetFooNonCompat())
}

func (x *NonComparableStruct) toString2() string {  // Bar
    return fmt.Sprintf("%v", x.GetBarNonCompat())
}

func (x *NonComparableStruct) toString3() string {  // Baz
    return fmt.Sprintf("%v", x.GetBazNonCompat())
}


// Deprecated: Use "New" constructor and setters to build your structs.
// e.g NewNonComparableStruct().Set<FieldNameFoo>().Set<FieldNameBar>()
type NonComparableStructBuilder struct {
    obj *NonComparableStruct
}

// Deprecated: Use "New" constructor and setters to build your structs.
// e.g NewNonComparableStruct().Set<FieldNameFoo>().Set<FieldNameBar>()
func NewNonComparableStructBuilder() *NonComparableStructBuilder {
    return &NonComparableStructBuilder{
        obj: NewNonComparableStruct(),
    }
}

// Deprecated: Use "New" constructor and setters to build your structs.
// e.g NewNonComparableStruct().Set<FieldNameFoo>().Set<FieldNameBar>()
func (x *NonComparableStructBuilder) Foo(value string) *NonComparableStructBuilder {
    x.obj.Foo = value
    return x
}

// Deprecated: Use "New" constructor and setters to build your structs.
// e.g NewNonComparableStruct().Set<FieldNameFoo>().Set<FieldNameBar>()
func (x *NonComparableStructBuilder) Bar(value []string) *NonComparableStructBuilder {
    x.obj.Bar = value
    return x
}

// Deprecated: Use "New" constructor and setters to build your structs.
// e.g NewNonComparableStruct().Set<FieldNameFoo>().Set<FieldNameBar>()
func (x *NonComparableStructBuilder) Baz(value map[*NonComparableStruct]int64) *NonComparableStructBuilder {
    x.obj.Baz = value
    return x
}

// Deprecated: Use "New" constructor and setters to build your structs.
// e.g NewNonComparableStruct().Set<FieldNameFoo>().Set<FieldNameBar>()
func (x *NonComparableStructBuilder) Emit() *NonComparableStruct {
    var objCopy NonComparableStruct = *x.obj
    return &objCopy
}

func (x *NonComparableStruct) Write(p thrift.Protocol) error {
    if err := p.WriteStructBegin("NonComparableStruct"); err != nil {
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

func (x *NonComparableStruct) Read(p thrift.Protocol) error {
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
        case (id == 1 && wireType == thrift.Type(thrift.STRING)):  // foo
            if err := x.readField1(p); err != nil {
                return err
            }
        case (id == 2 && wireType == thrift.Type(thrift.LIST)):  // bar
            if err := x.readField2(p); err != nil {
                return err
            }
        case (id == 3 && wireType == thrift.Type(thrift.MAP)):  // baz
            if err := x.readField3(p); err != nil {
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

func (x *NonComparableStruct) String() string {
    if x == nil {
        return "<nil>"
    }

    var sb strings.Builder

    sb.WriteString("NonComparableStruct({")
    sb.WriteString(fmt.Sprintf("Foo:%s ", x.toString1()))
    sb.WriteString(fmt.Sprintf("Bar:%s ", x.toString2()))
    sb.WriteString(fmt.Sprintf("Baz:%s", x.toString3()))
    sb.WriteString("})")

    return sb.String()
}

// RegisterTypes registers types found in this file that have a thrift_uri with the passed in registry.
func RegisterTypes(registry interface {
  RegisterType(name string, initializer func() any)
}) {

}
