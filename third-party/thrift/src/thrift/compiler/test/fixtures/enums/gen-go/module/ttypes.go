// Autogenerated by Thrift Compiler (facebook)
// DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
// @generated

package module

import (
	"bytes"
	"context"
	"sync"
	"fmt"
	thrift "github.com/facebook/fbthrift/thrift/lib/go/thrift"
	thrift0 "thrift/annotation/thrift"

)

// (needed to ensure safety because of naive import list construction.)
var _ = thrift.ZERO
var _ = fmt.Printf
var _ = sync.Mutex{}
var _ = bytes.Equal
var _ = context.Background

var _ = thrift0.GoUnusedProtection__
var GoUnusedProtection__ int;

type Metasyntactic int64
const (
  Metasyntactic_FOO Metasyntactic = 1
  Metasyntactic_BAR Metasyntactic = 2
  Metasyntactic_BAZ Metasyntactic = 3
  Metasyntactic_BAX Metasyntactic = 4
)

var MetasyntacticToName = map[Metasyntactic]string {
  Metasyntactic_FOO: "FOO",
  Metasyntactic_BAR: "BAR",
  Metasyntactic_BAZ: "BAZ",
  Metasyntactic_BAX: "BAX",
}

var MetasyntacticToValue = map[string]Metasyntactic {
  "FOO": Metasyntactic_FOO,
  "BAR": Metasyntactic_BAR,
  "BAZ": Metasyntactic_BAZ,
  "BAX": Metasyntactic_BAX,
}

var MetasyntacticNames = []string {
  "FOO",
  "BAR",
  "BAZ",
  "BAX",
}

var MetasyntacticValues = []Metasyntactic {
  Metasyntactic_FOO,
  Metasyntactic_BAR,
  Metasyntactic_BAZ,
  Metasyntactic_BAX,
}

func (p Metasyntactic) String() string {
  if v, ok := MetasyntacticToName[p]; ok {
    return v
  }
  return "<UNSET>"
}

func MetasyntacticFromString(s string) (Metasyntactic, error) {
  if v, ok := MetasyntacticToValue[s]; ok {
    return v, nil
  }
  return Metasyntactic(0), fmt.Errorf("not a valid Metasyntactic string")
}

func MetasyntacticPtr(v Metasyntactic) *Metasyntactic { return &v }

type MyEnum1 int64
const (
  MyEnum1_ME1_0 MyEnum1 = 0
  MyEnum1_ME1_1 MyEnum1 = 1
  MyEnum1_ME1_2 MyEnum1 = 2
  MyEnum1_ME1_3 MyEnum1 = 3
  MyEnum1_ME1_5 MyEnum1 = 5
  MyEnum1_ME1_6 MyEnum1 = 6
)

var MyEnum1ToName = map[MyEnum1]string {
  MyEnum1_ME1_0: "ME1_0",
  MyEnum1_ME1_1: "ME1_1",
  MyEnum1_ME1_2: "ME1_2",
  MyEnum1_ME1_3: "ME1_3",
  MyEnum1_ME1_5: "ME1_5",
  MyEnum1_ME1_6: "ME1_6",
}

var MyEnum1ToValue = map[string]MyEnum1 {
  "ME1_0": MyEnum1_ME1_0,
  "ME1_1": MyEnum1_ME1_1,
  "ME1_2": MyEnum1_ME1_2,
  "ME1_3": MyEnum1_ME1_3,
  "ME1_5": MyEnum1_ME1_5,
  "ME1_6": MyEnum1_ME1_6,
}

var MyEnum1Names = []string {
  "ME1_0",
  "ME1_1",
  "ME1_2",
  "ME1_3",
  "ME1_5",
  "ME1_6",
}

var MyEnum1Values = []MyEnum1 {
  MyEnum1_ME1_0,
  MyEnum1_ME1_1,
  MyEnum1_ME1_2,
  MyEnum1_ME1_3,
  MyEnum1_ME1_5,
  MyEnum1_ME1_6,
}

