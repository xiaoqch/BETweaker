// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BushBlock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class SweetBerryBushBlock : public BushBlock {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SWEETBERRYBUSHBLOCK
public:
    class SweetBerryBushBlock& operator=(class SweetBerryBushBlock const &) = delete;
    SweetBerryBushBlock(class SweetBerryBushBlock const &) = delete;
    SweetBerryBushBlock() = delete;
#endif


public:
    /*0*/ virtual ~SweetBerryBushBlock();
    /*4*/ virtual bool hasTag(class BlockSource &, class BlockPos const &, class Block const &, std::string const &) const;
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
    /*60*/ virtual bool canContainLiquid() const;
    /*66*/ virtual bool checkIsPathable(class Actor &, class BlockPos const &, class BlockPos const &) const;
    /*72*/ virtual void __unk_vfn_72();
    /*79*/ virtual void __unk_vfn_79();
    /*83*/ virtual bool onFertilized(class BlockSource &, class BlockPos const &, class Actor *, enum FertilizerType) const;
    /*85*/ virtual bool canBeFertilized(class BlockSource &, class BlockPos const &, class Block const &) const;
    /*89*/ virtual bool mayPlace(class BlockSource &, class BlockPos const &) const;
    /*90*/ virtual bool mayPlaceOn(class BlockSource &, class BlockPos const &) const;
    /*99*/ virtual int getResourceCount(class Randomize &, class Block const &, int) const;
    /*101*/ virtual class ItemInstance asItemInstance(class BlockSource &, class BlockPos const &, class Block const &) const;
    /*102*/ virtual void spawnResources(class BlockSource &, class BlockPos const &, class Block const &, class Randomize &, std::vector<class Item const *> *, float, int) const;
    /*104*/ virtual void __unk_vfn_104();
    /*108*/ virtual bool attack(class Player *, class BlockPos const &) const;
    /*112*/ virtual void entityInside(class BlockSource &, class BlockPos const &, class Actor &) const;
    /*118*/ virtual void executeEvent(class BlockSource &, class BlockPos const &, class Block const &, std::string const &, class Actor &) const;
    /*124*/ virtual void __unk_vfn_124();
    /*126*/ virtual void __unk_vfn_126();
    /*127*/ virtual void __unk_vfn_127();
    /*132*/ virtual void __unk_vfn_132();
    /*144*/ virtual class AABB const & getVisualShape(class Block const &, class AABB &, bool) const;
    /*147*/ virtual int getVariant(class Block const &) const;
    /*148*/ virtual void __unk_vfn_148();
    /*165*/ virtual void __unk_vfn_165();
    /*170*/ virtual bool dealsContactDamage(class Actor const &, class Block const &, bool) const;
    /*179*/ virtual void __unk_vfn_179();
    /*180*/ virtual void __unk_vfn_180();
    /*185*/ virtual void randomTick(class BlockSource &, class BlockPos const &, class Random &) const;
    /*187*/ virtual void __unk_vfn_187();
    /*189*/ virtual bool use(class Player &, class BlockPos const &, unsigned char) const;
    /*190*/ virtual bool canSurvive(class BlockSource &, class BlockPos const &) const;
    /*191*/ virtual enum BlockRenderLayer getRenderLayer() const;
    /*192*/ virtual enum BlockRenderLayer getRenderLayer(class Block const &, class BlockSource &, class BlockPos const &) const;
    /*199*/ virtual void __unk_vfn_199();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SWEETBERRYBUSHBLOCK
public:
    MCVAPI bool canBeSilkTouched() const;
    MCVAPI bool isInteractiveBlock() const;
#endif
    MCAPI SweetBerryBushBlock(std::string const &, int);
    MCAPI static class Vec3 const SLOWDOWN_MULTIPLIER;

//private:
    MCAPI bool _growBush(class BlockSource &, class BlockPos const &) const;
    MCAPI bool _pickBerries(class BlockSource &, class BlockPos const &, class Block const &) const;
    MCAPI void _popBerries(class BlockSource &, class BlockPos const &, int const &, std::vector<class Item const *> *) const;

private:


};