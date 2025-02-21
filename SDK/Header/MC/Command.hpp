// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "CommandRegistry.hpp"
#include "CommandParameterData.hpp"
#include "CommandFlag.hpp"
class CommandRegistry;
//class CommandRegistry::Symbol;
enum CommandPermissionLevel : char
{
    Any = 0,
    GameMasters = 1,
    Admin = 2,
    HostPlayer = 3,
    Console = 4,
    Internal = 5,
};

enum class OriginType : char {
    Player = 0,
    Block = 1,
    MinecartBlock = 2,
    DevConsole = 3,
    Test = 4,
    AutomationPlayer = 5,
    ClientAutomation = 6,
    Server = 7,
    Actor = 8,
    Virtual = 9,
    GameArgument = 10,
    ActorServer = 11,
    Precompiled = 12,
    GameDirectorEntity = 13,
    Script = 14,
    ExecuteContext = 15,

    DedicatedServer = 7,//Server
};

class CommandOutput;

#undef BEFORE_EXTRA

class Command {

#define AFTER_EXTRA
// Add Member There

protected:
    int version;                       // 8
    CommandRegistry* registry;         // 16
    CommandRegistry::Symbol symbol;    // 24, 
    CommandPermissionLevel permission; // 28
    CommandFlag flag;                  // 30

public:
    template <typename T>
    static bool checkHasTargets(CommandSelectorResults<T> const& a, CommandOutput& b)
    {
        bool (*sym)(CommandSelectorResults<T> const& a, CommandOutput& b);
        if constexpr (std::is_same<T, class Actor>()) {
            sym = (decltype(sym))dlsym("??$checkHasTargets@VActor@@@Command@@KA_NAEBV?$CommandSelectorResults@VActor@@@@AEAVCommandOutput@@@Z");
        } else {
            sym = (decltype(sym))dlsym("??$checkHasTargets@VPlayer@@@Command@@KA_NAEBV?$CommandSelectorResults@VPlayer@@@@AEAVCommandOutput@@@Z");
        }
        return sym(a, b);
    }
#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMMAND
public:
    class Command& operator=(class Command const &) = delete;
    Command(class Command const &) = delete;
#endif


public:
    /*0*/ virtual ~Command();
    /*1*/ virtual void execute(class CommandOrigin const &, class CommandOutput &) const = 0;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_COMMAND
public:
#endif
    MCAPI Command();
    MCAPI std::string getCommandName() const;
    MCAPI bool hasFlag(struct CommandFlag) const;
    MCAPI void run(class CommandOrigin const &, class CommandOutput &) const;
    MCAPI static std::string const WILDCARD_TOKEN;
    MCAPI static bool validRange(int, int, int, class CommandOutput &);
    MCAPI static bool validRange(float, float, float, class CommandOutput &);

//protected:
    MCAPI class CommandRegistry const & getRegistry() const;
    MCAPI void sendTelemetry(class CommandOrigin const &, class CommandOutput &) const;
    MCAPI bool shouldSendTelemetry(class CommandOrigin const &) const;
    MCAPI static class Player * getPlayerFromOrigin(class CommandOrigin const &);
    MCAPI static bool isTemplateLockedAction(class CommandOrigin const &);
    MCAPI static bool isWildcard(class CommandSelectorBase const &);
    MCAPI static bool validData(int, unsigned short &, class CommandOutput &);

protected:


};