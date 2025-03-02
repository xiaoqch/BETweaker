// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class BehaviorTreeGroup {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEHAVIORTREEGROUP
public:
    class BehaviorTreeGroup& operator=(class BehaviorTreeGroup const &) = delete;
    BehaviorTreeGroup(class BehaviorTreeGroup const &) = delete;
    BehaviorTreeGroup() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BEHAVIORTREEGROUP
public:
#endif
    MCAPI BehaviorTreeGroup(class ResourcePackManager &, class BehaviorFactory &);
    MCAPI class BehaviorTreeDefinitionPtr tryGetDefinition(std::string const &);
    MCAPI ~BehaviorTreeGroup();

//private:
    MCAPI void _addRef(class BehaviorTreeDefinitionPtr &);
    MCAPI void _removeRef(class BehaviorTreeDefinitionPtr &);

private:


};