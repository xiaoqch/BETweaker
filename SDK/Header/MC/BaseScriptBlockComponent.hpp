// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ScriptObject.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class BaseScriptBlockComponent : public ScriptObject {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BASESCRIPTBLOCKCOMPONENT
public:
    BaseScriptBlockComponent(class BaseScriptBlockComponent const &) = delete;
    BaseScriptBlockComponent() = delete;
#endif


public:
    /*0*/ virtual ~BaseScriptBlockComponent();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BASESCRIPTBLOCKCOMPONENT
public:
#endif
    MCAPI class BaseScriptBlockComponent & operator=(class BaseScriptBlockComponent const &);


};