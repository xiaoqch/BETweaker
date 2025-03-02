// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockLegacy.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class BedBlock : public BlockLegacy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDBLOCK
public:
    class BedBlock& operator=(class BedBlock const &) = delete;
    BedBlock(class BedBlock const &) = delete;
    BedBlock() = delete;
#endif


public:
    /*0*/ virtual ~BedBlock();
    /*3*/ virtual class Block const * getNextBlockPermutation(class Block const &) const;
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
    /*54*/ virtual bool canFillAtPos(class BlockSource &, class BlockPos const &, class Block const &) const;
    /*55*/ virtual class Block const & sanitizeFillBlock(class BlockSource &, class BlockPos const &, class Block const &) const;
    /*56*/ virtual void onFillBlock(class BlockSource &, class BlockPos const &, class Block const &) const;
    /*58*/ virtual void __unk_vfn_58();
    /*59*/ virtual void __unk_vfn_59();
    /*66*/ virtual bool checkIsPathable(class Actor &, class BlockPos const &, class BlockPos const &) const;
    /*72*/ virtual void __unk_vfn_72();
    /*78*/ virtual void updateEntityAfterFallOn(class BlockPos const &, struct UpdateEntityAfterFallOnInterface &) const;
    /*79*/ virtual void __unk_vfn_79();
    /*95*/ virtual bool playerWillDestroy(class Player &, class BlockPos const &, class Block const &) const;
    /*97*/ virtual void neighborChanged(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /*98*/ virtual bool getSecondPart(class BlockSource const &, class BlockPos const &, class BlockPos &) const;
    /*101*/ virtual class ItemInstance asItemInstance(class BlockSource &, class BlockPos const &, class Block const &) const;
    /*102*/ virtual void spawnResources(class BlockSource &, class BlockPos const &, class Block const &, class Randomize &, std::vector<class Item const *> *, float, int) const;
    /*104*/ virtual void __unk_vfn_104();
    /*124*/ virtual void __unk_vfn_124();
    /*126*/ virtual void __unk_vfn_126();
    /*127*/ virtual void __unk_vfn_127();
    /*130*/ virtual bool canSpawnAt(class BlockSource const &, class BlockPos const &) const;
    /*132*/ virtual void __unk_vfn_132();
    /*146*/ virtual int telemetryVariant(class BlockSource &, class BlockPos const &) const;
    /*147*/ virtual int getVariant(class Block const &) const;
    /*148*/ virtual void __unk_vfn_148();
    /*150*/ virtual unsigned char getMappedFace(unsigned char, class Block const &) const;
    /*165*/ virtual void __unk_vfn_165();
    /*179*/ virtual void __unk_vfn_179();
    /*180*/ virtual void __unk_vfn_180();
    /*181*/ virtual void onPlace(class BlockSource &, class BlockPos const &) const;
    /*182*/ virtual void onFallOn(class BlockSource &, class BlockPos const &, class Actor &, float) const;
    /*187*/ virtual void __unk_vfn_187();
    /*189*/ virtual bool use(class Player &, class BlockPos const &, unsigned char) const;
    /*199*/ virtual void __unk_vfn_199();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BEDBLOCK
public:
    MCVAPI bool canBeSilkTouched() const;
    MCVAPI bool isBounceBlock() const;
    MCVAPI bool isInteractiveBlock() const;
#endif
    MCAPI BedBlock(std::string const &, int);
    MCAPI static unsigned short const HEAD_PIECE_DATA;
    MCAPI static unsigned short const OCCUPIED_DATA;
    MCAPI static class std::optional<class BlockPos> findWakeupPosition(class BlockSource &, class BlockPos const &, bool, class std::optional<class Vec3> const &);
    MCAPI static bool isDangerousSpawnBlock(class BlockSource &, class BlockPos const &);
    MCAPI static bool isValidStandUpPosition(class BlockSource &, class BlockPos const &);
    MCAPI static void setOccupied(class BlockSource &, class BlockPos const &, bool);


};