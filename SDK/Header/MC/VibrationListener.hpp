// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class VibrationListener {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VIBRATIONLISTENER
public:
    class VibrationListener& operator=(class VibrationListener const &) = delete;
    VibrationListener(class VibrationListener const &) = delete;
    VibrationListener() = delete;
#endif


public:
    /*0*/ virtual ~VibrationListener();
    /*1*/ virtual void handleGameEvent(class GameEvent const &, struct GameEventContext const &, class BlockSource &);
    /*2*/ virtual class GameEvents::PositionSource const & getPositionSource() const;
    /*3*/ virtual unsigned int getRange() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_VIBRATIONLISTENER
public:
#endif
    MCAPI VibrationListener(std::unique_ptr<class VibrationListenerConfig> &&, class GameEvents::PositionSource, unsigned int, enum VibrationListener::OwnerType);
    MCAPI class GameEvent const & getGameEvent() const;
    MCAPI void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    MCAPI void save(class CompoundTag &) const;
    MCAPI void tick(class BlockSource &);
    MCAPI static int getGameEventFrequency(class GameEvent const &);

//private:
    MCAPI void _sendSignal(class BlockSource &, class GameEvent const &, struct GameEventContext const &, class GameEvents::PositionSource const &);
    MCAPI static bool _shouldIgnoreVibration(class BlockSource &, class GameEvent const &, struct GameEventContext const &);

private:


};