// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Feature.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class BonusChestFeature : public Feature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BONUSCHESTFEATURE
public:
    class BonusChestFeature& operator=(class BonusChestFeature const &) = delete;
    BonusChestFeature(class BonusChestFeature const &) = delete;
    BonusChestFeature() = delete;
#endif


public:
    /*0*/ virtual ~BonusChestFeature();
    /*2*/ virtual void __unk_vfn_2();
    /*3*/ virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BONUSCHESTFEATURE
public:
#endif

//private:
    MCAPI bool _place(class BlockSource &, class BlockPos const &, class Random &) const;

private:


};