func (p MyEnum1) String() string {
  if v, ok := MyEnum1ToName[p]; ok {
    return v
  }
  return "<UNSET>"
}

func MyEnum1FromString(s string) (MyEnum1, error) {
  if v, ok := MyEnum1ToValue[s]; ok {
    return v, nil
  }
  return MyEnum1(0), fmt.Errorf("not a valid MyEnum1 string")
}

func MyEnum1Ptr(v MyEnum1) *MyEnum1 { return &v }

type MyEnum2 int64
const (
  MyEnum2_ME2_0 MyEnum2 = 0
  MyEnum2_ME2_1 MyEnum2 = 1
  MyEnum2_ME2_2 MyEnum2 = 2
)

var MyEnum2ToName = map[MyEnum2]string {
  MyEnum2_ME2_0: "ME2_0",
  MyEnum2_ME2_1: "ME2_1",
  MyEnum2_ME2_2: "ME2_2",
}

var MyEnum2ToValue = map[string]MyEnum2 {
  "ME2_0": MyEnum2_ME2_0,
  "ME2_1": MyEnum2_ME2_1,
  "ME2_2": MyEnum2_ME2_2,
}

var MyEnum2Names = []string {
  "ME2_0",
  "ME2_1",
  "ME2_2",
}

var MyEnum2Values = []MyEnum2 {
  MyEnum2_ME2_0,
  MyEnum2_ME2_1,
  MyEnum2_ME2_2,
}

func (p MyEnum2) String() string {
  if v, ok := MyEnum2ToName[p]; ok {
    return v
  }
  return "<UNSET>"
}

func MyEnum2FromString(s string) (MyEnum2, error) {
  if v, ok := MyEnum2ToValue[s]; ok {
    return v, nil
  }
  return MyEnum2(0), fmt.Errorf("not a valid MyEnum2 string")
}

func MyEnum2Ptr(v MyEnum2) *MyEnum2 { return &v }

type MyEnum3 int64
const (
  MyEnum3_ME3_0 MyEnum3 = 0
  MyEnum3_ME3_1 MyEnum3 = 1
  MyEnum3_ME3_N2 MyEnum3 = -2
  MyEnum3_ME3_N1 MyEnum3 = -1
  MyEnum3_ME3_9 MyEnum3 = 9
  MyEnum3_ME3_10 MyEnum3 = 10
)

var MyEnum3ToName = map[MyEnum3]string {
  MyEnum3_ME3_0: "ME3_0",
  MyEnum3_ME3_1: "ME3_1",
  MyEnum3_ME3_N2: "ME3_N2",
  MyEnum3_ME3_N1: "ME3_N1",
  MyEnum3_ME3_9: "ME3_9",
  MyEnum3_ME3_10: "ME3_10",
}

var MyEnum3ToValue = map[string]MyEnum3 {
  "ME3_0": MyEnum3_ME3_0,
  "ME3_1": MyEnum3_ME3_1,
  "ME3_N2": MyEnum3_ME3_N2,
  "ME3_N1": MyEnum3_ME3_N1,
  "ME3_9": MyEnum3_ME3_9,
  "ME3_10": MyEnum3_ME3_10,
}

var MyEnum3Names = []string {
  "ME3_0",
  "ME3_1",
  "ME3_N2",
  "ME3_N1",
  "ME3_9",
  "ME3_10",
}

var MyEnum3Values = []MyEnum3 {
  MyEnum3_ME3_0,
  MyEnum3_ME3_1,
  MyEnum3_ME3_N2,
  MyEnum3_ME3_N1,
  MyEnum3_ME3_9,
  MyEnum3_ME3_10,
}

func (p MyEnum3) String() string {
  if v, ok := MyEnum3ToName[p]; ok {
    return v
  }
  return "<UNSET>"
}

