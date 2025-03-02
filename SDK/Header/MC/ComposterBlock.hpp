// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "MinecraftEventing.hpp"
#include "BlockLegacy.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ComposterBlock : public BlockLegacy {

#define AFTER_EXTRA
// Add Member There
public:

inline void emitBoneMeal(class Level& a1, class BlockSource& a2, class BlockPos const& a3) {
    return _emitBoneMeal(a1,a2,a3);
}

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMPOSTERBLOCK
public:
    class ComposterBlock& operator=(class ComposterBlock const &) = delete;
    ComposterBlock(class ComposterBlock const &) = delete;
    ComposterBlock() = delete;
#endif


public:
    /*0*/ virtual ~ComposterBlock();
    /*9*/ virtual void addAABBs(class Block const &, class BlockSource const &, class BlockPos const &, class AABB const *, std::vector<class AABB> &) const;
    /*11*/ virtual bool addCollisionShapes(class Block const &, class BlockSource const &, class BlockPos const &, class AABB const *, std::vector<class AABB> &, class optional_ref<class GetCollisionShapeInterface const>) const;
    /*19*/ virtual void __unk_vfn_19();
    /*22*/ virtual bool canProvideSupport(class Block const &, unsigned char, enum BlockSupportType) const;
    /*28*/ virtual void __unk_vfn_28();
    /*29*/ virtual void __unk_vfn_29();
    /*31*/ virtual void __unk_vfn_31();
    /*32*/ virtual void __unk_vfn_32();
    /*33*/ virtual void __unk_vfn_33();
    /*35*/ virtual void __unk_vfn_35();
    /*36*/ virtual void __unk_vfn_36();
    /*37*/ virtual void __unk_vfn_37();
    /*38*/ virtual void __unk_vfn_38();
    /*39*/ virtual void __unk_vfn_39();
    /*40*/ virtual void __unk_vfn_40();
    /*41*/ virtual void __unk_vfn_41();
    /*43*/ virtual void __unk_vfn_43();
    /*44*/ virtual void __unk_vfn_44();
    /*45*/ virtual void __unk_vfn_45();
    /*46*/ virtual void __unk_vfn_46();
    /*47*/ virtual void __unk_vfn_47();
    /*48*/ virtual void __unk_vfn_48();
    /*58*/ virtual void __unk_vfn_58();
    /*59*/ virtual void __unk_vfn_59();
    /*60*/ virtual bool canContainLiquid() const;
    /*71*/ virtual void onMove(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /*72*/ virtual void __unk_vfn_72();
    /*79*/ virtual void __unk_vfn_79();
    /*93*/ virtual bool breaksFallingBlocks(class Block const &, class BaseGameVersion) const;
    /*104*/ virtual void __unk_vfn_104();
    /*124*/ virtual void __unk_vfn_124();
    /*126*/ virtual void __unk_vfn_126();
    /*127*/ virtual void __unk_vfn_127();
    /*128*/ virtual int getComparatorSignal(class BlockSource &, class BlockPos const &, class Block const &, unsigned char) const;
    /*132*/ virtual void __unk_vfn_132();
    /*147*/ virtual int getVariant(class Block const &) const;
    /*148*/ virtual void __unk_vfn_148();
    /*165*/ virtual void __unk_vfn_165();
    /*175*/ virtual void onRemove(class BlockSource &, class BlockPos const &) const;
    /*179*/ virtual void __unk_vfn_179();
    /*180*/ virtual void __unk_vfn_180();
    /*181*/ virtual void onPlace(class BlockSource &, class BlockPos const &) const;
    /*184*/ virtual void tick(class BlockSource &, class BlockPos const &, class Random &) const;
    /*187*/ virtual void __unk_vfn_187();
    /*189*/ virtual bool use(class Player &, class BlockPos const &, unsigned char) const;
    /*199*/ virtual void __unk_vfn_199();
    /*203*/ virtual void __unk_vfn_203();
    /*204*/ virtual void __unk_vfn_204();
    /*205*/ virtual void __unk_vfn_205();
    /*206*/ virtual void __unk_vfn_206();
    /*207*/ virtual void __unk_vfn_207();
    /*208*/ MCAPI std::string const & getDescriptionId() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_COMPOSTERBLOCK
public:
    MCVAPI bool hasComparatorSignal() const;
#endif
    MCAPI ComposterBlock(std::string const &, int);
    MCAPI static bool addItem(class Container &, int, class ItemStack &, class BlockSource &, class Block const &, class BlockPos const &);
    MCAPI static int addItems(class ItemStack const &, int, class BlockSource &, class Block const &, class BlockPos const &);
    MCAPI static bool addItems(class Container &, int, class ItemStack &, int, class BlockSource &, class Block const &, class BlockPos const &);
    MCAPI static void empty(class BlockSource &, class Block const &, class BlockPos const &);
    MCAPI static class ItemStack extractItem(class BlockSource &, class Block const &, class BlockPos const &);
    MCAPI static class Block const * getComposterAt(class BlockSource &, class BlockPos const &);

//private:
    MCAPI void _emitBoneMeal(class Level &, class BlockSource &, class BlockPos const &) const;
    MCAPI void _notifyClientComposterUsed(class Player const &, short, enum MinecraftEventing::POIBlockInteractionType) const;
    MCAPI static std::vector<struct std::pair<int, signed char>> const & _getCompostableItems(class Experiments const &);

private:
    MCAPI static class BaseGameVersion const COMPOSTER_DOESNT_BREAK_FALLING_BLOCK_VERSION;
    MCAPI static class Vec3 const PARTICLE_OFFSET;


};