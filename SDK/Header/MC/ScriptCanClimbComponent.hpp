// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ScriptActorComponent.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ScriptCanClimbComponent : public ScriptActorComponent {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTCANCLIMBCOMPONENT
public:
    class ScriptCanClimbComponent& operator=(class ScriptCanClimbComponent const &) = delete;
    ScriptCanClimbComponent(class ScriptCanClimbComponent const &) = delete;
    ScriptCanClimbComponent() = delete;
#endif


public:
    /*0*/ virtual ~ScriptCanClimbComponent();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTCANCLIMBCOMPONENT
public:
#endif
    MCAPI static class HashedString const & getHashedName();


};