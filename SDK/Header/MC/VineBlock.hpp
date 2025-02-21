// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockLegacy.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class VineBlock : public BlockLegacy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VINEBLOCK
public:
    class VineBlock& operator=(class VineBlock const &) = delete;
    VineBlock(class VineBlock const &) = delete;
    VineBlock() = delete;
#endif


public:
    /*0*/ virtual ~VineBlock();
    /*10*/ virtual class AABB const & getAABB(class IConstBlockSource const &, class BlockPos const &, class Block const &, class AABB &, bool) const;
    /*19*/ virtual void __unk_vfn_19();
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
    /*72*/ virtual void __unk_vfn_72();
    /*79*/ virtual void __unk_vfn_79();
    /*88*/ virtual bool mayPlace(class BlockSource &, class BlockPos const &, unsigned char) const;
    /*97*/ virtual void neighborChanged(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /*99*/ virtual int getResourceCount(class Randomize &, class Block const &, int) const;
    /*104*/ virtual void __unk_vfn_104();
    /*105*/ virtual class Block const & getPlacementBlock(class Actor &, class BlockPos const &, unsigned char, class Vec3 const &, int) const;
    /*124*/ virtual void __unk_vfn_124();
    /*126*/ virtual void __unk_vfn_126();
    /*127*/ virtual void __unk_vfn_127();
    /*132*/ virtual void __unk_vfn_132();
    /*136*/ virtual int getColor(class Block const &) const;
    /*137*/ virtual int getColor(class BlockSource &, class BlockPos const &, class Block const &) const;
    /*143*/ virtual class AABB const & getVisualShapeInWorld(class Block const &, class IConstBlockSource const &, class BlockPos const &, class AABB &, bool) const;
    /*148*/ virtual void __unk_vfn_148();
    /*165*/ virtual void __unk_vfn_165();
    /*179*/ virtual void __unk_vfn_179();
    /*180*/ virtual void __unk_vfn_180();
    /*183*/ virtual void playerDestroy(class Player &, class BlockPos const &, class Block const &) const;
    /*184*/ virtual void tick(class BlockSource &, class BlockPos const &, class Random &) const;
    /*185*/ virtual void randomTick(class BlockSource &, class BlockPos const &, class Random &) const;
    /*187*/ virtual void __unk_vfn_187();
    /*198*/ virtual class mce::Color getMapColor(class BlockSource &, class BlockPos const &) const;
    /*199*/ virtual void __unk_vfn_199();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_VINEBLOCK
public:
    MCVAPI bool waterSpreadCausesSpawn() const;
#endif
    MCAPI VineBlock(std::string const &, int);
    MCAPI void growDown(class BlockSource &, class BlockPos const &, int) const;
    MCAPI void growSideways(class BlockSource &, class BlockPos const &, int) const;
    MCAPI void growUp(class BlockSource &, class BlockPos const &, int) const;
    MCAPI static int const VINE_ALL;
    MCAPI static int const VINE_EAST;
    MCAPI static int const VINE_NORTH;
    MCAPI static int const VINE_SOUTH;
    MCAPI static int const VINE_WEST;
    MCAPI static class Block const & getBlockForFace(unsigned char);
    MCAPI static bool isAcceptableNeighbour(class Block const &);

//private:
    MCAPI bool _canGrowDown(class BlockSource &, class BlockPos const &) const;
    MCAPI bool _canSideSpread(class BlockSource &, class BlockPos const &) const;
    MCAPI int _nextVineDirections(class BlockSource &, class BlockPos const &) const;

private:


};