func MyEnum3FromString(s string) (MyEnum3, error) {
  if v, ok := MyEnum3ToValue[s]; ok {
    return v, nil
  }
  return MyEnum3(0), fmt.Errorf("not a valid MyEnum3 string")
}

func MyEnum3Ptr(v MyEnum3) *MyEnum3 { return &v }

type MyEnum4 int64
const (
  MyEnum4_ME4_A MyEnum4 = 2147483645
  MyEnum4_ME4_B MyEnum4 = 2147483646
  MyEnum4_ME4_C MyEnum4 = 2147483647
  MyEnum4_ME4_D MyEnum4 = -2147483648
)

var MyEnum4ToName = map[MyEnum4]string {
  MyEnum4_ME4_A: "ME4_A",
  MyEnum4_ME4_B: "ME4_B",
  MyEnum4_ME4_C: "ME4_C",
  MyEnum4_ME4_D: "ME4_D",
}

var MyEnum4ToValue = map[string]MyEnum4 {
  "ME4_A": MyEnum4_ME4_A,
  "ME4_B": MyEnum4_ME4_B,
  "ME4_C": MyEnum4_ME4_C,
  "ME4_D": MyEnum4_ME4_D,
}

var MyEnum4Names = []string {
  "ME4_A",
  "ME4_B",
  "ME4_C",
  "ME4_D",
}

var MyEnum4Values = []MyEnum4 {
  MyEnum4_ME4_A,
  MyEnum4_ME4_B,
  MyEnum4_ME4_C,
  MyEnum4_ME4_D,
}

func (p MyEnum4) String() string {
  if v, ok := MyEnum4ToName[p]; ok {
    return v
  }
  return "<UNSET>"
}

func MyEnum4FromString(s string) (MyEnum4, error) {
  if v, ok := MyEnum4ToValue[s]; ok {
    return v, nil
  }
  return MyEnum4(0), fmt.Errorf("not a valid MyEnum4 string")
}

func MyEnum4Ptr(v MyEnum4) *MyEnum4 { return &v }

type MyBitmaskEnum1 int64
const (
  MyBitmaskEnum1_ONE MyBitmaskEnum1 = 1
  MyBitmaskEnum1_TWO MyBitmaskEnum1 = 2
  MyBitmaskEnum1_FOUR MyBitmaskEnum1 = 4
)

var MyBitmaskEnum1ToName = map[MyBitmaskEnum1]string {
  MyBitmaskEnum1_ONE: "ONE",
  MyBitmaskEnum1_TWO: "TWO",
  MyBitmaskEnum1_FOUR: "FOUR",
}

var MyBitmaskEnum1ToValue = map[string]MyBitmaskEnum1 {
  "ONE": MyBitmaskEnum1_ONE,
  "TWO": MyBitmaskEnum1_TWO,
  "FOUR": MyBitmaskEnum1_FOUR,
}

var MyBitmaskEnum1Names = []string {
  "ONE",
  "TWO",
  "FOUR",
}

var MyBitmaskEnum1Values = []MyBitmaskEnum1 {
  MyBitmaskEnum1_ONE,
  MyBitmaskEnum1_TWO,
  MyBitmaskEnum1_FOUR,
}

func (p MyBitmaskEnum1) String() string {
  if v, ok := MyBitmaskEnum1ToName[p]; ok {
    return v
  }
  return "<UNSET>"
}

func MyBitmaskEnum1FromString(s string) (MyBitmaskEnum1, error) {
  if v, ok := MyBitmaskEnum1ToValue[s]; ok {
    return v, nil
  }
  return MyBitmaskEnum1(0), fmt.Errorf("not a valid MyBitmaskEnum1 string")
}

func MyBitmaskEnum1Ptr(v MyBitmaskEnum1) *MyBitmaskEnum1 { return &v }

