// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ClientPlayerEventCoordinator {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CLIENTPLAYEREVENTCOORDINATOR
public:
    class ClientPlayerEventCoordinator& operator=(class ClientPlayerEventCoordinator const &) = delete;
    ClientPlayerEventCoordinator(class ClientPlayerEventCoordinator const &) = delete;
    ClientPlayerEventCoordinator() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CLIENTPLAYEREVENTCOORDINATOR
public:
#endif
    MCAPI void sendPlayerDestroyedBlock(class Player &, class BlockLegacy const &);
    MCAPI void sendPlayerInput(struct IPlayerMovementProxy &, class MoveInputHandler &);
    MCAPI void sendStartDestroyBlock(class Player &, class BlockPos const &, unsigned char &);


};