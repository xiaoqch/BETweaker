// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class PlayerStartItemCooldownPacket : public Packet {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERSTARTITEMCOOLDOWNPACKET
public:
    class PlayerStartItemCooldownPacket& operator=(class PlayerStartItemCooldownPacket const &) = delete;
    PlayerStartItemCooldownPacket(class PlayerStartItemCooldownPacket const &) = delete;
#endif


public:
    /*0*/ virtual ~PlayerStartItemCooldownPacket();
    /*1*/ virtual enum MinecraftPacketIds getId() const;
    /*2*/ virtual std::string getName() const;
    /*3*/ virtual void write(class BinaryStream &) const;
    /*6*/ virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PLAYERSTARTITEMCOOLDOWNPACKET
public:
#endif
    MCAPI PlayerStartItemCooldownPacket(std::string const &, int);
    MCAPI PlayerStartItemCooldownPacket();


};