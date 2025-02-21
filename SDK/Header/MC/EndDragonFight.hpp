// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class EndDragonFight {

#define AFTER_EXTRA
// Add Member There
public:
enum GatewayTask;
struct GateWayGenerator {
    GateWayGenerator() = delete;
    GateWayGenerator(GateWayGenerator const&) = delete;
    GateWayGenerator(GateWayGenerator const&&) = delete;
};

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENDDRAGONFIGHT
public:
    class EndDragonFight& operator=(class EndDragonFight const &) = delete;
    EndDragonFight(class EndDragonFight const &) = delete;
    EndDragonFight() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ENDDRAGONFIGHT
public:
#endif
    MCAPI EndDragonFight(class BlockSource &);
    MCAPI void loadData(class CompoundTag const &);
    MCAPI void onCrystalDestroyed(class EnderCrystal const &, class ActorDamageSource const &);
    MCAPI void resetSpikeCrystals();
    MCAPI void saveData(class CompoundTag &);
    MCAPI void spawnNewGatewayChunks(class BlockPos const &, bool, bool);
    MCAPI void tick();
    MCAPI void tryRespawn();
    MCAPI void verifyExitPositions(class EndGatewayBlockActor &);
    MCAPI ~EndDragonFight();

//private:
    MCAPI bool _canSpawnNewGateway(class ChunkViewSource *, class BlockPos const &) const;
    MCAPI void _createNewDragon();
    MCAPI struct BuildMatch _findExitPortal();
    MCAPI void _initializeDragon(class EnderDragon &);
    MCAPI void _makeEndIslandFeature(class BlockSource &, class BlockPos);
    MCAPI void _placeAndLinkNewGatewayPair();
    MCAPI bool _setEndGatewayBlockActorExitPosition(class BlockSource &, class BlockSource &, class BlockPos const &, class BlockPos const &, bool);
    MCAPI void _setRespawnStage(enum RespawnAnimation);
    MCAPI void _spawnExitPortal(bool);
    MCAPI void _spawnNewGatewayChunksTask(class std::tuple<enum EndDragonFight::GatewayTask, struct EndDragonFight::GateWayGenerator, struct EndDragonFight::GateWayGenerator> &);
    MCAPI void _spawnNewGatewayPair();
    MCAPI void _tickRespawnAnimation(std::vector<struct ActorUniqueID> const &, int);
    MCAPI void _updateCrystalCount();
    MCAPI void _verifyExitPositionsTask(class std::tuple<enum EndDragonFight::GatewayTask, struct EndDragonFight::GateWayGenerator, struct EndDragonFight::GateWayGenerator> &);

private:
    MCAPI static int const ARENA_SIZE_CHUNKS;
    MCAPI static class BlockPos const DEFAULT_PORTAL_LOCATION;
    MCAPI static int const GATEWAY_CHUNK_RADIUS;
    MCAPI static int const GATEWAY_COUNT;
    MCAPI static int const GATEWAY_DISTANCE;
    MCAPI static int const GATEWAY_HEIGHT;
    MCAPI static int const TIME_BETWEEN_CRYSTAL_SCANS;
    MCAPI static int const TIME_BETWEEN_PLAYER_SCANS;
    MCAPI static int const TIME_BETWEEN_PORTAL_SCANS;


};