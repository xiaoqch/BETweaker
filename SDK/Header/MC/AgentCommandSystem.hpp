// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class AgentCommandSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AGENTCOMMANDSYSTEM
public:
    class AgentCommandSystem& operator=(class AgentCommandSystem const &) = delete;
    AgentCommandSystem(class AgentCommandSystem const &) = delete;
    AgentCommandSystem() = delete;
#endif


public:
    /*0*/ virtual ~AgentCommandSystem();
    /*1*/ virtual void __unk_vfn_1();
    /*2*/ virtual void tick(class EntityRegistry &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_AGENTCOMMANDSYSTEM
public:
#endif
    MCAPI static void cleanUp(class EntityContext &, float);
    MCAPI static void initialize(class ViewedEntityContextT<class EntityContext, class FlagComponent<struct ActorTickedFlag>, class FlagComponent<struct AgentComponents::InitializingFlag>, class FlagComponent<struct AgentComponents::LegacyCommandFlag>> &);
    MCAPI static void tickAgentCooldown(class ViewedEntityContextT<class EntityContext, class FlagComponent<struct ActorTickedFlag>, class AgentComponents::CommandCooldown, class AgentComponents::ActionQueue> &);
    MCAPI static void tickLegacy(class ViewedEntityContextT<class EntityContext, class FlagComponent<struct ActorTickedFlag>, class AgentCommandComponent, class FlagComponent<struct AgentComponents::ExecutingFlag>, class FlagComponent<struct AgentComponents::LegacyCommandFlag>> &);


};