type MyBitmaskEnum2 int64
const (
  MyBitmaskEnum2_ONE MyBitmaskEnum2 = 1
  MyBitmaskEnum2_TWO MyBitmaskEnum2 = 2
  MyBitmaskEnum2_FOUR MyBitmaskEnum2 = 4
)

var MyBitmaskEnum2ToName = map[MyBitmaskEnum2]string {
  MyBitmaskEnum2_ONE: "ONE",
  MyBitmaskEnum2_TWO: "TWO",
  MyBitmaskEnum2_FOUR: "FOUR",
}

var MyBitmaskEnum2ToValue = map[string]MyBitmaskEnum2 {
  "ONE": MyBitmaskEnum2_ONE,
  "TWO": MyBitmaskEnum2_TWO,
  "FOUR": MyBitmaskEnum2_FOUR,
}

var MyBitmaskEnum2Names = []string {
  "ONE",
  "TWO",
  "FOUR",
}

var MyBitmaskEnum2Values = []MyBitmaskEnum2 {
  MyBitmaskEnum2_ONE,
  MyBitmaskEnum2_TWO,
  MyBitmaskEnum2_FOUR,
}

func (p MyBitmaskEnum2) String() string {
  if v, ok := MyBitmaskEnum2ToName[p]; ok {
    return v
  }
  return "<UNSET>"
}

func MyBitmaskEnum2FromString(s string) (MyBitmaskEnum2, error) {
  if v, ok := MyBitmaskEnum2ToValue[s]; ok {
    return v, nil
  }
  return MyBitmaskEnum2(0), fmt.Errorf("not a valid MyBitmaskEnum2 string")
}

func MyBitmaskEnum2Ptr(v MyBitmaskEnum2) *MyBitmaskEnum2 { return &v }

// Attributes:
//  - Reasonable
//  - Fine
//  - Questionable
//  - Tags
type SomeStruct struct {
  Reasonable Metasyntactic `thrift:"reasonable,1" db:"reasonable" json:"reasonable"`
  Fine Metasyntactic `thrift:"fine,2" db:"fine" json:"fine"`
  Questionable Metasyntactic `thrift:"questionable,3" db:"questionable" json:"questionable"`
  Tags []int32 `thrift:"tags,4" db:"tags" json:"tags"`
}

func NewSomeStruct() *SomeStruct {
  return &SomeStruct{
    Reasonable: 1,
    Fine: 2,
    Questionable: -1,
    Tags: []int32{
    },
  }
}


func (p *SomeStruct) GetReasonable() Metasyntactic {
  return p.Reasonable
}

func (p *SomeStruct) GetFine() Metasyntactic {
  return p.Fine
}

func (p *SomeStruct) GetQuestionable() Metasyntactic {
  return p.Questionable
}

func (p *SomeStruct) GetTags() []int32 {
  return p.Tags
}
type SomeStructBuilder struct {
  obj *SomeStruct
}

func NewSomeStructBuilder() *SomeStructBuilder{
  return &SomeStructBuilder{
    obj: NewSomeStruct(),
  }
}

func (p SomeStructBuilder) Emit() *SomeStruct{
  return &SomeStruct{
    Reasonable: p.obj.Reasonable,
    Fine: p.obj.Fine,
    Questionable: p.obj.Questionable,
    Tags: p.obj.Tags,
  }
}

func (s *SomeStructBuilder) Reasonable(reasonable Metasyntactic) *SomeStructBuilder {
  s.obj.Reasonable = reasonable
  return s
}

func (s *SomeStructBuilder) Fine(fine Metasyntactic) *SomeStructBuilder {
  s.obj.Fine = fine
  return s
}

func (s *SomeStructBuilder) Questionable(questionable Metasyntactic) *SomeStructBuilder {
  s.obj.Questionable = questionable
  return s
}

func (s *SomeStructBuilder) Tags(tags []int32) *SomeStructBuilder {
  s.obj.Tags = tags
  return s
}

