// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class TextObjectSelector {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TEXTOBJECTSELECTOR
public:
    class TextObjectSelector& operator=(class TextObjectSelector const &) = delete;
    TextObjectSelector(class TextObjectSelector const &) = delete;
    TextObjectSelector() = delete;
#endif


public:
    /*0*/ virtual ~TextObjectSelector();
    /*1*/ virtual std::string asString() const;
    /*2*/ virtual class Json::Value asJsonValue() const;
    /*3*/ virtual class Json::Value resolve(struct ResolveData const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TEXTOBJECTSELECTOR
public:
#endif
    MCAPI TextObjectSelector(std::string);
    MCAPI static std::string const RAW_TEXT_SELECTOR_KEY;
    MCAPI static std::string const RAW_TEXT_SELECTOR_STAR;


};