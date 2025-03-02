// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class HeartbeatDefinition {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HEARTBEATDEFINITION
public:
    class HeartbeatDefinition& operator=(class HeartbeatDefinition const &) = delete;
    HeartbeatDefinition(class HeartbeatDefinition const &) = delete;
    HeartbeatDefinition() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_HEARTBEATDEFINITION
public:
#endif
    MCAPI void initialize(class EntityContext &, class HeartbeatServerComponent &);
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class HeartbeatDefinition>> &);


};