func (s *SomeStruct) SetReasonable(reasonable Metasyntactic) *SomeStruct {
  s.Reasonable = reasonable
  return s
}

func (s *SomeStruct) SetFine(fine Metasyntactic) *SomeStruct {
  s.Fine = fine
  return s
}

func (s *SomeStruct) SetQuestionable(questionable Metasyntactic) *SomeStruct {
  s.Questionable = questionable
  return s
}

func (s *SomeStruct) SetTags(tags []int32) *SomeStruct {
  s.Tags = tags
  return s
}

func (p *SomeStruct) Read(iprot thrift.Protocol) error {
  if _, err := iprot.ReadStructBegin(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T read error: ", p), err)
  }


  for {
    _, fieldTypeId, fieldId, err := iprot.ReadFieldBegin()
    if err != nil {
      return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", p, fieldId), err)
    }
    if fieldTypeId == thrift.STOP { break; }
    switch fieldId {
    case 1:
      if err := p.ReadField1(iprot); err != nil {
        return err
      }
    case 2:
      if err := p.ReadField2(iprot); err != nil {
        return err
      }
    case 3:
      if err := p.ReadField3(iprot); err != nil {
        return err
      }
    case 4:
      if err := p.ReadField4(iprot); err != nil {
        return err
      }
    default:
      if err := iprot.Skip(fieldTypeId); err != nil {
        return err
      }
    }
    if err := iprot.ReadFieldEnd(); err != nil {
      return err
    }
  }
  if err := iprot.ReadStructEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", p), err)
  }
  return nil
}

func (p *SomeStruct)  ReadField1(iprot thrift.Protocol) error {
  if v, err := iprot.ReadI32(); err != nil {
    return thrift.PrependError("error reading field 1: ", err)
  } else {
    temp := Metasyntactic(v)
    p.Reasonable = temp
  }
  return nil
}

func (p *SomeStruct)  ReadField2(iprot thrift.Protocol) error {
  if v, err := iprot.ReadI32(); err != nil {
    return thrift.PrependError("error reading field 2: ", err)
  } else {
    temp := Metasyntactic(v)
    p.Fine = temp
  }
  return nil
}

func (p *SomeStruct)  ReadField3(iprot thrift.Protocol) error {
  if v, err := iprot.ReadI32(); err != nil {
    return thrift.PrependError("error reading field 3: ", err)
  } else {
    temp := Metasyntactic(v)
    p.Questionable = temp
  }
  return nil
}

func (p *SomeStruct)  ReadField4(iprot thrift.Protocol) error {
  _, size, err := iprot.ReadSetBegin()
  if err != nil {
    return thrift.PrependError("error reading set begin: ", err)
  }
  tSet := make([]int32, 0, size)
  p.Tags =  tSet
  for i := 0; i < size; i ++ {
    var _elem1 int32
    if v, err := iprot.ReadI32(); err != nil {
      return thrift.PrependError("error reading field 0: ", err)
    } else {
      _elem1 = v
    }
    p.Tags = append(p.Tags, _elem1)
  }
  if err := iprot.ReadSetEnd(); err != nil {
    return thrift.PrependError("error reading set end: ", err)
  }
  return nil
}

func (p *SomeStruct) Write(oprot thrift.Protocol) error {
  if err := oprot.WriteStructBegin("SomeStruct"); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", p), err) }
  if err := p.writeField1(oprot); err != nil { return err }
  if err := p.writeField2(oprot); err != nil { return err }
  if err := p.writeField3(oprot); err != nil { return err }
  if err := p.writeField4(oprot); err != nil { return err }
  if err := oprot.WriteFieldStop(); err != nil {
    return thrift.PrependError("write field stop error: ", err) }
  if err := oprot.WriteStructEnd(); err != nil {
    return thrift.PrependError("write struct stop error: ", err) }
  return nil
}

