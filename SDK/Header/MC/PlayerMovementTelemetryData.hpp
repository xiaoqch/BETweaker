// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class PlayerMovementTelemetryData {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERMOVEMENTTELEMETRYDATA
public:
    class PlayerMovementTelemetryData& operator=(class PlayerMovementTelemetryData const &) = delete;
    PlayerMovementTelemetryData(class PlayerMovementTelemetryData const &) = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PLAYERMOVEMENTTELEMETRYDATA
public:
#endif
    MCAPI PlayerMovementTelemetryData();
    MCAPI float getAverage() const;
    MCAPI void reset();


};