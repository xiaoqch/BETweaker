// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BaseMoveToGoal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class MoveToPOIGoal : public BaseMoveToGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVETOPOIGOAL
public:
    class MoveToPOIGoal& operator=(class MoveToPOIGoal const &) = delete;
    MoveToPOIGoal(class MoveToPOIGoal const &) = delete;
    MoveToPOIGoal() = delete;
#endif


public:
    /*0*/ virtual ~MoveToPOIGoal();
    /*1*/ virtual bool canUse();
    /*3*/ virtual void __unk_vfn_3();
    /*5*/ virtual void stop();
    /*6*/ virtual void tick();
    /*7*/ virtual void appendDebugInfo(std::string &) const;
    /*8*/ virtual void __unk_vfn_8();
    /*9*/ virtual void __unk_vfn_9();
    /*11*/ virtual bool isValidTarget(class BlockSource &, class BlockPos const &);
    /*14*/ virtual void _moveToBlock();
    /*15*/ virtual class Vec3 _getTargetPosition() const;
    /*17*/ virtual class std::weak_ptr<class POIInstance> _getOwnedPOI(enum POIType) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MOVETOPOIGOAL
public:
#endif
    MCAPI MoveToPOIGoal(class Mob &, float, enum POIType, float);
    MCAPI bool getPOI(enum POIType);

//protected:
    MCAPI bool _canReachPOI(class Vec3 const &, float, bool);

//private:
    MCAPI void _updatePOIBooking();

protected:

private:


};