// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ReceivingEvent {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RECEIVINGEVENT
public:
    class ReceivingEvent& operator=(class ReceivingEvent const &) = delete;
    ReceivingEvent(class ReceivingEvent const &) = delete;
    ReceivingEvent() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RECEIVINGEVENT
public:
#endif
    MCAPI void load(class Level &, class CompoundTag const &, class DataLoadHelper &);


};