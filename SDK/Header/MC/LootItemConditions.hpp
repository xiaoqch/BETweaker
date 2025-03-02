// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class LootItemConditions {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOOTITEMCONDITIONS
public:
    class LootItemConditions& operator=(class LootItemConditions const &) = delete;
    LootItemConditions(class LootItemConditions const &) = delete;
    LootItemConditions() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LOOTITEMCONDITIONS
public:
#endif
    MCAPI static bool allApply(std::vector<std::unique_ptr<class LootItemCondition>> const &, class Random &, class LootTableContext &);
    MCAPI static std::vector<std::unique_ptr<class LootItemCondition>> deserialize(class Json::Value);


};