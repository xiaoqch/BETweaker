// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class SlimeRandomDirectionDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SLIMERANDOMDIRECTIONDEFINITION
public:
    class SlimeRandomDirectionDefinition& operator=(class SlimeRandomDirectionDefinition const &) = delete;
    SlimeRandomDirectionDefinition(class SlimeRandomDirectionDefinition const &) = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SLIMERANDOMDIRECTIONDEFINITION
public:
#endif
    MCAPI SlimeRandomDirectionDefinition();
    MCAPI void initialize(class EntityContext &, class SlimeRandomDirectionGoal &);
    MCAPI static void buildSchema(std::string const &, class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class SlimeRandomDirectionDefinition>> &);


};