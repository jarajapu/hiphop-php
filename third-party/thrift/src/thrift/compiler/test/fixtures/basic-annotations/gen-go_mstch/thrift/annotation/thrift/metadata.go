// @generated by Thrift for [[[ program path ]]]
// This file is probably not the place you want to edit!

package thrift // [[[ program thrift source path ]]]

import (
    thrift "github.com/facebook/fbthrift/thrift/lib/go/thrift"
    metadata "github.com/facebook/fbthrift/thrift/lib/thrift/metadata"
)

// (needed to ensure safety because of naive import list construction)
var _ = thrift.ZERO
var _ = metadata.GoUnusedProtection__

// Premade Thrift types
var (
    premadeThriftType_i32 = metadata.NewThriftType().SetTPrimitive(
        metadata.ThriftPrimitiveType_THRIFT_I32_TYPE.Ptr(),
            )
    premadeThriftType_list_i32 = metadata.NewThriftType().SetTList(
        metadata.NewThriftListType().
            SetValueType(premadeThriftType_i32),
            )
    premadeThriftType_map_i32_i32 = metadata.NewThriftType().SetTMap(
        metadata.NewThriftMapType().
            SetKeyType(premadeThriftType_i32).
            SetValueType(premadeThriftType_i32),
            )
    premadeThriftType_bool = metadata.NewThriftType().SetTPrimitive(
        metadata.ThriftPrimitiveType_THRIFT_BOOL_TYPE.Ptr(),
            )
    premadeThriftType_string = metadata.NewThriftType().SetTPrimitive(
        metadata.ThriftPrimitiveType_THRIFT_STRING_TYPE.Ptr(),
            )
    premadeThriftType_thrift_RpcPriority = metadata.NewThriftType().SetTEnum(
        metadata.NewThriftEnumType().
            SetName("thrift.RpcPriority"),
            )
    premadeThriftType_map_string_string = metadata.NewThriftType().SetTMap(
        metadata.NewThriftMapType().
            SetKeyType(premadeThriftType_string).
            SetValueType(premadeThriftType_string),
            )
)

var structMetadatas = []*metadata.ThriftStruct{
    metadata.NewThriftStruct().
    SetName("thrift.Experimental").
    SetIsUnion(false),
    metadata.NewThriftStruct().
    SetName("thrift.ReserveIds").
    SetIsUnion(false).
    SetFields(
        []*metadata.ThriftField{
            metadata.NewThriftField().
    SetId(1).
    SetName("ids").
    SetIsOptional(false).
    SetType(premadeThriftType_list_i32),
            metadata.NewThriftField().
    SetId(2).
    SetName("id_ranges").
    SetIsOptional(false).
    SetType(premadeThriftType_map_i32_i32),
        },
    ),
    metadata.NewThriftStruct().
    SetName("thrift.RequiresBackwardCompatibility").
    SetIsUnion(false).
    SetFields(
        []*metadata.ThriftField{
            metadata.NewThriftField().
    SetId(1).
    SetName("field_name").
    SetIsOptional(false).
    SetType(premadeThriftType_bool),
        },
    ),
    metadata.NewThriftStruct().
    SetName("thrift.TerseWrite").
    SetIsUnion(false),
    metadata.NewThriftStruct().
    SetName("thrift.Box").
    SetIsUnion(false),
    metadata.NewThriftStruct().
    SetName("thrift.Mixin").
    SetIsUnion(false),
    metadata.NewThriftStruct().
    SetName("thrift.SerializeInFieldIdOrder").
    SetIsUnion(false),
    metadata.NewThriftStruct().
    SetName("thrift.BitmaskEnum").
    SetIsUnion(false),
    metadata.NewThriftStruct().
    SetName("thrift.ExceptionMessage").
    SetIsUnion(false),
    metadata.NewThriftStruct().
    SetName("thrift.GenerateRuntimeSchema").
    SetIsUnion(false).
    SetFields(
        []*metadata.ThriftField{
            metadata.NewThriftField().
    SetId(1).
    SetName("name").
    SetIsOptional(false).
    SetType(premadeThriftType_string),
        },
    ),
    metadata.NewThriftStruct().
    SetName("thrift.InternBox").
    SetIsUnion(false),
    metadata.NewThriftStruct().
    SetName("thrift.Serial").
    SetIsUnion(false),
    metadata.NewThriftStruct().
    SetName("thrift.Uri").
    SetIsUnion(false).
    SetFields(
        []*metadata.ThriftField{
            metadata.NewThriftField().
    SetId(1).
    SetName("value").
    SetIsOptional(false).
    SetType(premadeThriftType_string),
        },
    ),
    metadata.NewThriftStruct().
    SetName("thrift.Priority").
    SetIsUnion(false).
    SetFields(
        []*metadata.ThriftField{
            metadata.NewThriftField().
    SetId(1).
    SetName("level").
    SetIsOptional(false).
    SetType(premadeThriftType_thrift_RpcPriority),
        },
    ),
    metadata.NewThriftStruct().
    SetName("thrift.DeprecatedUnvalidatedAnnotations").
    SetIsUnion(false).
    SetFields(
        []*metadata.ThriftField{
            metadata.NewThriftField().
    SetId(1).
    SetName("items").
    SetIsOptional(false).
    SetType(premadeThriftType_map_string_string),
        },
    ),
}

