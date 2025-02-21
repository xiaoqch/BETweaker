// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class WardenSpawnTrackerComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WARDENSPAWNTRACKERCOMPONENT
public:
    class WardenSpawnTrackerComponent& operator=(class WardenSpawnTrackerComponent const &) = delete;
    WardenSpawnTrackerComponent(class WardenSpawnTrackerComponent const &) = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_WARDENSPAWNTRACKERCOMPONENT
public:
#endif
    MCAPI WardenSpawnTrackerComponent();
    MCAPI void addAdditionalSaveData(class CompoundTag &) const;
    MCAPI bool canIncreaseThreatLevel() const;
    MCAPI void copyDataFrom(class WardenSpawnTrackerComponent const &);
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &, class DataLoadHelper &);
    MCAPI void tick();
    MCAPI int tryIncreaseThreatLevel();
    MCAPI static bool canSummonWarden(int);
    MCAPI static class std::optional<enum LevelSoundEvent> getSoundEventForThreatLevel(int);


};