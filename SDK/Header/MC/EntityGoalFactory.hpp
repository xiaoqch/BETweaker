// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class EntityGoalFactory {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENTITYGOALFACTORY
public:
    class EntityGoalFactory& operator=(class EntityGoalFactory const &) = delete;
    EntityGoalFactory(class EntityGoalFactory const &) = delete;
    EntityGoalFactory() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ENTITYGOALFACTORY
public:
#endif
    MCAPI class IJsonDefinitionSerializer * tryGetDefinitionSerializer(std::string const &);
    MCAPI ~EntityGoalFactory();
    MCAPI static void addGoals(class EntityContext &, class DefinitionInstanceGroup const &);


};