var exceptionMetadatas = []*metadata.ThriftException{
}

var enumMetadatas = []*metadata.ThriftEnum{
    metadata.NewThriftEnum().
    SetName("thrift.RpcPriority").
    SetElements(
        map[int32]string{
            0: "HIGH_IMPORTANT",
            1: "HIGH",
            2: "IMPORTANT",
            3: "NORMAL",
            4: "BEST_EFFORT",
        },
    ),
}

var serviceMetadatas = []*metadata.ThriftService{
}

// GetThriftMetadata returns complete Thrift metadata for current and imported packages.
func GetThriftMetadata() *metadata.ThriftMetadata {
    includedEnumsMetadatas := []map[string]*metadata.ThriftEnum{
        GetEnumsMetadata(),
    }
    includedStructsMetadatas := []map[string]*metadata.ThriftStruct{
        GetStructsMetadata(),
    }
    includedExceptionsMetadatas := []map[string]*metadata.ThriftException{
        GetExceptionsMetadata(),
    }
    includedServicesMetadatas := []map[string]*metadata.ThriftService{
        GetServicesMetadata(),
    }

	allEnums := make(map[string]*metadata.ThriftEnum)
	allStructs := make(map[string]*metadata.ThriftStruct)
	allExceptions := make(map[string]*metadata.ThriftException)
    allServices := make(map[string]*metadata.ThriftService)

    for _, includedEnumsMetadata := range includedEnumsMetadatas {
        for enumName, thriftEnum := range includedEnumsMetadata {
            allEnums[enumName] = thriftEnum
        }
    }
    for _, includedStructsMetadata := range includedStructsMetadatas {
        for structName, thriftStruct := range includedStructsMetadata {
            allStructs[structName] = thriftStruct
        }
    }
    for _, includedExceptionsMetadata := range includedExceptionsMetadatas {
        for exceptionName, thriftException := range includedExceptionsMetadata {
            allExceptions[exceptionName] = thriftException
        }
    }
    for _, includedServicesMetadata := range includedServicesMetadatas {
        for serviceName, thriftService := range includedServicesMetadata {
            allServices[serviceName] = thriftService
        }
    }

    return metadata.NewThriftMetadata().
        SetEnums(allEnums).
        SetStructs(allStructs).
        SetExceptions(allExceptions).
        SetServices(allServices)
}

// GetStructsMetadata returns Thrift metadata for enums in the current package.
func GetEnumsMetadata() map[string]*metadata.ThriftEnum {
    result := make(map[string]*metadata.ThriftEnum)
    for _, enumMetadata := range enumMetadatas {
        result[enumMetadata.GetName()] = enumMetadata
    }
    return result
}

// GetStructsMetadata returns Thrift metadata for structs in the current package.
func GetStructsMetadata() map[string]*metadata.ThriftStruct {
    result := make(map[string]*metadata.ThriftStruct)
    for _, structMetadata := range structMetadatas {
        result[structMetadata.GetName()] = structMetadata
    }
    return result
}

// GetStructsMetadata returns Thrift metadata for exceptions in the current package.
func GetExceptionsMetadata() map[string]*metadata.ThriftException {
    result := make(map[string]*metadata.ThriftException)
    for _, exceptionMetadata := range exceptionMetadatas {
        result[exceptionMetadata.GetName()] = exceptionMetadata
    }
    return result
}

// GetStructsMetadata returns Thrift metadata for services in the current package.
func GetServicesMetadata() map[string]*metadata.ThriftService {
    result := make(map[string]*metadata.ThriftService)
    for _, serviceMetadata := range serviceMetadatas {
        result[serviceMetadata.GetName()] = serviceMetadata
    }
    return result
}
