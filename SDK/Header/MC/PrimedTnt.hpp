// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "PredictableProjectile.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class PrimedTnt : public PredictableProjectile {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PRIMEDTNT
public:
    class PrimedTnt& operator=(class PrimedTnt const &) = delete;
    PrimedTnt(class PrimedTnt const &) = delete;
    PrimedTnt() = delete;
#endif


public:
    /*8*/ virtual void reloadHardcoded(enum Actor::InitializationMethod, class VariantParameterList const &);
    /*9*/ virtual void reloadHardcodedClient(enum Actor::InitializationMethod, class VariantParameterList const &);
    /*10*/ virtual void initializeComponents(enum Actor::InitializationMethod, class VariantParameterList const &);
    /*14*/ virtual ~PrimedTnt();
    /*17*/ virtual enum ActorType getOwnerEntityType();
    /*40*/ virtual void __unk_vfn_40();
    /*43*/ virtual void teleportTo(class Vec3 const &, bool, int, int);
    /*48*/ virtual void normalTick();
    /*60*/ virtual void __unk_vfn_60();
    /*67*/ virtual void __unk_vfn_67();
    /*78*/ virtual float getShadowHeightOffs();
    /*79*/ virtual float getShadowRadius() const;
    /*81*/ virtual void __unk_vfn_81();
    /*87*/ virtual void __unk_vfn_87();
    /*93*/ virtual bool isPickable();
    /*94*/ virtual void __unk_vfn_94();
    /*97*/ virtual void __unk_vfn_97();
    /*104*/ virtual void __unk_vfn_104();
    /*106*/ virtual void __unk_vfn_106();
    /*107*/ virtual void __unk_vfn_107();
    /*108*/ virtual void __unk_vfn_108();
    /*170*/ virtual struct ActorUniqueID getSourceUniqueID() const;
    /*180*/ virtual void __unk_vfn_180();
    /*194*/ virtual void __unk_vfn_194();
    /*219*/ virtual void __unk_vfn_219();
    /*220*/ virtual void __unk_vfn_220();
    /*245*/ virtual void __unk_vfn_245();
    /*248*/ virtual void __unk_vfn_248();
    /*264*/ virtual void __unk_vfn_264();
    /*265*/ virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
    /*268*/ virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /*269*/ virtual void addAdditionalSaveData(class CompoundTag &) const;
    /*272*/ virtual void __unk_vfn_272();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PRIMEDTNT
public:
#endif
    MCAPI PrimedTnt(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);


};