// @generated by Thrift for [[[ program path ]]]
// This file is probably not the place you want to edit!

package java // [[[ program thrift source path ]]]

import (
    "fmt"
    "strings"

    thrift "github.com/facebook/fbthrift/thrift/lib/go/thrift"
)

// (needed to ensure safety because of naive import list construction)
var _ = fmt.Printf
var _ = strings.Split
var _ = thrift.ZERO


type Mutable struct {
}
// Compile time interface enforcer
var _ thrift.Struct = (*Mutable)(nil)

func NewMutable() *Mutable {
    return (&Mutable{})
}



func (x *Mutable) Write(p thrift.Format) error {
    if err := p.WriteStructBegin("Mutable"); err != nil {
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

func (x *Mutable) Read(p thrift.Format) error {
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

func (x *Mutable) String() string {
    if x == nil {
        return "<nil>"
    }

    var sb strings.Builder

    sb.WriteString("Mutable({")
    sb.WriteString("})")

    return sb.String()
}

type Annotation struct {
    JavaAnnotation string `thrift:"java_annotation,1" json:"java_annotation" db:"java_annotation"`
}
// Compile time interface enforcer
var _ thrift.Struct = (*Annotation)(nil)

func NewAnnotation() *Annotation {
    return (&Annotation{}).
        SetJavaAnnotationNonCompat("")
}

func (x *Annotation) GetJavaAnnotation() string {
    return x.JavaAnnotation
}

func (x *Annotation) SetJavaAnnotationNonCompat(value string) *Annotation {
    x.JavaAnnotation = value
    return x
}

func (x *Annotation) SetJavaAnnotation(value string) *Annotation {
    x.JavaAnnotation = value
    return x
}

func (x *Annotation) writeField1(p thrift.Format) error {  // JavaAnnotation
    if err := p.WriteFieldBegin("java_annotation", thrift.STRING, 1); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.JavaAnnotation
    if err := p.WriteString(item); err != nil {
    return err
}

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *Annotation) readField1(p thrift.Format) error {  // JavaAnnotation
    result, err := p.ReadString()
if err != nil {
    return err
}

    x.JavaAnnotation = result
    return nil
}

func (x *Annotation) toString1() string {  // JavaAnnotation
    return fmt.Sprintf("%v", x.JavaAnnotation)
}



func (x *Annotation) Write(p thrift.Format) error {
    if err := p.WriteStructBegin("Annotation"); err != nil {
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

func (x *Annotation) Read(p thrift.Format) error {
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
        case (id == 1 && wireType == thrift.Type(thrift.STRING)):  // java_annotation
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

func (x *Annotation) String() string {
    if x == nil {
        return "<nil>"
    }

    var sb strings.Builder

    sb.WriteString("Annotation({")
    sb.WriteString(fmt.Sprintf("JavaAnnotation:%s", x.toString1()))
    sb.WriteString("})")

    return sb.String()
}

type BinaryString struct {
}
// Compile time interface enforcer
var _ thrift.Struct = (*BinaryString)(nil)

func NewBinaryString() *BinaryString {
    return (&BinaryString{})
}



func (x *BinaryString) Write(p thrift.Format) error {
    if err := p.WriteStructBegin("BinaryString"); err != nil {
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

func (x *BinaryString) Read(p thrift.Format) error {
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

func (x *BinaryString) String() string {
    if x == nil {
        return "<nil>"
    }

    var sb strings.Builder

    sb.WriteString("BinaryString({")
    sb.WriteString("})")

    return sb.String()
}

type Adapter struct {
    AdapterClassName string `thrift:"adapterClassName,1" json:"adapterClassName" db:"adapterClassName"`
    TypeClassName string `thrift:"typeClassName,2" json:"typeClassName" db:"typeClassName"`
}
// Compile time interface enforcer
var _ thrift.Struct = (*Adapter)(nil)

func NewAdapter() *Adapter {
    return (&Adapter{}).
        SetAdapterClassNameNonCompat("").
        SetTypeClassNameNonCompat("")
}

func (x *Adapter) GetAdapterClassName() string {
    return x.AdapterClassName
}

func (x *Adapter) GetTypeClassName() string {
    return x.TypeClassName
}

func (x *Adapter) SetAdapterClassNameNonCompat(value string) *Adapter {
    x.AdapterClassName = value
    return x
}

func (x *Adapter) SetAdapterClassName(value string) *Adapter {
    x.AdapterClassName = value
    return x
}

func (x *Adapter) SetTypeClassNameNonCompat(value string) *Adapter {
    x.TypeClassName = value
    return x
}

func (x *Adapter) SetTypeClassName(value string) *Adapter {
    x.TypeClassName = value
    return x
}

func (x *Adapter) writeField1(p thrift.Format) error {  // AdapterClassName
    if err := p.WriteFieldBegin("adapterClassName", thrift.STRING, 1); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.AdapterClassName
    if err := p.WriteString(item); err != nil {
    return err
}

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *Adapter) writeField2(p thrift.Format) error {  // TypeClassName
    if err := p.WriteFieldBegin("typeClassName", thrift.STRING, 2); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.TypeClassName
    if err := p.WriteString(item); err != nil {
    return err
}

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *Adapter) readField1(p thrift.Format) error {  // AdapterClassName
    result, err := p.ReadString()
if err != nil {
    return err
}

    x.AdapterClassName = result
    return nil
}

func (x *Adapter) readField2(p thrift.Format) error {  // TypeClassName
    result, err := p.ReadString()
if err != nil {
    return err
}

    x.TypeClassName = result
    return nil
}

func (x *Adapter) toString1() string {  // AdapterClassName
    return fmt.Sprintf("%v", x.AdapterClassName)
}

func (x *Adapter) toString2() string {  // TypeClassName
    return fmt.Sprintf("%v", x.TypeClassName)
}



func (x *Adapter) Write(p thrift.Format) error {
    if err := p.WriteStructBegin("Adapter"); err != nil {
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

func (x *Adapter) Read(p thrift.Format) error {
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
        case (id == 1 && wireType == thrift.Type(thrift.STRING)):  // adapterClassName
            if err := x.readField1(p); err != nil {
                return err
            }
        case (id == 2 && wireType == thrift.Type(thrift.STRING)):  // typeClassName
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

func (x *Adapter) String() string {
    if x == nil {
        return "<nil>"
    }

    var sb strings.Builder

    sb.WriteString("Adapter({")
    sb.WriteString(fmt.Sprintf("AdapterClassName:%s ", x.toString1()))
    sb.WriteString(fmt.Sprintf("TypeClassName:%s", x.toString2()))
    sb.WriteString("})")

    return sb.String()
}

type Wrapper struct {
    WrapperClassName string `thrift:"wrapperClassName,1" json:"wrapperClassName" db:"wrapperClassName"`
    TypeClassName string `thrift:"typeClassName,2" json:"typeClassName" db:"typeClassName"`
}
// Compile time interface enforcer
var _ thrift.Struct = (*Wrapper)(nil)

func NewWrapper() *Wrapper {
    return (&Wrapper{}).
        SetWrapperClassNameNonCompat("").
        SetTypeClassNameNonCompat("")
}

func (x *Wrapper) GetWrapperClassName() string {
    return x.WrapperClassName
}

func (x *Wrapper) GetTypeClassName() string {
    return x.TypeClassName
}

func (x *Wrapper) SetWrapperClassNameNonCompat(value string) *Wrapper {
    x.WrapperClassName = value
    return x
}

func (x *Wrapper) SetWrapperClassName(value string) *Wrapper {
    x.WrapperClassName = value
    return x
}

func (x *Wrapper) SetTypeClassNameNonCompat(value string) *Wrapper {
    x.TypeClassName = value
    return x
}

func (x *Wrapper) SetTypeClassName(value string) *Wrapper {
    x.TypeClassName = value
    return x
}

func (x *Wrapper) writeField1(p thrift.Format) error {  // WrapperClassName
    if err := p.WriteFieldBegin("wrapperClassName", thrift.STRING, 1); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.WrapperClassName
    if err := p.WriteString(item); err != nil {
    return err
}

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *Wrapper) writeField2(p thrift.Format) error {  // TypeClassName
    if err := p.WriteFieldBegin("typeClassName", thrift.STRING, 2); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.TypeClassName
    if err := p.WriteString(item); err != nil {
    return err
}

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *Wrapper) readField1(p thrift.Format) error {  // WrapperClassName
    result, err := p.ReadString()
if err != nil {
    return err
}

    x.WrapperClassName = result
    return nil
}

func (x *Wrapper) readField2(p thrift.Format) error {  // TypeClassName
    result, err := p.ReadString()
if err != nil {
    return err
}

    x.TypeClassName = result
    return nil
}

func (x *Wrapper) toString1() string {  // WrapperClassName
    return fmt.Sprintf("%v", x.WrapperClassName)
}

func (x *Wrapper) toString2() string {  // TypeClassName
    return fmt.Sprintf("%v", x.TypeClassName)
}



func (x *Wrapper) Write(p thrift.Format) error {
    if err := p.WriteStructBegin("Wrapper"); err != nil {
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

func (x *Wrapper) Read(p thrift.Format) error {
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
        case (id == 1 && wireType == thrift.Type(thrift.STRING)):  // wrapperClassName
            if err := x.readField1(p); err != nil {
                return err
            }
        case (id == 2 && wireType == thrift.Type(thrift.STRING)):  // typeClassName
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

func (x *Wrapper) String() string {
    if x == nil {
        return "<nil>"
    }

    var sb strings.Builder

    sb.WriteString("Wrapper({")
    sb.WriteString(fmt.Sprintf("WrapperClassName:%s ", x.toString1()))
    sb.WriteString(fmt.Sprintf("TypeClassName:%s", x.toString2()))
    sb.WriteString("})")

    return sb.String()
}

type Recursive struct {
}
// Compile time interface enforcer
var _ thrift.Struct = (*Recursive)(nil)

func NewRecursive() *Recursive {
    return (&Recursive{})
}



func (x *Recursive) Write(p thrift.Format) error {
    if err := p.WriteStructBegin("Recursive"); err != nil {
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

func (x *Recursive) Read(p thrift.Format) error {
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

func (x *Recursive) String() string {
    if x == nil {
        return "<nil>"
    }

    var sb strings.Builder

    sb.WriteString("Recursive({")
    sb.WriteString("})")

    return sb.String()
}

type FieldUseUnmangledName struct {
}
// Compile time interface enforcer
var _ thrift.Struct = (*FieldUseUnmangledName)(nil)

func NewFieldUseUnmangledName() *FieldUseUnmangledName {
    return (&FieldUseUnmangledName{})
}



func (x *FieldUseUnmangledName) Write(p thrift.Format) error {
    if err := p.WriteStructBegin("FieldUseUnmangledName"); err != nil {
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

func (x *FieldUseUnmangledName) Read(p thrift.Format) error {
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

func (x *FieldUseUnmangledName) String() string {
    if x == nil {
        return "<nil>"
    }

    var sb strings.Builder

    sb.WriteString("FieldUseUnmangledName({")
    sb.WriteString("})")

    return sb.String()
}

// RegisterTypes registers types found in this file that have a thrift_uri with the passed in registry.
func RegisterTypes(registry interface {
  RegisterType(name string, initializer func() any)
}) {
    registry.RegisterType("facebook.com/thrift/annotation/java/Mutable", func() any { return NewMutable() })
    registry.RegisterType("facebook.com/thrift/annotation/java/Annotation", func() any { return NewAnnotation() })
    registry.RegisterType("facebook.com/thrift/annotation/java/BinaryString", func() any { return NewBinaryString() })
    registry.RegisterType("facebook.com/thrift/annotation/java/Adapter", func() any { return NewAdapter() })
    registry.RegisterType("facebook.com/thrift/annotation/java/Wrapper", func() any { return NewWrapper() })
    registry.RegisterType("facebook.com/thrift/annotation/java/Recursive", func() any { return NewRecursive() })
    registry.RegisterType("facebook.com/thrift/annotation/java/FieldUseUnmangledName", func() any { return NewFieldUseUnmangledName() })

}
