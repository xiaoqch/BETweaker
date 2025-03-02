// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class BlockStateGroup {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKSTATEGROUP
public:
    class BlockStateGroup& operator=(class BlockStateGroup const &) = delete;
    BlockStateGroup(class BlockStateGroup const &) = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BLOCKSTATEGROUP
public:
#endif
    MCAPI BlockStateGroup();
    MCAPI class BlockStateMeta const * getBlockStateFromHash(unsigned __int64 const &) const;
    MCAPI class BlockStateMeta const * getBlockStateFromName(std::string const &) const;
    MCAPI void registerBlockStateDefinition(struct BlockStateDefinition const &);
    MCAPI void registerToBlock(class BlockLegacy &);
    MCAPI static int const MAX_ENUM_SIZE;
    MCAPI static std::unique_ptr<struct BlockStateDefinition> createFromItemState(std::string const &, class ItemState const &);
    MCAPI static std::unique_ptr<class ListTag> createItemStateEnum(class ItemState const &);
    MCAPI static bool loadBlockStateFromJson(struct BlockStateDefinition &, std::string const &, class Json::Value const &);


};