func (p *SomeStruct) writeField1(oprot thrift.Protocol) (err error) {
  if err := oprot.WriteFieldBegin("reasonable", thrift.I32, 1); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field begin error 1:reasonable: ", p), err) }
  if err := oprot.WriteI32(int32(p.Reasonable)); err != nil {
  return thrift.PrependError(fmt.Sprintf("%T.reasonable (1) field write error: ", p), err) }
  if err := oprot.WriteFieldEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field end error 1:reasonable: ", p), err) }
  return err
}

func (p *SomeStruct) writeField2(oprot thrift.Protocol) (err error) {
  if err := oprot.WriteFieldBegin("fine", thrift.I32, 2); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field begin error 2:fine: ", p), err) }
  if err := oprot.WriteI32(int32(p.Fine)); err != nil {
  return thrift.PrependError(fmt.Sprintf("%T.fine (2) field write error: ", p), err) }
  if err := oprot.WriteFieldEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field end error 2:fine: ", p), err) }
  return err
}

func (p *SomeStruct) writeField3(oprot thrift.Protocol) (err error) {
  if err := oprot.WriteFieldBegin("questionable", thrift.I32, 3); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field begin error 3:questionable: ", p), err) }
  if err := oprot.WriteI32(int32(p.Questionable)); err != nil {
  return thrift.PrependError(fmt.Sprintf("%T.questionable (3) field write error: ", p), err) }
  if err := oprot.WriteFieldEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field end error 3:questionable: ", p), err) }
  return err
}

func (p *SomeStruct) writeField4(oprot thrift.Protocol) (err error) {
  if err := oprot.WriteFieldBegin("tags", thrift.SET, 4); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field begin error 4:tags: ", p), err) }
  if err := oprot.WriteSetBegin(thrift.I32, len(p.Tags)); err != nil {
    return thrift.PrependError("error writing set begin: ", err)
  }
  set := make(map[int32]bool, len(p.Tags))
  for _, v := range p.Tags {
    if ok := set[v]; ok {
      return thrift.PrependError("", fmt.Errorf("%T error writing set field: slice is not unique", v))
    }
    set[v] = true
  }
  for _, v := range p.Tags {
    if err := oprot.WriteI32(int32(v)); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T. (0) field write error: ", p), err) }
  }
  if err := oprot.WriteSetEnd(); err != nil {
    return thrift.PrependError("error writing set end: ", err)
  }
  if err := oprot.WriteFieldEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field end error 4:tags: ", p), err) }
  return err
}

func (p *SomeStruct) String() string {
  if p == nil {
    return "<nil>"
  }

  reasonableVal := fmt.Sprintf("%v", p.Reasonable)
  fineVal := fmt.Sprintf("%v", p.Fine)
  questionableVal := fmt.Sprintf("%v", p.Questionable)
  tagsVal := fmt.Sprintf("%v", p.Tags)
  return fmt.Sprintf("SomeStruct({Reasonable:%s Fine:%s Questionable:%s Tags:%s})", reasonableVal, fineVal, questionableVal, tagsVal)
}

// Attributes:
//  - Me2_3
//  - Me3N3
//  - Me1T1
//  - Me1T2
type MyStruct struct {
  Me2_3 MyEnum2 `thrift:"me2_3,1" db:"me2_3" json:"me2_3"`
  Me3N3 MyEnum3 `thrift:"me3_n3,2" db:"me3_n3" json:"me3_n3"`
  // unused field # 3
  Me1T1 MyEnum1 `thrift:"me1_t1,4" db:"me1_t1" json:"me1_t1"`
  // unused field # 5
  Me1T2 MyEnum1 `thrift:"me1_t2,6" db:"me1_t2" json:"me1_t2"`
}

func NewMyStruct() *MyStruct {
  return &MyStruct{
    Me2_3: 3,
    Me3N3: -3,
    Me1T1: 1,
    Me1T2: 1,
  }
}


