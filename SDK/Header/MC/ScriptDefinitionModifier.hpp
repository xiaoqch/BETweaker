// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ScriptDefinitionModifier {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTDEFINITIONMODIFIER
public:
    class ScriptDefinitionModifier& operator=(class ScriptDefinitionModifier const &) = delete;
    ScriptDefinitionModifier(class ScriptDefinitionModifier const &) = delete;
    ScriptDefinitionModifier() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTDEFINITIONMODIFIER
public:
#endif
    MCAPI static class Scripting::ClassBindingBuilder<struct DefinitionModifier> bind(struct Scripting::Version);


};