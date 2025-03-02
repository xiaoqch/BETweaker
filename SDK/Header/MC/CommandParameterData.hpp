// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "CommandRegistry.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include <string_view>

enum class CommandParameterDataType {
    NORMAL,
    ENUM,
    SOFT_ENUM,
    POSIFIX,
};
enum SemanticConstraint: unsigned char
{
    NoneConstraint = 0,
    RequiresCheatsEnabled=1,
    RequiresElevatedPermissions=2,
    RequiresHostPermissions=4,
    VALUE_MASK=8,
};
enum CommandParameterOption : unsigned char
{
    None = 0,
    EnumAutocompleteExpansion = 1,
    HasSemanticConstraint = 2, //be used in block or item name enum
    EnumAsChainedCommand = 4,  //be used in NewExecuteCommand
};
class CommandRegistry;

#undef BEFORE_EXTRA

class CommandParameterData {

#define AFTER_EXTRA
// Add Member There
#define DISABLE_CONSTRUCTOR_PREVENTION_COMMANDPARAMETERDATA
    using ParseFn = bool (CommandRegistry::*)(
        void*, CommandRegistry::ParseToken const&, CommandOrigin const&, int, std::string&,
        std::vector<std::string>&) const;

public:
    typeid_t<CommandRegistry> tid; // 0
    ParseFn parser;                // 8
    std::string name;              // 16
    char const* desc;              // 48
    int unk56;                     // 56
    CommandParameterDataType type; // 60
    int offset;                    // 64
    int flag_offset;               // 68
    bool mand;                     // 72
    unsigned char options;         // 73

    CommandParameterData()
        : tid(tid){};

    CommandParameterData(
        typeid_t<CommandRegistry> tid, ParseFn parser, std::string_view describe,
        CommandParameterDataType type, char const* enumName, int offset, bool optional, int flag_offset)
        : tid(tid)
        , parser(parser)
        , name(describe)
        , desc(enumName)
        , unk56(-1)
        , type(type)
        , offset(offset)
        , flag_offset(flag_offset)
        , mand(optional)
        , options(0){};

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMMANDPARAMETERDATA
public:
    class CommandParameterData& operator=(class CommandParameterData const &) = delete;
    CommandParameterData() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_COMMANDPARAMETERDATA
public:
#endif
    MCAPI CommandParameterData(class CommandParameterData const &);
    MCAPI CommandParameterData(class typeid_t<class CommandRegistry>, bool ( CommandRegistry::*)(void *, struct CommandRegistry::ParseToken const &, class CommandOrigin const &, int, std::string &, std::vector<std::string> &) const, char const *, enum CommandParameterDataType, char const *, int, bool, int);
    MCAPI class CommandParameterData & addOptions(enum CommandParameterOption);
    MCAPI ~CommandParameterData();


};