func (p *MyStruct) GetMe2_3() MyEnum2 {
  return p.Me2_3
}

func (p *MyStruct) GetMe3N3() MyEnum3 {
  return p.Me3N3
}

func (p *MyStruct) GetMe1T1() MyEnum1 {
  return p.Me1T1
}

func (p *MyStruct) GetMe1T2() MyEnum1 {
  return p.Me1T2
}
type MyStructBuilder struct {
  obj *MyStruct
}

func NewMyStructBuilder() *MyStructBuilder{
  return &MyStructBuilder{
    obj: NewMyStruct(),
  }
}

func (p MyStructBuilder) Emit() *MyStruct{
  return &MyStruct{
    Me2_3: p.obj.Me2_3,
    Me3N3: p.obj.Me3N3,
    Me1T1: p.obj.Me1T1,
    Me1T2: p.obj.Me1T2,
  }
}

func (m *MyStructBuilder) Me2_3(me2_3 MyEnum2) *MyStructBuilder {
  m.obj.Me2_3 = me2_3
  return m
}

func (m *MyStructBuilder) Me3N3(me3N3 MyEnum3) *MyStructBuilder {
  m.obj.Me3N3 = me3N3
  return m
}

func (m *MyStructBuilder) Me1T1(me1T1 MyEnum1) *MyStructBuilder {
  m.obj.Me1T1 = me1T1
  return m
}

func (m *MyStructBuilder) Me1T2(me1T2 MyEnum1) *MyStructBuilder {
  m.obj.Me1T2 = me1T2
  return m
}

func (m *MyStruct) SetMe2_3(me2_3 MyEnum2) *MyStruct {
  m.Me2_3 = me2_3
  return m
}

func (m *MyStruct) SetMe3N3(me3N3 MyEnum3) *MyStruct {
  m.Me3N3 = me3N3
  return m
}

func (m *MyStruct) SetMe1T1(me1T1 MyEnum1) *MyStruct {
  m.Me1T1 = me1T1
  return m
}

func (m *MyStruct) SetMe1T2(me1T2 MyEnum1) *MyStruct {
  m.Me1T2 = me1T2
  return m
}

func (p *MyStruct) Read(iprot thrift.Protocol) error {
  if _, err := iprot.ReadStructBegin(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T read error: ", p), err)
  }


  for {
    _, fieldTypeId, fieldId, err := iprot.ReadFieldBegin()
    if err != nil {
      return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", p, fieldId), err)
    }
    if fieldTypeId == thrift.STOP { break; }
    switch fieldId {
    case 1:
      if err := p.ReadField1(iprot); err != nil {
        return err
      }
    case 2:
      if err := p.ReadField2(iprot); err != nil {
        return err
      }
    case 4:
      if err := p.ReadField4(iprot); err != nil {
        return err
      }
    case 6:
      if err := p.ReadField6(iprot); err != nil {
        return err
      }
    default:
      if err := iprot.Skip(fieldTypeId); err != nil {
        return err
      }
    }
    if err := iprot.ReadFieldEnd(); err != nil {
      return err
    }
  }
  if err := iprot.ReadStructEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", p), err)
  }
  return nil
}

func (p *MyStruct)  ReadField1(iprot thrift.Protocol) error {
  if v, err := iprot.ReadI32(); err != nil {
    return thrift.PrependError("error reading field 1: ", err)
  } else {
    temp := MyEnum2(v)
    p.Me2_3 = temp
  }
  return nil
}

func (p *MyStruct)  ReadField2(iprot thrift.Protocol) error {
  if v, err := iprot.ReadI32(); err != nil {
    return thrift.PrependError("error reading field 2: ", err)
  } else {
    temp := MyEnum3(v)
    p.Me3N3 = temp
  }
  return nil
}

