// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class GameRulesChangedPacketData {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GAMERULESCHANGEDPACKETDATA
public:
    class GameRulesChangedPacketData& operator=(class GameRulesChangedPacketData const &) = delete;
    GameRulesChangedPacketData(class GameRulesChangedPacketData const &) = delete;
    GameRulesChangedPacketData() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_GAMERULESCHANGEDPACKETDATA
public:
#endif
    MCAPI void addRule(class GameRule const &);
    MCAPI std::vector<class GameRule> const & getRules() const;
    MCAPI void setRules(std::vector<class GameRule>);
    MCAPI ~GameRulesChangedPacketData();


};