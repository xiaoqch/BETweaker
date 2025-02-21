// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class LegacyBlockPlacementProcessor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEGACYBLOCKPLACEMENTPROCESSOR
public:
    class LegacyBlockPlacementProcessor& operator=(class LegacyBlockPlacementProcessor const &) = delete;
    LegacyBlockPlacementProcessor(class LegacyBlockPlacementProcessor const &) = delete;
    LegacyBlockPlacementProcessor() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LEGACYBLOCKPLACEMENTPROCESSOR
public:
#endif
    MCAPI LegacyBlockPlacementProcessor(class LegacyStructureSettings const &);
    MCAPI class Block const * applyBlockRules(class BlockSource &, class BlockPos &, class Block const *, class BlockPos const &);
    MCAPI class BlockPos & applyGravity(class BlockSource &, int, class BlockPos &) const;
    MCAPI bool canPlace();
    MCAPI ~LegacyBlockPlacementProcessor();


};