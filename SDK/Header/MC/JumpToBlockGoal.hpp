// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class JumpToBlockGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_JUMPTOBLOCKGOAL
public:
    class JumpToBlockGoal& operator=(class JumpToBlockGoal const &) = delete;
    JumpToBlockGoal(class JumpToBlockGoal const &) = delete;
    JumpToBlockGoal() = delete;
#endif


public:
    /*0*/ virtual ~JumpToBlockGoal();
    /*1*/ virtual bool canUse();
    /*2*/ virtual bool canContinueToUse();
    /*3*/ virtual bool canBeInterrupted();
    /*4*/ virtual void start();
    /*5*/ virtual void stop();
    /*6*/ virtual void tick();
    /*7*/ virtual void appendDebugInfo(std::string &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_JUMPTOBLOCKGOAL
public:
#endif
    MCAPI JumpToBlockGoal(class Mob &);
    MCAPI void resetCooldown();

//private:
    MCAPI bool _calculateJumpCurve(class BlockPos const &, struct JumpToBlockGoal::WeightedJumpToBlockPos &);
    MCAPI void _clearGoalState();
    MCAPI bool _findCandidateBlocks(class NavigationComponent &);
    MCAPI bool _findJumpableBlocks(bool);
    MCAPI bool _findTargetBlock();
    MCAPI bool _validTransition(class Vec3 const &, class Vec3 const &) const;

private:


};