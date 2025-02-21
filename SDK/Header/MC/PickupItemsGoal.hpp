// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class PickupItemsGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PICKUPITEMSGOAL
public:
    class PickupItemsGoal& operator=(class PickupItemsGoal const &) = delete;
    PickupItemsGoal(class PickupItemsGoal const &) = delete;
    PickupItemsGoal() = delete;
#endif


public:
    /*0*/ virtual ~PickupItemsGoal();
    /*1*/ virtual bool canUse();
    /*2*/ virtual bool canContinueToUse();
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual void start();
    /*5*/ virtual void stop();
    /*6*/ virtual void tick();
    /*7*/ virtual void appendDebugInfo(std::string &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PICKUPITEMSGOAL
public:
#endif
    MCAPI PickupItemsGoal(class Mob &, float, bool, int, int, float, bool, bool, int, bool, bool, std::vector<class ItemDescriptor> const &);

//private:
    MCAPI std::vector<class WeakEntityRef> _filterValidTargets(std::vector<struct DistanceSortedActor> const &) const;
    MCAPI struct Shareable const * _getShareableItem(class ItemStack const &) const;
    MCAPI void _pickItemUp(class ItemActor *);

private:


};