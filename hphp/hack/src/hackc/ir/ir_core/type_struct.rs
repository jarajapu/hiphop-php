// Copyright (c) Facebook, Inc. and its affiliates. All Rights Reserved.

pub use hhvm_types_ffi::ffi::TypeStructureKind;
use intern::bytes_id;

use crate::ArrayKey;
use crate::BytesId;
use crate::ClassName;
use crate::StringInterner;
use crate::TypedValue;

#[derive(Debug, Clone, Hash, Eq, PartialEq)]
pub enum TypeStruct {
    Unresolved(ClassName),
    Null,
    Nonnull,
}

impl TypeStruct {
    pub fn into_typed_value(self, _: &StringInterner) -> TypedValue {
        let kind_key = ArrayKey::String(bytes_id!(b"kind"));

        match self {
            TypeStruct::Unresolved(cid) => {
                let kind = TypedValue::Int(TypeStructureKind::T_unresolved.repr as i64);
                let classname_key = ArrayKey::String(bytes_id!(b"classname"));
                let name = TypedValue::String(cid.as_bytes_id());
                TypedValue::Dict(
                    [(kind_key, kind), (classname_key, name)]
                        .into_iter()
                        .collect(),
                )
            }
            TypeStruct::Null => {
                let kind = TypedValue::Int(TypeStructureKind::T_null.repr as i64);
                TypedValue::Dict([(kind_key, kind)].into_iter().collect())
            }
            TypeStruct::Nonnull => {
                let kind = TypedValue::Int(TypeStructureKind::T_nonnull.repr as i64);
                TypedValue::Dict([(kind_key, kind)].into_iter().collect())
            }
        }
    }

    pub fn try_from_typed_value(tv: &TypedValue, _: &StringInterner) -> Option<TypeStruct> {
        let dv = tv.get_dict()?;
        let kind_key = ArrayKey::String(bytes_id!(b"kind"));
        let kind = dv.get(&kind_key)?.get_int()?;
        if kind == i64::from(TypeStructureKind::T_null) {
            Some(TypeStruct::Null)
        } else if kind == i64::from(TypeStructureKind::T_nonnull) {
            Some(TypeStruct::Nonnull)
        } else if kind == i64::from(TypeStructureKind::T_unresolved) {
            let classname_key = ArrayKey::String(bytes_id!(b"classname"));
            let classname = dv.get(&classname_key)?.get_string()?;
            if classname == BytesId::EMPTY {
                None
            } else {
                let cid = ClassName::from_bytes(classname).ok()?;
                Some(TypeStruct::Unresolved(cid))
            }
        } else {
            None
        }
    }
}

#[cfg(test)]
mod test {
    use super::*;
    use crate::StringInterner;

    #[test]
    fn test1() {
        let strings = StringInterner::default();
        assert_eq!(
            TypeStruct::try_from_typed_value(
                &TypeStruct::Null.into_typed_value(&strings),
                &strings
            ),
            Some(TypeStruct::Null)
        );

        assert_eq!(
            TypeStruct::try_from_typed_value(
                &TypeStruct::Nonnull.into_typed_value(&strings),
                &strings
            ),
            Some(TypeStruct::Nonnull)
        );

        let class_ts = TypeStruct::Unresolved(ClassName::intern("ExampleClass"));
        assert_eq!(
            TypeStruct::try_from_typed_value(
                &class_ts.clone().into_typed_value(&strings),
                &strings
            ),
            Some(class_ts)
        );
    }
}
