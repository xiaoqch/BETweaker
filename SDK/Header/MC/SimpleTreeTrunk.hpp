// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "TreeHelper.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class SimpleTreeTrunk {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SIMPLETREETRUNK
public:
    class SimpleTreeTrunk& operator=(class SimpleTreeTrunk const &) = delete;
    SimpleTreeTrunk(class SimpleTreeTrunk const &) = delete;
    SimpleTreeTrunk() = delete;
#endif


public:
    /*0*/ virtual ~SimpleTreeTrunk();
    /*1*/ virtual class std::optional<class BlockPos> placeTrunk(class IBlockWorldGenAPI &, class BlockPos const &, class Random &, int, class RenderParams &, struct TreeHelper::TreeParams const &, class ITreeCanopy const *) const;
    /*2*/ virtual int getTreeHeight(class Random &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SIMPLETREETRUNK
public:
#endif


};