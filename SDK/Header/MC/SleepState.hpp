// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class SleepState {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SLEEPSTATE
public:
    class SleepState& operator=(class SleepState const &) = delete;
    SleepState(class SleepState const &) = delete;
    SleepState() = delete;
#endif


public:
    /*0*/ virtual ~SleepState();
    /*1*/ virtual void tick();
    /*2*/ virtual void __unk_vfn_2();
    /*3*/ virtual void stop();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SLEEPSTATE
public:
#endif


};