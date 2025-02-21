// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ScriptObject.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ScriptFoodComponent : public ScriptObject {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTFOODCOMPONENT
public:
    ScriptFoodComponent() = delete;
#endif


public:
    /*0*/ virtual ~ScriptFoodComponent();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTFOODCOMPONENT
public:
#endif
    MCAPI ScriptFoodComponent(class ScriptFoodComponent const &);
    MCAPI ScriptFoodComponent(class Scripting::WeakTypedObjectHandle<class ScriptItemStack>, class Scripting::WeakLifetimeScope const &);
    MCAPI class Scripting::Result<bool> getCanAlwaysEat();
    MCAPI class Scripting::Result<int> getNutrition();
    MCAPI class Scripting::Result<float> getSaturationModifier();
    MCAPI class Scripting::Result<std::string> getUsingConvertsToItem();
    MCAPI class ScriptFoodComponent & operator=(class ScriptFoodComponent const &);
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptFoodComponent> bind(struct Scripting::Version);
    MCAPI static std::string const & getTypeName();


};