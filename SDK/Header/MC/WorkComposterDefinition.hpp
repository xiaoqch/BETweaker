// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class WorkComposterDefinition {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WORKCOMPOSTERDEFINITION
public:
    class WorkComposterDefinition& operator=(class WorkComposterDefinition const &) = delete;
    WorkComposterDefinition(class WorkComposterDefinition const &) = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_WORKCOMPOSTERDEFINITION
public:
#endif
    MCAPI WorkComposterDefinition();
    MCAPI void initialize(class EntityContext &, class WorkComposterGoal &);
    MCAPI static void buildSchema(std::string const &, class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class WorkComposterDefinition>> &);


};