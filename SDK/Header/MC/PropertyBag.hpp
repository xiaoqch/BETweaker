// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class PropertyBag {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PROPERTYBAG
public:
    class PropertyBag& operator=(class PropertyBag const &) = delete;
    PropertyBag(class PropertyBag const &) = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PROPERTYBAG
public:
#endif
    MCAPI PropertyBag(class Json::Value const &);
    MCAPI PropertyBag();
    MCAPI class Json::Value const & toJsonValue() const;
    MCAPI std::string toString() const;
    MCAPI static class PropertyBag EMPTY;


};