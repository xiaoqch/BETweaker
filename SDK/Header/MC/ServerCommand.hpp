// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ServerCommand {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERCOMMAND
public:
    class ServerCommand& operator=(class ServerCommand const &) = delete;
    ServerCommand(class ServerCommand const &) = delete;
    ServerCommand() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SERVERCOMMAND
public:
    MCVAPI ~ServerCommand();
#endif
    MCAPI static void setup(class Minecraft &);

//protected:

protected:
    MCAPI static class Minecraft * mGame;


};