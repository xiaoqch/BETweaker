// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "PredictableProjectile.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class AbstractArrow : public PredictableProjectile {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ABSTRACTARROW
public:
    class AbstractArrow& operator=(class AbstractArrow const &) = delete;
    AbstractArrow(class AbstractArrow const &) = delete;
    AbstractArrow() = delete;
#endif


public:
    /*8*/ virtual void reloadHardcoded(enum Actor::InitializationMethod, class VariantParameterList const &);
    /*10*/ virtual void initializeComponents(enum Actor::InitializationMethod, class VariantParameterList const &);
    /*14*/ virtual ~AbstractArrow();
    /*40*/ virtual void __unk_vfn_40();
    /*46*/ virtual void lerpMotion(class Vec3 const &);
    /*60*/ virtual void __unk_vfn_60();
    /*67*/ virtual void __unk_vfn_67();
    /*78*/ virtual float getShadowHeightOffs();
    /*79*/ virtual float getShadowRadius() const;
    /*81*/ virtual void __unk_vfn_81();
    /*87*/ virtual void __unk_vfn_87();
    /*88*/ virtual void playerTouch(class Player &);
    /*94*/ virtual void __unk_vfn_94();
    /*97*/ virtual void __unk_vfn_97();
    /*104*/ virtual void __unk_vfn_104();
    /*106*/ virtual void __unk_vfn_106();
    /*107*/ virtual void __unk_vfn_107();
    /*108*/ virtual void __unk_vfn_108();
    /*170*/ virtual struct ActorUniqueID getSourceUniqueID() const;
    /*179*/ virtual bool canChangeDimensions() const;
    /*180*/ virtual void __unk_vfn_180();
    /*194*/ virtual void __unk_vfn_194();
    /*219*/ virtual void __unk_vfn_219();
    /*220*/ virtual void __unk_vfn_220();
    /*245*/ virtual void __unk_vfn_245();
    /*248*/ virtual void __unk_vfn_248();
    /*264*/ virtual void __unk_vfn_264();
    /*268*/ virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /*269*/ virtual void addAdditionalSaveData(class CompoundTag &) const;
    /*272*/ virtual void __unk_vfn_272();
    /*281*/ virtual void __unk_vfn_281();
    /*282*/ virtual void shoot(class Vec3 const &, float, float, class Vec3 const &);
    /*283*/ virtual void _playPickupSound();
    /*284*/ virtual class ItemStack _getPickupItem() const = 0;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ABSTRACTARROW
public:
#endif
    MCAPI AbstractArrow(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    MCAPI bool isPlayerOwned() const;
    MCAPI void setFavoredSlot(int);
    MCAPI void setIsCreative(bool);

//protected:
    MCAPI bool _canPickup(class Player const &) const;

protected:


};