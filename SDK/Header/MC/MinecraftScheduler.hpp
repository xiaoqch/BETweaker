// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class MinecraftScheduler {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MINECRAFTSCHEDULER
public:
    class MinecraftScheduler& operator=(class MinecraftScheduler const &) = delete;
    MinecraftScheduler(class MinecraftScheduler const &) = delete;
    MinecraftScheduler() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MINECRAFTSCHEDULER
public:
#endif
    MCAPI static class Scheduler & client();
    MCAPI static void destroyClientSingleton();

//private:

private:
    MCAPI static std::unique_ptr<class Scheduler> mInstance;


};