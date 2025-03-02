// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class SculkChargeCursor {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCULKCHARGECURSOR
public:
    class SculkChargeCursor& operator=(class SculkChargeCursor const &) = delete;
    SculkChargeCursor(class SculkChargeCursor const &) = delete;
    SculkChargeCursor() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCULKCHARGECURSOR
public:
#endif
    MCAPI SculkChargeCursor(class BlockPos const &, int);
    MCAPI SculkChargeCursor(class CompoundTag const &);
    MCAPI void addFrom(class SculkChargeCursor const &);
    MCAPI void load(class CompoundTag const &);
    MCAPI void save(class CompoundTag &) const;
    MCAPI void update(class IBlockWorldGenAPI &, class BlockSource *, class BlockPos const &, class Random &, class SculkSpreader &, bool);

//private:
    MCAPI static class std::array<class BlockPos, 18> _getNonCornerNeighborsOffsets(class Random &);
    MCAPI static class SculkBehavior const & _getSculkBehavior(class Block const &);
    MCAPI static bool _isMovementUnobstructed(class IBlockWorldGenAPI &, class BlockPos const &, class BlockPos const &);

private:
    MCAPI static class DefaultSculkBehavior const sDefaultSculkBehavior;
    MCAPI static class SculkBlockBehavior const sSculkBlockBehavior;
    MCAPI static class SculkVeinBlockBehavior const sSculkVeinBlockBehavior;


};