// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Command.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ResourceUriCommand : public Command {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RESOURCEURICOMMAND
public:
    class ResourceUriCommand& operator=(class ResourceUriCommand const &) = delete;
    ResourceUriCommand(class ResourceUriCommand const &) = delete;
    ResourceUriCommand() = delete;
#endif


public:
    /*0*/ virtual ~ResourceUriCommand();
    /*1*/ virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RESOURCEURICOMMAND
public:
#endif
    MCAPI static void setup(class CommandRegistry &);

//private:
    MCAPI void _executeClear(class Level &, class Player *, class CommandOutput &) const;
    MCAPI void _executeNamed(class Level &, class Player *, class CommandOutput &) const;
    MCAPI void _executeUriOnly(class Level &, class Player *, class CommandOutput &) const;

private:


};