// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "MoveInputHandler.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ServerMoveInputHandler : public MoveInputHandler {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERMOVEINPUTHANDLER
public:
    class ServerMoveInputHandler& operator=(class ServerMoveInputHandler const &) = delete;
    ServerMoveInputHandler(class ServerMoveInputHandler const &) = delete;
#endif


public:
    /*0*/ virtual ~ServerMoveInputHandler();
    /*2*/ virtual void __unk_vfn_2();
    /*3*/ virtual void __unk_vfn_3();
    /*5*/ virtual void __unk_vfn_5();
    /*15*/ virtual void __unk_vfn_15();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SERVERMOVEINPUTHANDLER
public:
    MCVAPI void registerInputHandlers(class InputHandler &);
#endif
    MCAPI ServerMoveInputHandler();
    MCAPI void digestPlayerInputPacket(class PlayerAuthInputPacket const &);


};