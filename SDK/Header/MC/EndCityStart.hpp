// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "StructureStart.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class EndCityStart : public StructureStart {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENDCITYSTART
public:
    class EndCityStart& operator=(class EndCityStart const &) = delete;
    EndCityStart(class EndCityStart const &) = delete;
    EndCityStart() = delete;
#endif


public:
    /*0*/ virtual ~EndCityStart();
    /*2*/ virtual bool isValid() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ENDCITYSTART
public:
#endif
    MCAPI EndCityStart(class Dimension &, class Random &, class ChunkPos const &);
    MCAPI static int getYPositionForFeature(class ChunkPos const &, class Dimension &);


};