// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class AngerLevelComponent {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ANGERLEVELCOMPONENT
public:
    class AngerLevelComponent& operator=(class AngerLevelComponent const &) = delete;
    AngerLevelComponent() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ANGERLEVELCOMPONENT
public:
#endif
    MCAPI AngerLevelComponent(class AngerLevelComponent &&);
    MCAPI AngerLevelComponent(class AngerLevelComponent const &);
    MCAPI void addAdditionalSaveData(class CompoundTag &) const;
    MCAPI bool belowAngryThreshold(struct ActorUniqueID) const;
    MCAPI bool canBeNuisance(class Actor *, class Actor *) const;
    MCAPI int getAngerForAnimations(class Actor &) const;
    MCAPI class std::optional<struct std::pair<class Actor *, int>> getTopActiveNuisance(class Actor *, class ILevel const &) const;
    MCAPI bool isAngry() const;
    MCAPI class AngerLevelComponent & operator=(class AngerLevelComponent &&);
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &, class DataLoadHelper &);
    MCAPI void tick(class Actor *, class ILevel const &);
    MCAPI void tryIncreaseAngerAt(class Actor &, class Actor &, int);
    MCAPI void tryMakeAngryAt(class Actor &, class Actor &);
    MCAPI ~AngerLevelComponent();
    MCAPI static float const DEFAULT_ANGER_DECREMENT_INTERVAL_SECONDS;
    MCAPI static int const DEFAULT_ANGRY_BOOST;
    MCAPI static int const DEFAULT_ANGRY_THRESHOLD;
    MCAPI static int const DEFAULT_MAX_ANGER_LEVEL;
    MCAPI static bool const DEFAULT_SHOULD_REMOVE_TARGET;

//private:
    MCAPI void _createOrModifyAngerLevel(class Actor const &, class std::function<int (int)> const &);
    MCAPI class std::optional<enum LevelSoundEvent> _getListeningSoundEvent(class Actor &) const;

private:


};