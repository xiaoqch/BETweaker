// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "MeleeAttackGoal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class StompAttackGoal : public MeleeAttackGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STOMPATTACKGOAL
public:
    class StompAttackGoal& operator=(class StompAttackGoal const &) = delete;
    StompAttackGoal(class StompAttackGoal const &) = delete;
    StompAttackGoal() = delete;
#endif


public:
    /*0*/ virtual ~StompAttackGoal();
    /*1*/ virtual bool canUse();
    /*2*/ virtual bool canContinueToUse();
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual void start();
    /*5*/ virtual void stop();
    /*6*/ virtual void tick();
    /*7*/ virtual void appendDebugInfo(std::string &) const;
    /*8*/ virtual void __unk_vfn_8();
    /*9*/ virtual void __unk_vfn_9();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_STOMPATTACKGOAL
public:
#endif
    MCAPI StompAttackGoal(class Mob &);


};