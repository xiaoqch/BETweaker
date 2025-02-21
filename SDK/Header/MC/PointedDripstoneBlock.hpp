// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "HeavyBlock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class PointedDripstoneBlock : public HeavyBlock {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_POINTEDDRIPSTONEBLOCK
public:
    class PointedDripstoneBlock& operator=(class PointedDripstoneBlock const &) = delete;
    PointedDripstoneBlock(class PointedDripstoneBlock const &) = delete;
    PointedDripstoneBlock() = delete;
#endif


public:
    /*0*/ virtual ~PointedDripstoneBlock();
    /*8*/ virtual class Vec3 randomlyModifyPosition(class BlockPos const &) const;
    /*10*/ virtual class AABB const & getAABB(class IConstBlockSource const &, class BlockPos const &, class Block const &, class AABB &, bool) const;
    /*15*/ virtual void onProjectileHit(class BlockSource &, class BlockPos const &, class Actor const &) const;
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
    /*89*/ virtual bool mayPlace(class BlockSource &, class BlockPos const &) const;
    /*97*/ virtual void neighborChanged(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /*100*/ virtual class ItemInstance getResourceItem(class Randomize &, class Block const &, int) const;
    /*101*/ virtual class ItemInstance asItemInstance(class BlockSource &, class BlockPos const &, class Block const &) const;
    /*104*/ virtual void __unk_vfn_104();
    /*105*/ virtual class Block const & getPlacementBlock(class Actor &, class BlockPos const &, unsigned char, class Vec3 const &, int) const;
    /*124*/ virtual void __unk_vfn_124();
    /*126*/ virtual void __unk_vfn_126();
    /*127*/ virtual void __unk_vfn_127();
    /*132*/ virtual void __unk_vfn_132();
    /*144*/ virtual class AABB const & getVisualShape(class Block const &, class AABB &, bool) const;
    /*147*/ virtual int getVariant(class Block const &) const;
    /*148*/ virtual void __unk_vfn_148();
    /*152*/ virtual void animateTick(class BlockSource &, class BlockPos const &, class Random &) const;
    /*153*/ virtual class BlockLegacy & init();
    /*165*/ virtual void __unk_vfn_165();
    /*166*/ virtual class ItemInstance getSilkTouchItemInstance(class Block const &) const;
    /*179*/ virtual void __unk_vfn_179();
    /*180*/ virtual void __unk_vfn_180();
    /*182*/ virtual void onFallOn(class BlockSource &, class BlockPos const &, class Actor &, float) const;
    /*184*/ virtual void tick(class BlockSource &, class BlockPos const &, class Random &) const;
    /*185*/ virtual void randomTick(class BlockSource &, class BlockPos const &, class Random &) const;
    /*187*/ virtual void __unk_vfn_187();
    /*190*/ virtual bool canSurvive(class BlockSource &, class BlockPos const &) const;
    /*199*/ virtual void __unk_vfn_199();
    /*203*/ virtual class mce::Color getDustColor(class Block const &) const;
    /*204*/ virtual std::string getDustParticleName(class Block const &) const;
    /*205*/ virtual void __unk_vfn_205();
    /*206*/ virtual void onLand(class BlockSource &, class BlockPos const &) const;
    /*208*/ virtual void startFalling(class BlockSource &, class BlockPos const &, class Block const &, bool) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_POINTEDDRIPSTONEBLOCK
public:
    MCVAPI bool falling() const;
#endif
    MCAPI PointedDripstoneBlock(std::string const &, int);
    MCAPI static void addDripParticle(class BlockSource &, class BlockPos const &, enum ParticleType);
    MCAPI static bool canGrow(class BlockSource &, class BlockPos const &, class BlockPos const &);
    MCAPI static void fillCauldron(class BlockSource &, class BlockPos const &);
    MCAPI static class std::optional<class BlockPos> findStalactiteTipAboveCauldron(class BlockSource &, class BlockPos const &);
    MCAPI static class std::optional<enum MaterialType> getCauldronFillLiquidType(class BlockSource &, class BlockPos const &);
    MCAPI static class std::optional<class BlockPos> getStalactiteTipBelowFillSource(class BlockSource &, class BlockPos const &);
    MCAPI static void growStalactite(class BlockSource &, class BlockPos const &);
    MCAPI static void growStalagmite(class BlockSource &, class BlockPos const &);

//private:
    MCAPI void _updateBlockThickness(class BlockSource &, class BlockPos const &) const;
    MCAPI static enum DripstoneThickness _calculateDripstoneThickness(class BlockSource &, class BlockPos const &, unsigned char, bool);
    MCAPI static bool _canDrip(class BlockSource &, class BlockPos const &);
    MCAPI static bool _canFillCauldron(class Block const &);
    MCAPI static bool _canTipGrow(class BlockSource &, class BlockPos const &);
    MCAPI static void _createDripstone(class BlockSource &, class BlockPos const &, unsigned char, enum DripstoneThickness);
    MCAPI static void _createMergedTips(class BlockSource &, class Block const &, class BlockPos const &);
    MCAPI static class std::optional<class BlockPos> _findBlockVertically(class BlockSource &, class BlockPos const &, unsigned char, class std::function<bool (class BlockSource &, class BlockPos const &)>, class std::function<bool (class BlockSource &, class BlockPos const &)>, int);
    MCAPI static class std::optional<class BlockPos> _findRootBlock(class BlockSource &, class BlockPos const &, int);
    MCAPI static class std::optional<class BlockPos> _findTip(class BlockSource &, class BlockPos const &, unsigned char, int, bool);
    MCAPI static class std::optional<class BlockPos> _getBlockAboveStalactiteRoot(class BlockSource &, class BlockPos const &);
    MCAPI static class Vec3 _getRandomBlockPositionOffset(class BlockPos const &);
    MCAPI static void _grow(class BlockSource &, class BlockPos const &, unsigned char);
    MCAPI static void _growStalagmiteBelow(class BlockSource &, class BlockPos const &);
    MCAPI static bool _isStalactiteBase(class BlockSource &, class BlockPos const &);
    MCAPI static bool _isTip(class Block const &, unsigned char, bool);
    MCAPI static bool _isValidPointedDripstonePlacement(class BlockSource &, class BlockPos const &, bool);
    MCAPI static bool _mayPlaceHanging(class BlockSource &, class BlockPos const &);
    MCAPI static bool _mayPlaceStanding(class BlockSource &, class BlockPos const &);

private:


};