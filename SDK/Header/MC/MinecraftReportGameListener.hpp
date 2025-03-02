// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class MinecraftReportGameListener {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MINECRAFTREPORTGAMELISTENER
public:
    class MinecraftReportGameListener& operator=(class MinecraftReportGameListener const &) = delete;
    MinecraftReportGameListener(class MinecraftReportGameListener const &) = delete;
    MinecraftReportGameListener() = delete;
#endif


public:
    /*0*/ virtual ~MinecraftReportGameListener();
    /*1*/ virtual void onTestStructureLoaded(class gametest::BaseGameTestInstance &);
    /*2*/ virtual void onTestPassed(class gametest::BaseGameTestInstance &);
    /*3*/ virtual void onTestFailed(class gametest::BaseGameTestInstance &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MINECRAFTREPORTGAMELISTENER
public:
#endif
    MCAPI MinecraftReportGameListener(class MinecraftGameTestInstance &, class gametest::GameTestTicker &);

//private:
    MCAPI std::string _generateErrorDescription(struct gametest::GameTestError const &) const;
    MCAPI void _reportFailure(struct gametest::GameTestError const &, class BlockSource &);
    MCAPI void _say(std::string const &, std::string const &);
    MCAPI void _spawnBeacon(class Block const &);
    MCAPI void _spawnLectern(std::string const &);
    MCAPI void _visualizeFailedTest(struct gametest::GameTestError const &, class BlockSource &);

private:


};