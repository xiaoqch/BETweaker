// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class UpdateSubChunkBlocksPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_UPDATESUBCHUNKBLOCKSPACKET
public:
    class UpdateSubChunkBlocksPacket& operator=(class UpdateSubChunkBlocksPacket const &) = delete;
    UpdateSubChunkBlocksPacket(class UpdateSubChunkBlocksPacket const &) = delete;
#endif


public:
    /*0*/ virtual ~UpdateSubChunkBlocksPacket();
    /*1*/ virtual enum MinecraftPacketIds getId() const;
    /*2*/ virtual std::string getName() const;
    /*3*/ virtual void write(class BinaryStream &) const;
    /*6*/ virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_UPDATESUBCHUNKBLOCKSPACKET
public:
#endif
    MCAPI UpdateSubChunkBlocksPacket(std::vector<struct UpdateSubChunkBlocksPacket::NetworkBlockInfo> const &, std::vector<struct UpdateSubChunkBlocksPacket::NetworkBlockInfo> const &);
    MCAPI UpdateSubChunkBlocksPacket();
    MCAPI void setSubChunkPosition(class SubChunkPos const &);


};