// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ActorMovementTickFilterSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORMOVEMENTTICKFILTERSYSTEM
public:
    class ActorMovementTickFilterSystem& operator=(class ActorMovementTickFilterSystem const &) = delete;
    ActorMovementTickFilterSystem(class ActorMovementTickFilterSystem const &) = delete;
    ActorMovementTickFilterSystem() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ACTORMOVEMENTTICKFILTERSYSTEM
public:
#endif
    MCAPI static struct TickingSystemWithInfo createBase();
    MCAPI static struct TickingSystemWithInfo createInputPacketDependentFilter();
    MCAPI static struct TickingSystemWithInfo createSideBySide();


};