func (p *MyStruct)  ReadField4(iprot thrift.Protocol) error {
  if v, err := iprot.ReadI32(); err != nil {
    return thrift.PrependError("error reading field 4: ", err)
  } else {
    temp := MyEnum1(v)
    p.Me1T1 = temp
  }
  return nil
}

func (p *MyStruct)  ReadField6(iprot thrift.Protocol) error {
  if v, err := iprot.ReadI32(); err != nil {
    return thrift.PrependError("error reading field 6: ", err)
  } else {
    temp := MyEnum1(v)
    p.Me1T2 = temp
  }
  return nil
}

func (p *MyStruct) Write(oprot thrift.Protocol) error {
  if err := oprot.WriteStructBegin("MyStruct"); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", p), err) }
  if err := p.writeField1(oprot); err != nil { return err }
  if err := p.writeField2(oprot); err != nil { return err }
  if err := p.writeField4(oprot); err != nil { return err }
  if err := p.writeField6(oprot); err != nil { return err }
  if err := oprot.WriteFieldStop(); err != nil {
    return thrift.PrependError("write field stop error: ", err) }
  if err := oprot.WriteStructEnd(); err != nil {
    return thrift.PrependError("write struct stop error: ", err) }
  return nil
}

func (p *MyStruct) writeField1(oprot thrift.Protocol) (err error) {
  if err := oprot.WriteFieldBegin("me2_3", thrift.I32, 1); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field begin error 1:me2_3: ", p), err) }
  if err := oprot.WriteI32(int32(p.Me2_3)); err != nil {
  return thrift.PrependError(fmt.Sprintf("%T.me2_3 (1) field write error: ", p), err) }
  if err := oprot.WriteFieldEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field end error 1:me2_3: ", p), err) }
  return err
}

func (p *MyStruct) writeField2(oprot thrift.Protocol) (err error) {
  if err := oprot.WriteFieldBegin("me3_n3", thrift.I32, 2); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field begin error 2:me3_n3: ", p), err) }
  if err := oprot.WriteI32(int32(p.Me3N3)); err != nil {
  return thrift.PrependError(fmt.Sprintf("%T.me3_n3 (2) field write error: ", p), err) }
  if err := oprot.WriteFieldEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field end error 2:me3_n3: ", p), err) }
  return err
}

func (p *MyStruct) writeField4(oprot thrift.Protocol) (err error) {
  if err := oprot.WriteFieldBegin("me1_t1", thrift.I32, 4); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field begin error 4:me1_t1: ", p), err) }
  if err := oprot.WriteI32(int32(p.Me1T1)); err != nil {
  return thrift.PrependError(fmt.Sprintf("%T.me1_t1 (4) field write error: ", p), err) }
  if err := oprot.WriteFieldEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field end error 4:me1_t1: ", p), err) }
  return err
}

func (p *MyStruct) writeField6(oprot thrift.Protocol) (err error) {
  if err := oprot.WriteFieldBegin("me1_t2", thrift.I32, 6); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field begin error 6:me1_t2: ", p), err) }
  if err := oprot.WriteI32(int32(p.Me1T2)); err != nil {
  return thrift.PrependError(fmt.Sprintf("%T.me1_t2 (6) field write error: ", p), err) }
  if err := oprot.WriteFieldEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field end error 6:me1_t2: ", p), err) }
  return err
}

func (p *MyStruct) String() string {
  if p == nil {
    return "<nil>"
  }

  me2_3Val := fmt.Sprintf("%v", p.Me2_3)
  me3N3Val := fmt.Sprintf("%v", p.Me3N3)
  me1T1Val := fmt.Sprintf("%v", p.Me1T1)
  me1T2Val := fmt.Sprintf("%v", p.Me1T2)
  return fmt.Sprintf("MyStruct({Me2_3:%s Me3N3:%s Me1T1:%s Me1T2:%s})", me2_3Val, me3N3Val, me1T1Val, me1T2Val)
}

