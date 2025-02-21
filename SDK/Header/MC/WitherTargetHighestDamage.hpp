// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "TargetGoal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class WitherTargetHighestDamage : public TargetGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WITHERTARGETHIGHESTDAMAGE
public:
    class WitherTargetHighestDamage& operator=(class WitherTargetHighestDamage const &) = delete;
    WitherTargetHighestDamage(class WitherTargetHighestDamage const &) = delete;
    WitherTargetHighestDamage() = delete;
#endif


public:
    /*0*/ virtual ~WitherTargetHighestDamage();
    /*1*/ virtual bool canUse();
    /*2*/ virtual bool canContinueToUse();
    /*4*/ virtual void start();
    /*7*/ virtual void appendDebugInfo(std::string &) const;
    /*8*/ virtual void __unk_vfn_8();
    /*9*/ virtual void __unk_vfn_9();
    /*10*/ virtual bool _canAttack(class Mob *, class Actor *, bool, bool, struct MobDescriptor const **);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_WITHERTARGETHIGHESTDAMAGE
public:
#endif
    MCAPI WitherTargetHighestDamage(class WitherBoss &, std::vector<struct MobDescriptor> const &);

//private:
    MCAPI class Player * getHighestDamageTarget();

private:


};