// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class CopperBehavior {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COPPERBEHAVIOR
public:
    class CopperBehavior& operator=(class CopperBehavior const &) = delete;
    CopperBehavior(class CopperBehavior const &) = delete;
    CopperBehavior() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_COPPERBEHAVIOR
public:
#endif
    MCAPI CopperBehavior(enum CopperType, class WeakPtr<class BlockLegacy> &, class WeakPtr<class BlockLegacy> &, class WeakPtr<class BlockLegacy> &, class std::function<class Block const & (class BlockLegacy const &, class Block const &)> const &);
    MCAPI CopperBehavior(enum CopperType, class WeakPtr<class BlockLegacy> &, class std::function<class Block const & (class BlockLegacy const &, class Block const &)> const &);
    MCAPI bool canDecrementAge() const;
    MCAPI class Block const & getCorrespondingWaxedBlock(class Block const &) const;
    MCAPI bool isWaxable() const;
    MCAPI bool isWaxed() const;
    MCAPI bool tryDecrementAge(class BlockSource &, class BlockPos const &) const;
    MCAPI bool tryIncrementAge(class BlockSource &, class BlockPos const &, float, float) const;
    MCAPI bool use(class Player &, class BlockPos const &, unsigned char) const;
    MCAPI ~CopperBehavior();

//private:
    MCAPI void _incrementAge(class BlockSource &, class Block const &, class BlockPos const &, float) const;

private:


};