// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "StructureStart.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class OceanRuinStart : public StructureStart {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OCEANRUINSTART
public:
    class OceanRuinStart& operator=(class OceanRuinStart const &) = delete;
    OceanRuinStart(class OceanRuinStart const &) = delete;
    OceanRuinStart() = delete;
#endif


public:
    /*0*/ virtual ~OceanRuinStart();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_OCEANRUINSTART
public:
#endif
    MCAPI void createRuin(class Dimension &, class Random &, int, int);


};