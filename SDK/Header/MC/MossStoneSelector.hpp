// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class MossStoneSelector {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOSSSTONESELECTOR
public:
    class MossStoneSelector& operator=(class MossStoneSelector const &) = delete;
    MossStoneSelector(class MossStoneSelector const &) = delete;
    MossStoneSelector() = delete;
#endif


public:
    /*0*/ virtual ~MossStoneSelector();
    /*1*/ virtual class Block const & next(class Random &, int, int, int, bool) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MOSSSTONESELECTOR
public:
#endif


};