// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class SetScorePacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SETSCOREPACKET
public:
    class SetScorePacket& operator=(class SetScorePacket const &) = delete;
    SetScorePacket(class SetScorePacket const &) = delete;
    SetScorePacket() = delete;
#endif


public:
    /*0*/ virtual ~SetScorePacket();
    /*1*/ virtual enum MinecraftPacketIds getId() const;
    /*2*/ virtual std::string getName() const;
    /*3*/ virtual void write(class BinaryStream &) const;
    /*6*/ virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SETSCOREPACKET
public:
#endif
    MCAPI static class SetScorePacket change(struct ScoreboardId const &, class Objective const &);
    MCAPI static class SetScorePacket change(std::vector<struct ScorePacketInfo>);
    MCAPI static class SetScorePacket remove(struct ScoreboardId const &, class Objective const &);

//private:
    MCAPI SetScorePacket(enum ScorePacketType, struct ScoreboardId const &, class Objective const &);

private:


};