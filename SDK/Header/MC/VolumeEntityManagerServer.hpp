// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class VolumeEntityManagerServer {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VOLUMEENTITYMANAGERSERVER
public:
    class VolumeEntityManagerServer& operator=(class VolumeEntityManagerServer const &) = delete;
    VolumeEntityManagerServer(class VolumeEntityManagerServer const &) = delete;
    VolumeEntityManagerServer() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_VOLUMEENTITYMANAGERSERVER
public:
#endif
    MCAPI VolumeEntityManagerServer(class StackRefResultT<struct EntityRegistryRefTraits>);
    MCAPI struct std::pair<enum VolumeEntityManagerServer::CreateVolumeResult, class StackRefResultT<struct EntityRefTraits>> createVolume(class LevelStorage &, class PacketSender &, std::string const &, class BlockPos const &, class BlockPos const &, class AutomaticID<class Dimension, int>, std::string const &);
    MCAPI std::vector<class WeakRefT<struct EntityRefTraits>> getAllVolumesOverlappingChunkPosition(class ChunkPos const &, class AutomaticID<class Dimension, int>) const;
    MCAPI void loadVolumeFiles(class ResourcePackManager const &, bool);
    MCAPI void loadVolumeInstances(class LevelStorage const &, bool);
    MCAPI std::vector<class OwnerPtrT<struct EntityRefTraits>> removeAllVolumes(class LevelStorage &, class AutomaticID<class Dimension, int>, class PacketSender &);
    MCAPI std::vector<class OwnerPtrT<struct EntityRefTraits>> removeVolumes(class LevelStorage &, std::string const &, class AutomaticID<class Dimension, int>, class PacketSender &);
    MCAPI std::vector<class OwnerPtrT<struct EntityRefTraits>> removeVolumes(class LevelStorage &, class BlockPos const &, class AutomaticID<class Dimension, int>, class PacketSender &);
    MCAPI void sendAllVolumesToClient(class UserEntityIdentifierComponent const &, class NetworkIdentifier const &, class PacketSender &) const;


};