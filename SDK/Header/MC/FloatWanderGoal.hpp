// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class FloatWanderGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FLOATWANDERGOAL
public:
    class FloatWanderGoal& operator=(class FloatWanderGoal const &) = delete;
    FloatWanderGoal(class FloatWanderGoal const &) = delete;
    FloatWanderGoal() = delete;
#endif


public:
    /*0*/ virtual ~FloatWanderGoal();
    /*1*/ virtual bool canUse();
    /*2*/ virtual void __unk_vfn_2();
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual void __unk_vfn_4();
    /*5*/ virtual void __unk_vfn_5();
    /*6*/ virtual void tick();
    /*7*/ virtual void appendDebugInfo(std::string &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FLOATWANDERGOAL
public:
#endif
    MCAPI FloatWanderGoal(class Mob &, float, float, float, bool, bool, struct FloatRange);

//private:
    MCAPI bool _canReach(class Vec3 const &, float);

private:


};