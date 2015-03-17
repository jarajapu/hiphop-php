/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010-2014 Facebook, Inc. (http://www.facebook.com)     |
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

#ifndef incl_HPHP_VM_CFG_H_
#define incl_HPHP_VM_CFG_H_

#include "hphp/runtime/vm/jit/containers.h"
#include "hphp/runtime/vm/jit/state-vector.h"

namespace HPHP { namespace jit {

struct IRUnit;
struct Block;

//////////////////////////////////////////////////////////////////////

/**
 * perform a depth-first postorder walk
 */
template <class Visitor>
void postorderWalk(const IRUnit&, Visitor visitor, Block* start = nullptr);

/*
 * Compute a postorder list of the basic blocks reachable from the IR's entry
 * block.
 */
BlockList poSortCfg(const IRUnit&);

/*
 * Compute a reverse postorder list of the basic blocks reachable from
 * the IR's entry block.
 */
BlockList rpoSortCfg(const IRUnit&);

/*
 * Similar to rpoSortCfg, but also returns a StateVector mapping Blocks to
 * their RPO ids.
 */
struct BlocksWithIds {
  BlockList blocks;
  StateVector<Block, uint32_t> ids;
};
BlocksWithIds rpoSortCfgWithIds(const IRUnit&);

/*
 * Split the edge between "from" and "to", returning the new middle block.
 */
Block* splitEdge(IRUnit& unit, Block* from, Block* to);

/*
 * Removes unreachable blocks from the unit and then splits any critical edges.
 *
 * Returns: true iff any modifications were made to the unit.
 */
bool splitCriticalEdges(IRUnit&);

/*
 * Inserts a loop pre-header before every loop header that doesn't have one.
 *
 * Returns: true iff the unit was changed.
 */
bool insertLoopPreHeaders(IRUnit&);

/*
 * Remove unreachable blocks from the given unit.
 *
 * Returns: true iff one or more blocks were deleted.
 */
bool removeUnreachable(IRUnit& unit);

/*
 * Compute the postorder number of each immediate dominator of each
 * block, using a list produced by rpoSortCfg().
 *
 * Pre: blocks is in reverse postorder
 */
typedef StateVector<Block,Block*> IdomVector;
IdomVector findDominators(const IRUnit&, const BlocksWithIds& blocks);

/*
 * return true if b1 == b2 or if b1 dominates b2.
 */
bool dominates(const Block* b1, const Block* b2, const IdomVector& idoms);

/*
 * Return true iff the CFG has a backedge.
 */
bool cfgHasLoop(const IRUnit&);

/*
 * Finds all the back-edges in a unit.
 */
EdgeSet findBackEdges(const IRUnit&);

/*
 * Finds all the loop headers in a unit.
 */
BlockSet findLoopHeaders(const IRUnit&);

/*
 * Inserts a pre-header before every loop header.
 *
 * If the loop header already has a pre-header, then it will not be modified.
 *
 * Returns true iff the CFG is changed.
 */
bool insertLoopPreHeaders(IRUnit&);

/*
 * Visit the instructions in this blocklist, in block order.
 */
template <class BlockList, class Body>
void forEachInst(const BlockList& blocks, Body body);

//////////////////////////////////////////////////////////////////////

}}

#include "hphp/runtime/vm/jit/cfg-inl.h"

#endif
