// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class AutomationClientConnectPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AUTOMATIONCLIENTCONNECTPACKET
public:
    class AutomationClientConnectPacket& operator=(class AutomationClientConnectPacket const &) = delete;
    AutomationClientConnectPacket(class AutomationClientConnectPacket const &) = delete;
#endif


public:
    /*0*/ virtual ~AutomationClientConnectPacket();
    /*1*/ virtual enum MinecraftPacketIds getId() const;
    /*2*/ virtual std::string getName() const;
    /*3*/ virtual void write(class BinaryStream &) const;
    /*6*/ virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_AUTOMATIONCLIENTCONNECTPACKET
public:
#endif
    MCAPI AutomationClientConnectPacket(struct WebSocketPacketData);
    MCAPI AutomationClientConnectPacket();


};