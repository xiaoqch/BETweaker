// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ActorEventListener {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTOREVENTLISTENER
public:
    class ActorEventListener& operator=(class ActorEventListener const &) = delete;
    ActorEventListener(class ActorEventListener const &) = delete;
    ActorEventListener() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ACTOREVENTLISTENER
public:
    MCVAPI enum EventResult onActorAttackedActor(class Actor &, class Actor &);
    MCVAPI enum EventResult onActorCarriedItemChanged(class Actor &, class ItemInstance const &, class ItemInstance const &, enum HandSlot);
    MCVAPI enum EventResult onActorCreated(class Actor &);
    MCVAPI enum EventResult onActorDeath(class Actor &, class ActorDamageSource const &, enum ActorType);
    MCVAPI enum EventResult onActorDefinitionEvent(class Actor &, std::string const &, std::vector<struct DefinitionModifier> &);
    MCVAPI enum EventResult onActorDroppedItem(class Actor &, class ItemInstance const &);
    MCVAPI enum EventResult onActorEquippedArmor(class Actor &, class ItemInstance const &, enum ArmorSlot);
    MCVAPI enum EventResult onActorMobInteraction(class Actor &, enum MinecraftEventing::InteractionType, enum ActorType);
    MCVAPI enum EventResult onActorMove(class Actor &, class Vec3 const &);
    MCVAPI enum EventResult onActorPlacedItem(class Actor &, class ItemInstance const &);
    MCVAPI enum EventResult onActorPredictedMove(class Actor &, enum MovePredictionType, class Vec3 const &);
    MCVAPI enum EventResult onActorSneakChanged(class Actor &, bool);
    MCVAPI enum EventResult onActorStartRiding(class Actor &, class Actor &);
    MCVAPI enum EventResult onActorStopRiding(class Actor &, bool, bool, bool);
    MCVAPI enum EventResult onActorTargetAcquired(class Actor &, class Actor &);
    MCVAPI enum EventResult onActorTeleported(class Actor &);
    MCVAPI enum EventResult onActorTick(class Actor &);
    MCVAPI enum EventResult onActorUseItemOn(class Actor &, class ItemStack const &, class BlockPos const &, unsigned char);
    MCVAPI enum EventResult onEvent(struct ActorNotificationEvent const &);
#endif


};