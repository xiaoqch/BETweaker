// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class HurtArmorPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HURTARMORPACKET
public:
    class HurtArmorPacket& operator=(class HurtArmorPacket const &) = delete;
    HurtArmorPacket(class HurtArmorPacket const &) = delete;
#endif


public:
    /*0*/ virtual ~HurtArmorPacket();
    /*1*/ virtual enum MinecraftPacketIds getId() const;
    /*2*/ virtual std::string getName() const;
    /*3*/ virtual void write(class BinaryStream &) const;
    /*6*/ virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_HURTARMORPACKET
public:
#endif
    MCAPI HurtArmorPacket(enum ActorDamageCause, int, class std::bitset<4>);
    MCAPI HurtArmorPacket();


};