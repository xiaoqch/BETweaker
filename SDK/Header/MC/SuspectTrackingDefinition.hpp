// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class SuspectTrackingDefinition {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SUSPECTTRACKINGDEFINITION
public:
    class SuspectTrackingDefinition& operator=(class SuspectTrackingDefinition const &) = delete;
    SuspectTrackingDefinition(class SuspectTrackingDefinition const &) = delete;
    SuspectTrackingDefinition() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SUSPECTTRACKINGDEFINITION
public:
#endif
    MCAPI void initialize(class EntityContext &, class SuspectTrackingComponent &);
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class SuspectTrackingDefinition>> &);


};