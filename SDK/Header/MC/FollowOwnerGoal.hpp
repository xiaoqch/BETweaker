// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class FollowOwnerGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FOLLOWOWNERGOAL
public:
    class FollowOwnerGoal& operator=(class FollowOwnerGoal const &) = delete;
    FollowOwnerGoal(class FollowOwnerGoal const &) = delete;
    FollowOwnerGoal() = delete;
#endif


public:
    /*0*/ virtual ~FollowOwnerGoal();
    /*1*/ virtual bool canUse();
    /*2*/ virtual bool canContinueToUse();
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual void start();
    /*5*/ virtual void stop();
    /*6*/ virtual void tick();
    /*7*/ virtual void appendDebugInfo(std::string &) const;
    /*8*/ virtual void __unk_vfn_8();
    /*9*/ virtual void onPlayerDimensionChanged(class Player *, class AutomaticID<class Dimension, int>);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FOLLOWOWNERGOAL
public:
#endif
    MCAPI FollowOwnerGoal(class Mob &, float, float, float, bool, bool, float);


};