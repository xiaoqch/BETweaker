// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class BedrockLoadContext {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDROCKLOADCONTEXT
public:
    class BedrockLoadContext& operator=(class BedrockLoadContext const &) = delete;
    BedrockLoadContext(class BedrockLoadContext const &) = delete;
    BedrockLoadContext() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BEDROCKLOADCONTEXT
public:
#endif
    MCAPI BedrockLoadContext(class SemVersion const &);
    MCAPI ~BedrockLoadContext();


};