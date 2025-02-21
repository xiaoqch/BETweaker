// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "RakWebSocket.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class RakWebSocketClient : public RakWebSocket {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RAKWEBSOCKETCLIENT
public:
    class RakWebSocketClient& operator=(class RakWebSocketClient const &) = delete;
    RakWebSocketClient(class RakWebSocketClient const &) = delete;
    RakWebSocketClient() = delete;
#endif


public:
    /*0*/ virtual ~RakWebSocketClient();
    /*8*/ virtual void _updateState();
    /*9*/ virtual unsigned int _genMaskingKey() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RAKWEBSOCKETCLIENT
public:
#endif
    MCAPI RakWebSocketClient(std::unique_ptr<class TcpProxy>);


};