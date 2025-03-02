// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class VillageManager {

#define AFTER_EXTRA
// Add Member There
public:
enum BedAvailabilityState;

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VILLAGEMANAGER
public:
    class VillageManager& operator=(class VillageManager const &) = delete;
    VillageManager(class VillageManager const &) = delete;
    VillageManager() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_VILLAGEMANAGER
public:
#endif
    MCAPI VillageManager(class Dimension &);
    MCAPI void applyHeroOfTheVillageEffect(class Actor &);
    MCAPI class std::weak_ptr<class Village> fetchClosestVillage(class BlockPos const &, int, unsigned int) const;
    MCAPI class std::weak_ptr<class Village> fetchClosestVillageMostSuitableForDweller(class BlockPos const &, int, unsigned int) const;
    MCAPI class std::weak_ptr<class Village> getClosestVillageWithRaid(class BlockPos const &);
    MCAPI class std::weak_ptr<class POIInstance> getPOI(class BlockPos const &) const;
    MCAPI class HashedString getPOIInitEventFromName(class HashedString const &) const;
    MCAPI class std::weak_ptr<class Village> getVillageByID(class mce::UUID const &) const;
    MCAPI bool hasPOI(class BlockPos const &, enum POIType) const;
    MCAPI void insertPOI(class std::shared_ptr<class POIInstance> &&);
    MCAPI bool isRegisteredPOI(class Block const &) const;
    MCAPI bool isValidPOIType(class BlockPos const &, class Block const &) const;
    MCAPI bool isWanderingTraderManagedByScheduler(class Actor const &);
    MCAPI void loadAllVillages();
    MCAPI void removePOI(class std::weak_ptr<class POIInstance>);
    MCAPI void saveAllVillages();
    MCAPI void submitFindPOIQuery(struct ActorUniqueID const &);
    MCAPI void tick(struct Tick const &);
    MCAPI void tickVillages(struct Tick const &, class Vec3 const &, class BlockSource &);
    MCAPI class std::shared_ptr<class POIInstance> tryCreatePOI(class BlockPos const &, class Block const &);
    MCAPI ~VillageManager();
    MCAPI static int const MAX_POI_TOLERANCE_DIST;

//private:
    MCAPI void _addPOIWithinRadius(class BlockPos const &, class BlockSource &);
    MCAPI void _assignPOIOnly(class std::shared_ptr<class POIInstance> &&);
    MCAPI float _calculateDistanceFromPositionToEdgeOfVillage(class BlockPos const &, class Village const &) const;
    MCAPI class std::shared_ptr<class Village> _createOrGetVillage(class mce::UUID const &, class BlockPos const &);
    MCAPI class std::unordered_map<class Village const *, enum VillageManager::BedAvailabilityState, struct std::hash<class Village const *>, struct std::equal_to<class Village const *>, class std::allocator<struct std::pair<class Village const *const, enum VillageManager::BedAvailabilityState>>> _getVillageWithBedsAvailableMap() const;
    MCAPI void _loadPOIBlueprints();
    MCAPI void _removeEligibleVillages();
    MCAPI void _tryAssignPOIOrCreateVillage(class std::shared_ptr<class POIInstance> &&);
    MCAPI void _unclusterDerelictPOIs(std::vector<class std::weak_ptr<class POIInstance>> &);

private:
    MCAPI static unsigned __int64 const MAX_POI_QUERIES;
    MCAPI static int const MAX_QUERY_SCAN_ITERATIONS;
    MCAPI static int const VILLAGE_HERO_EFFECT_DURATION;


};