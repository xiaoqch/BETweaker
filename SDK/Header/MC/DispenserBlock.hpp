// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ActorBlock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class DispenserBlock : public ActorBlock {

#define AFTER_EXTRA
// Add Member There
public:
    inline unsigned char getFacing_s(class Block const& a1) const {
        return getFacing(a1);
    }
#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DISPENSERBLOCK
public:
    class DispenserBlock& operator=(class DispenserBlock const &) = delete;
    DispenserBlock(class DispenserBlock const &) = delete;
    DispenserBlock() = delete;
#endif


public:
    /*0*/ virtual ~DispenserBlock();
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
    /*70*/ virtual void onRedstoneUpdate(class BlockSource &, class BlockPos const &, int, bool) const;
    /*72*/ virtual void __unk_vfn_72();
    /*76*/ virtual void setupRedstoneComponent(class BlockSource &, class BlockPos const &) const;
    /*79*/ virtual void __unk_vfn_79();
    /*100*/ virtual class ItemInstance getResourceItem(class Randomize &, class Block const &, int) const;
    /*101*/ virtual class ItemInstance asItemInstance(class BlockSource &, class BlockPos const &, class Block const &) const;
    /*104*/ virtual void __unk_vfn_104();
    /*105*/ virtual class Block const & getPlacementBlock(class Actor &, class BlockPos const &, unsigned char, class Vec3 const &, int) const;
    /*124*/ virtual void __unk_vfn_124();
    /*126*/ virtual void __unk_vfn_126();
    /*127*/ virtual void __unk_vfn_127();
    /*128*/ virtual int getComparatorSignal(class BlockSource &, class BlockPos const &, class Block const &, unsigned char) const;
    /*132*/ virtual void __unk_vfn_132();
    /*147*/ virtual int getVariant(class Block const &) const;
    /*148*/ virtual void __unk_vfn_148();
    /*150*/ virtual unsigned char getMappedFace(unsigned char, class Block const &) const;
    /*165*/ virtual void __unk_vfn_165();
    /*166*/ virtual class ItemInstance getSilkTouchItemInstance(class Block const &) const;
    /*175*/ virtual void onRemove(class BlockSource &, class BlockPos const &) const;
    /*179*/ virtual void __unk_vfn_179();
    /*180*/ virtual void __unk_vfn_180();
    /*181*/ virtual void onPlace(class BlockSource &, class BlockPos const &) const;
    /*184*/ virtual void tick(class BlockSource &, class BlockPos const &, class Random &) const;
    /*187*/ virtual void __unk_vfn_187();
    /*189*/ virtual bool use(class Player &, class BlockPos const &, unsigned char) const;
    /*199*/ virtual void __unk_vfn_199();
    /*204*/ virtual int getTickDelay() const;
    /*205*/ virtual void dispenseFrom(class BlockSource &, class BlockPos const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DISPENSERBLOCK
public:
    MCVAPI bool hasComparatorSignal() const;
    MCVAPI bool isContainerBlock() const;
    MCVAPI bool isInteractiveBlock() const;
#endif
    MCAPI DispenserBlock(std::string const &, int);
    MCAPI static void ejectItem(class BlockSource &, class Vec3 const &, unsigned char, class ItemStack const &);

//protected:
    MCAPI void ejectItem(class BlockSource &, class Vec3 const &, unsigned char, class ItemStack const &, class Container &, int) const;
    MCAPI class Vec3 getDispensePosition(class BlockSource &, class Vec3 const &) const;
    MCAPI unsigned char getFacing(class Block const &) const;

protected:


};