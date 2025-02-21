// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class TimerDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TIMERDEFINITION
public:
    class TimerDefinition& operator=(class TimerDefinition const &) = delete;
    TimerDefinition(class TimerDefinition const &) = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TIMERDEFINITION
public:
#endif
    MCAPI TimerDefinition();
    MCAPI void addWeightedChoiceEntry(struct WeightChoiceEntry const &);
    MCAPI void initialize(class EntityContext &, class TimerComponent &) const;
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class TimerDefinition>> &);


};