// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class RemoveActorPacket : public Packet {

#define AFTER_EXTRA
// Add Member There
public:
    ActorUniqueID mUid;
#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_REMOVEACTORPACKET
public:
    class RemoveActorPacket& operator=(class RemoveActorPacket const &) = delete;
    RemoveActorPacket(class RemoveActorPacket const &) = delete;
#endif


public:
    /*0*/ virtual ~RemoveActorPacket();
    /*1*/ virtual enum MinecraftPacketIds getId() const;
    /*2*/ virtual std::string getName() const;
    /*3*/ virtual void write(class BinaryStream &) const;
    /*6*/ virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_REMOVEACTORPACKET
public:
#endif
    MCAPI RemoveActorPacket(struct ActorUniqueID);
    MCAPI RemoveActorPacket();


};