// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "MoveToPOIGoal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class MingleGoal : public MoveToPOIGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MINGLEGOAL
public:
    class MingleGoal& operator=(class MingleGoal const &) = delete;
    MingleGoal(class MingleGoal const &) = delete;
    MingleGoal() = delete;
#endif


public:
    /*0*/ virtual ~MingleGoal();
    /*1*/ virtual bool canUse();
    /*2*/ virtual bool canContinueToUse();
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual void start();
    /*5*/ virtual void stop();
    /*6*/ virtual void tick();
    /*7*/ virtual void appendDebugInfo(std::string &) const;
    /*8*/ virtual void __unk_vfn_8();
    /*9*/ virtual void __unk_vfn_9();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MINGLEGOAL
public:
#endif
    MCAPI MingleGoal(class Mob &, float, float, float, struct ActorDefinitionIdentifier, float);

//private:
    MCAPI void _findNewPartner(struct ActorUniqueID);
    MCAPI bool _isWithinInteractRange(class Actor &) const;
    MCAPI void _lookAt(class Actor *);

private:
    MCAPI static int const FIND_PARTNER_INTERVAL_TICKS;
    MCAPI static int const SPEAK_INTERVAL_TICKS_MAX;
    MCAPI static int const SPEAK_INTERVAL_TICKS_MIN;


};