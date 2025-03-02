// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "Monster.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class Warden : public Monster {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WARDEN
public:
    class Warden& operator=(class Warden const &) = delete;
    Warden(class Warden const &) = delete;
    Warden() = delete;
#endif


public:
    /*14*/ virtual ~Warden();
    /*40*/ virtual void __unk_vfn_40();
    /*42*/ virtual bool canDisableShield();
    /*48*/ virtual void normalTick();
    /*60*/ virtual void __unk_vfn_60();
    /*67*/ virtual void __unk_vfn_67();
    /*81*/ virtual void __unk_vfn_81();
    /*87*/ virtual void __unk_vfn_87();
    /*94*/ virtual void __unk_vfn_94();
    /*97*/ virtual void __unk_vfn_97();
    /*104*/ virtual void __unk_vfn_104();
    /*106*/ virtual void __unk_vfn_106();
    /*107*/ virtual void __unk_vfn_107();
    /*108*/ virtual void __unk_vfn_108();
    /*111*/ virtual void setTarget(class Actor *);
    /*133*/ virtual bool isInvulnerableTo(class ActorDamageSource const &) const;
    /*180*/ virtual void __unk_vfn_180();
    /*189*/ virtual void onSynchedDataUpdate(int);
    /*194*/ virtual void __unk_vfn_194();
    /*219*/ virtual void __unk_vfn_219();
    /*220*/ virtual void __unk_vfn_220();
    /*245*/ virtual void __unk_vfn_245();
    /*248*/ virtual void __unk_vfn_248();
    /*258*/ virtual void onPush(class Actor &);
    /*264*/ virtual void __unk_vfn_264();
    /*265*/ virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
    /*272*/ virtual void __unk_vfn_272();
    /*281*/ virtual void __unk_vfn_281();
    /*310*/ virtual void __unk_vfn_310();
    /*313*/ virtual bool doHurtTarget(class Actor *, enum ActorDamageCause const &);
    /*314*/ virtual void __unk_vfn_314();
    /*346*/ virtual float _getWalkTargetValue(class BlockPos const &);
    /*348*/ virtual void __unk_vfn_348();
    /*362*/ virtual void __unk_vfn_362();
    /*364*/ virtual bool isDarkEnoughToSpawn() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_WARDEN
public:
#endif
    MCAPI Warden(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);


};