// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ActorEventResponseFactory {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTOREVENTRESPONSEFACTORY
public:
    class ActorEventResponseFactory& operator=(class ActorEventResponseFactory const &) = delete;
    ActorEventResponseFactory(class ActorEventResponseFactory const &) = delete;
    ActorEventResponseFactory() = delete;
#endif


public:
    /*0*/ virtual ~ActorEventResponseFactory();
    /*1*/ virtual void initializeFactory(class Experiments const &);
    /*2*/ virtual void initSchema();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ACTOREVENTRESPONSEFACTORY
public:
#endif


};