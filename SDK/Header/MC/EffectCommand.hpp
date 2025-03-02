// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Command.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class EffectCommand : public Command {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EFFECTCOMMAND
public:
    class EffectCommand& operator=(class EffectCommand const &) = delete;
    EffectCommand(class EffectCommand const &) = delete;
    EffectCommand() = delete;
#endif


public:
    /*0*/ virtual ~EffectCommand();
    /*1*/ virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_EFFECTCOMMAND
public:
#endif
    MCAPI static void setup(class CommandRegistry &);

//private:
    MCAPI void clear(class CommandOrigin const &, class CommandOutput &) const;

private:


};