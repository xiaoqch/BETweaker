// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class AngryDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ANGRYDEFINITION
public:
    class AngryDefinition& operator=(class AngryDefinition const &) = delete;
    AngryDefinition(class AngryDefinition const &) = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ANGRYDEFINITION
public:
#endif
    MCAPI AngryDefinition();
    MCAPI void addBroadcastTargetByName(std::string const &);
    MCAPI void initialize(class EntityContext &, class AngryComponent &) const;
    MCAPI void uninitialize(class EntityContext &, class AngryComponent &) const;
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class AngryDefinition>> &);


};