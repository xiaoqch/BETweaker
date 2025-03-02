// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class InsomniaDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INSOMNIADEFINITION
public:
    class InsomniaDefinition& operator=(class InsomniaDefinition const &) = delete;
    InsomniaDefinition(class InsomniaDefinition const &) = delete;
    InsomniaDefinition() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_INSOMNIADEFINITION
public:
#endif
    MCAPI void initialize(class EntityContext &, class InsomniaComponent &);
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class InsomniaDefinition>> &);


};