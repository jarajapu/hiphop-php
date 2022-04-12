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
#pragma once

#include <boost/dynamic_bitset.hpp>

#include "hphp/runtime/vm/jit/block.h"
#include "hphp/runtime/vm/jit/ir-unit.h"

namespace HPHP::jit {

//////////////////////////////////////////////////////////////////////

namespace detail {

// PostorderSort encapsulates a depth-first postorder walk.
template<class Visitor>
struct PostorderSort {
  PostorderSort(Visitor& visitor, unsigned num_blocks)
    : m_visited(num_blocks), m_complete(num_blocks), m_visitor(visitor)
  {
    m_stack.reserve(num_blocks);
  }

  void walk(Block* block) {
    auto const enqueue = [this] (Block* b) {
      if (m_visited.test(b->id())) return;
      m_stack.emplace_back(b);
    };
    enqueue(block);
    while (!m_stack.empty()) {
      block = m_stack.back();
      if (!m_visited.test(block->id())) {
        m_visited.set(block->id());
        if (auto const n = block->next()) enqueue(n);
        if (auto const t = block->taken()) enqueue(t);
      } else {
        m_stack.pop_back();
        // Valid blocks can't be empty, but we can see empty blocks here when
        // trying to print a unit before it's finished for debugging.
        if (!m_complete.test(block->id()) && !block->empty()) {
          m_complete.set(block->id());
          m_visitor(block);
        }
      }
    }
  }

private:
  boost::dynamic_bitset<> m_visited;
  boost::dynamic_bitset<> m_complete;
  jit::vector<Block*> m_stack;
  Visitor& m_visitor;
};

}

//////////////////////////////////////////////////////////////////////

/**
 * Perform a depth-first postorder walk. If a starting Block is not supplied,
 * unit's entry Block will be used.
 */
template <class Visitor>
void postorderWalk(const IRUnit& unit, Visitor visitor, Block* start) {
  detail::PostorderSort<Visitor> ps(visitor, unit.numBlocks());
  ps.walk(start ? start : unit.entry());
}

template <class BlockList, class Body>
void forEachInst(const BlockList& blocks, Body body) {
  for (Block* block : blocks) {
    for (IRInstruction& inst : *block) {
      body(&inst);
    }
  }
}

//////////////////////////////////////////////////////////////////////

}


