// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "RakNet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class RakWebSocketDataFrame {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RAKWEBSOCKETDATAFRAME
public:
    class RakWebSocketDataFrame& operator=(class RakWebSocketDataFrame const &) = delete;
    RakWebSocketDataFrame(class RakWebSocketDataFrame const &) = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RAKWEBSOCKETDATAFRAME
public:
#endif
    MCAPI RakWebSocketDataFrame();
    MCAPI enum CloseStatusCode getCloseCode() const;
    MCAPI struct RakWebSocketDataFrameHeader const & getHeader() const;
    MCAPI enum WebSocketMessageType getMessageType() const;
    MCAPI enum RakWebSocketDataFrame::ParseState getParseState() const;
    MCAPI class RakNet::BitStream const & getPayload() const;
    MCAPI std::string getPayloadAsString() const;
    MCAPI ~RakWebSocketDataFrame();
    MCAPI static void writeFrameToStream(class RakNet::BitStream &, unsigned char const *, unsigned int, enum OpCode, bool, unsigned int);

//private:
    MCAPI static bool _isContinuation(unsigned char);
    MCAPI static bool _isControl(unsigned char);
    MCAPI static bool _isNonControl(unsigned char);
    MCAPI static bool _isUnsupported(unsigned char);
    MCAPI static void _maskUnmaskData(unsigned char *, unsigned int, unsigned int, unsigned int);

private:


};