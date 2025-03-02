// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ProducerComponent.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class RedstoneTorchCapacitor : public ProducerComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_REDSTONETORCHCAPACITOR
public:
    class RedstoneTorchCapacitor& operator=(class RedstoneTorchCapacitor const &) = delete;
    RedstoneTorchCapacitor(class RedstoneTorchCapacitor const &) = delete;
#endif


public:
    /*0*/ virtual ~RedstoneTorchCapacitor();
    /*1*/ virtual int getStrength() const;
    /*10*/ virtual bool removeSource(class BlockPos const &, class BaseCircuitComponent const *);
    /*11*/ virtual bool addSource(class CircuitSceneGraph &, class CircuitTrackingInfo const &, int &, bool &);
    /*12*/ virtual bool allowConnection(class CircuitSceneGraph &, class CircuitTrackingInfo const &, bool &);
    /*14*/ virtual bool evaluate(class CircuitSystem &, class BlockPos const &);
    /*15*/ virtual void cacheValues(class CircuitSystem &, class BlockPos const &);
    /*16*/ virtual void updateDependencies(class CircuitSceneGraph &, class BlockPos const &);
    /*17*/ virtual void __unk_vfn_17();
    /*18*/ virtual bool isHalfPulse() const;
    /*20*/ virtual void __unk_vfn_20();
    /*22*/ virtual enum CircuitComponentType getCircuitComponentType() const;
    /*24*/ virtual unsigned char getPoweroutDirection() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_REDSTONETORCHCAPACITOR
public:
#endif
    MCAPI RedstoneTorchCapacitor();
    MCAPI void resetBurnOutCount();
    MCAPI void setOn(bool);

//private:
    MCAPI int FindStrongestStrength(class BlockPos const &, class CircuitSystem &, bool &);

private:


};