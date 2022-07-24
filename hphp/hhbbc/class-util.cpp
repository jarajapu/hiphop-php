/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010-present Facebook, Inc. (http://www.facebook.com)  |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
*/
#include "hphp/hhbbc/class-util.h"

#include "hphp/hhbbc/context.h"
#include "hphp/hhbbc/index.h"
#include "hphp/hhbbc/representation.h"
#include "hphp/hhbbc/type-system.h"

#include "hphp/runtime/base/array-init.h"
#include "hphp/runtime/base/collections.h"

#include "hphp/runtime/vm/preclass-emitter.h"

namespace HPHP::HHBBC {

//////////////////////////////////////////////////////////////////////

namespace {

const StaticString
  s_SimpleXMLElement("SimpleXMLElement"),
  s_Closure("Closure"),
  s_MockClass("__MockClass"),
  s_NoFlatten("__NoFlatten");
}

//////////////////////////////////////////////////////////////////////

bool has_magic_bool_conversion(SString clsName) {
  return
    collections::isTypeName(clsName) ||
    clsName->isame(s_SimpleXMLElement.get());
}

bool is_collection(res::Class cls) {
  auto const name = cls.name();
  return collections::isTypeName(name);
}

php::Func* find_method(const php::Class* cls, SString name) {
  for (auto& m : cls->methods) {
    if (m->name == name) {
      return m.get();
    }
  }
  return nullptr;
}

bool is_special_method_name(SString name) {
  auto const p = name->data();
  return p && p[0] == '8' && p[1] == '6';
}

bool is_mock_class(const php::Class* cls) {
  return cls->userAttributes.count(s_MockClass.get());
}

bool is_noflatten_trait(const php::Class* cls) {
  assertx(cls->attrs & AttrTrait);
  return cls->userAttributes.count(s_NoFlatten.get());
}

bool is_closure(const php::Class& c) {
  return c.parentName && c.parentName->isame(s_Closure.get());
}

bool is_unused_trait(const php::Class& c) {
  return
    (c.attrs & (AttrTrait | AttrNoOverride)) == (AttrTrait | AttrNoOverride);
}

bool is_used_trait(const php::Class& c) {
  return
    (c.attrs & (AttrTrait | AttrNoOverride)) == AttrTrait;
}

bool prop_might_have_bad_initial_value(const Index& index,
                                       const php::Class& cls,
                                       const php::Prop& prop) {
  assertx(!is_used_trait(cls));

  if (is_closure(cls)) return false;
  if (prop.attrs & (AttrSystemInitialValue | AttrLateInit)) return false;

  auto const initial = from_cell(prop.val);
  if (initial.subtypeOf(BUninit)) return true;

  auto const ctx = Context{ cls.unit, nullptr, &cls };
  if (!index.satisfies_constraint(ctx, initial, prop.typeConstraint)) {
    return true;
  }

  return std::any_of(
    prop.ubs.begin(), prop.ubs.end(),
    [&] (TypeConstraint ub) {
      applyFlagsToUB(ub, prop.typeConstraint);
      return !index.satisfies_constraint(ctx, initial, ub);
    }
  );
}

//////////////////////////////////////////////////////////////////////

Type get_type_of_reified_list(const UserAttributeMap& ua) {
  auto const it = ua.find(s___Reified.get());
  assertx(it != ua.end());
  auto const tv = it->second;
  assertx(tvIsVec(&tv));
  auto const info = extractSizeAndPosFromReifiedAttribute(tv.m_data.parr);
  auto const numGenerics = info.m_typeParamInfo.size();
  assertx(numGenerics > 0);

  auto t = vec(std::vector<Type>(numGenerics, TDict));

  // If the type params are all soft, the reified list is allowed to
  // be empty.
  auto const allSoft = [&] {
    for (auto const& tp : info.m_typeParamInfo) {
      if (!tp.m_isSoft) return false;
    }
    return true;
  }();
  if (allSoft) t |= TVecE;
  return t;
}

// The value returned from this must satisfy the type returned from
// get_type_of_reified_list.
TypedValue get_default_value_of_reified_list(const UserAttributeMap& ua) {
  auto const it = ua.find(s___Reified.get());
  assertx(it != ua.end());
  auto const tv = it->second;
  assertx(tvIsVec(&tv));
  auto const info = extractSizeAndPosFromReifiedAttribute(tv.m_data.parr);
  auto const numGenerics = info.m_typeParamInfo.size();
  assertx(numGenerics > 0);

  // Empty vec is allowed for the "all soft" case, so use that if it
  // applies.
  auto const allSoft = [&] {
    for (auto const& tp : info.m_typeParamInfo) {
      if (!tp.m_isSoft) return false;
    }
    return true;
  }();
  if (allSoft) return make_tv<KindOfPersistentVec>(staticEmptyVec());

  // Otherwise make a vec of the appropriate size filled with empty
  // dicts, which satisfies get_type_of_reified_list.
  VecInit init{numGenerics};
  for (size_t i = 0; i < numGenerics; ++i) {
    init.append(make_tv<KindOfPersistentDict>(staticEmptyDictArray()));
  }
  auto var = init.toVariant();
  var.setEvalScalar();
  return *var.asTypedValue();
}

Type loosen_this_prop_for_serialization(const php::Class& ctx,
                                        SString name,
                                        Type type) {
  // The 86reified_prop has special enforcement for serialization, so
  // we don't have to pessimize it as much.
  if (name == s_86reified_prop.get()) {
    return union_of(
      std::move(type),
      get_type_of_reified_list(ctx.userAttributes)
    );
  }
  return loosen_vec_or_dict(loosen_all(std::move(type)));
}

//////////////////////////////////////////////////////////////////////

namespace php {

//////////////////////////////////////////////////////////////////////

ClassBase::ClassBase(const ClassBase& other) {
  for (auto& m : other.methods) {
    methods.push_back(std::make_unique<php::Func>(*m));
  }
}

//////////////////////////////////////////////////////////////////////

}

//////////////////////////////////////////////////////////////////////

}
