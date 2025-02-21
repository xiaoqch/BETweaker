// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class AvailableActorIdentifiersPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AVAILABLEACTORIDENTIFIERSPACKET
public:
    class AvailableActorIdentifiersPacket& operator=(class AvailableActorIdentifiersPacket const &) = delete;
    AvailableActorIdentifiersPacket(class AvailableActorIdentifiersPacket const &) = delete;
#endif


public:
    /*0*/ virtual ~AvailableActorIdentifiersPacket();
    /*1*/ virtual enum MinecraftPacketIds getId() const;
    /*2*/ virtual std::string getName() const;
    /*3*/ virtual void write(class BinaryStream &) const;
    /*4*/ virtual struct ExtendedStreamReadResult readExtended(class ReadOnlyBinaryStream &);
    /*6*/ virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_AVAILABLEACTORIDENTIFIERSPACKET
public:
#endif
    MCAPI AvailableActorIdentifiersPacket(std::vector<struct ActorInfo> const &);
    MCAPI AvailableActorIdentifiersPacket();


};