// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class TextObjectLocalizedText {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TEXTOBJECTLOCALIZEDTEXT
public:
    class TextObjectLocalizedText& operator=(class TextObjectLocalizedText const &) = delete;
    TextObjectLocalizedText(class TextObjectLocalizedText const &) = delete;
    TextObjectLocalizedText() = delete;
#endif


public:
    /*0*/ virtual ~TextObjectLocalizedText();
    /*1*/ virtual std::string asString() const;
    /*2*/ virtual class Json::Value asJsonValue() const;
    /*3*/ virtual class Json::Value resolve(struct ResolveData const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TEXTOBJECTLOCALIZEDTEXT
public:
#endif
    MCAPI TextObjectLocalizedText(std::string);


};