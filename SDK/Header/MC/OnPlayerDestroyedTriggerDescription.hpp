// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class OnPlayerDestroyedTriggerDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ONPLAYERDESTROYEDTRIGGERDESCRIPTION
public:
    class OnPlayerDestroyedTriggerDescription& operator=(class OnPlayerDestroyedTriggerDescription const &) = delete;
    OnPlayerDestroyedTriggerDescription(class OnPlayerDestroyedTriggerDescription const &) = delete;
    OnPlayerDestroyedTriggerDescription() = delete;
#endif


public:
    /*0*/ virtual ~OnPlayerDestroyedTriggerDescription();
    /*1*/ virtual std::string const & getName() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ONPLAYERDESTROYEDTRIGGERDESCRIPTION
public:
#endif
    MCAPI static std::string const NameID;


};