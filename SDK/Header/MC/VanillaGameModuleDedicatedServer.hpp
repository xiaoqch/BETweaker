// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class VanillaGameModuleDedicatedServer {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VANILLAGAMEMODULEDEDICATEDSERVER
public:
    class VanillaGameModuleDedicatedServer& operator=(class VanillaGameModuleDedicatedServer const &) = delete;
    VanillaGameModuleDedicatedServer(class VanillaGameModuleDedicatedServer const &) = delete;
    VanillaGameModuleDedicatedServer() = delete;
#endif


public:
    /*0*/ virtual ~VanillaGameModuleDedicatedServer();
    /*1*/ virtual std::unique_ptr<class GameModuleServer> createGameModuleServer();
    /*2*/ virtual class std::shared_ptr<class IInPackagePacks> createInPackagePacks();
    /*3*/ virtual void registerMolangQueries();
    /*4*/ virtual void registerServerInstanceHandler(class ServerInstanceEventCoordinator &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_VANILLAGAMEMODULEDEDICATEDSERVER
public:
#endif


};