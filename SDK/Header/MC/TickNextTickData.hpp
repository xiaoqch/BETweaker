// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class TickNextTickData {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TICKNEXTTICKDATA
public:
    class TickNextTickData& operator=(class TickNextTickData const &) = delete;
    TickNextTickData(class TickNextTickData const &) = delete;
    TickNextTickData() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TICKNEXTTICKDATA
public:
#endif
    MCAPI TickNextTickData(class BlockPos const &, class Block const &, struct Tick const &, int);
    MCAPI bool operator==(class TickNextTickData const &) const;
    MCAPI bool operator>(class TickNextTickData const &) const;


};