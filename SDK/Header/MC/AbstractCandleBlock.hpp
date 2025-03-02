// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockLegacy.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class AbstractCandleBlock : public BlockLegacy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ABSTRACTCANDLEBLOCK
public:
    class AbstractCandleBlock& operator=(class AbstractCandleBlock const &) = delete;
    AbstractCandleBlock(class AbstractCandleBlock const &) = delete;
    AbstractCandleBlock() = delete;
#endif


public:
    /*0*/ virtual ~AbstractCandleBlock();
    /*19*/ virtual void __unk_vfn_19();
    /*28*/ virtual void __unk_vfn_28();
    /*29*/ virtual void __unk_vfn_29();
    /*31*/ virtual void __unk_vfn_31();
    /*32*/ virtual void __unk_vfn_32();
    /*33*/ virtual void __unk_vfn_33();
    /*34*/ virtual bool isWaterBlocking() const;
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
    /*72*/ virtual void __unk_vfn_72();
    /*79*/ virtual void __unk_vfn_79();
    /*97*/ virtual void neighborChanged(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /*104*/ virtual void __unk_vfn_104();
    /*112*/ virtual void entityInside(class BlockSource &, class BlockPos const &, class Actor &) const;
    /*124*/ virtual void __unk_vfn_124();
    /*126*/ virtual void __unk_vfn_126();
    /*127*/ virtual void __unk_vfn_127();
    /*132*/ virtual void __unk_vfn_132();
    /*148*/ virtual void __unk_vfn_148();
    /*152*/ virtual void animateTick(class BlockSource &, class BlockPos const &, class Random &) const;
    /*165*/ virtual void __unk_vfn_165();
    /*179*/ virtual void __unk_vfn_179();
    /*180*/ virtual void __unk_vfn_180();
    /*184*/ virtual void tick(class BlockSource &, class BlockPos const &, class Random &) const;
    /*187*/ virtual void __unk_vfn_187();
    /*195*/ virtual struct Brightness getLightEmission(class Block const &) const;
    /*199*/ virtual void __unk_vfn_199();
    /*203*/ virtual int _getNumCandles(class Block const &) const;
    /*204*/ virtual void _iterateCandles(class Block const &, class BlockPos const &, class std::function<void (class Vec3 const &, int)>) const;
    /*205*/ virtual void _tryLightOnFire(class BlockSource &, class BlockPos const &, class Actor *) const;
    /*206*/ virtual void __unk_vfn_206();
    /*207*/ virtual void __unk_vfn_207();
    /*208*/ virtual void __unk_vfn_208();
    /*209*/ virtual void __unk_vfn_209();
    /*210*/ virtual void __unk_vfn_210();
    /*211*/ MCAPI std::string const & getDescriptionId() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ABSTRACTCANDLEBLOCK
public:
    MCVAPI bool canBeSilkTouched() const;
    MCVAPI bool hasVariableLighting() const;
    MCVAPI bool isInteractiveBlock() const;
#endif
    MCAPI AbstractCandleBlock(std::string const &, int, class Material const &);

//protected:
    MCAPI void _checkForWaterlogging(class BlockSource &, class BlockPos const &) const;
    MCAPI void _extinguish(class Actor *, class Block const &, class BlockSource &, class BlockPos const &) const;
    MCAPI static bool _canBeLit(class Block const &, class BlockSource &, class BlockPos const &);
    MCAPI static bool _isLit(class Block const &);

protected:


};