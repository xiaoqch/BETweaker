// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "NavigationScriptActorComponent.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ScriptNavigationFloatComponent : public NavigationScriptActorComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTNAVIGATIONFLOATCOMPONENT
public:
    class ScriptNavigationFloatComponent& operator=(class ScriptNavigationFloatComponent const &) = delete;
    ScriptNavigationFloatComponent(class ScriptNavigationFloatComponent const &) = delete;
    ScriptNavigationFloatComponent() = delete;
#endif


public:
    /*0*/ virtual ~ScriptNavigationFloatComponent();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTNAVIGATIONFLOATCOMPONENT
public:
#endif
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptNavigationFloatComponent> bind(struct Scripting::Version);


};