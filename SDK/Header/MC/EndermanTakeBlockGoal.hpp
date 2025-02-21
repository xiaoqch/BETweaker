// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class EndermanTakeBlockGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENDERMANTAKEBLOCKGOAL
public:
    class EndermanTakeBlockGoal& operator=(class EndermanTakeBlockGoal const &) = delete;
    EndermanTakeBlockGoal(class EndermanTakeBlockGoal const &) = delete;
    EndermanTakeBlockGoal() = delete;
#endif


public:
    /*0*/ virtual ~EndermanTakeBlockGoal();
    /*1*/ virtual bool canUse();
    /*2*/ virtual void __unk_vfn_2();
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual void __unk_vfn_4();
    /*5*/ virtual void __unk_vfn_5();
    /*6*/ virtual void tick();
    /*7*/ virtual void appendDebugInfo(std::string &) const;
    /*8*/ virtual void __unk_vfn_8();
    /*9*/ virtual void __unk_vfn_9();
    /*10*/ virtual class BlockPos getRandomNearbyBlockPos(class Vec3 const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ENDERMANTAKEBLOCKGOAL
public:
#endif
    MCAPI EndermanTakeBlockGoal(class EnderMan &);


};