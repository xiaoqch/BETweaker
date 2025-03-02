// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "CaveFeatureUtils.hpp"
#include "CaveFeature.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class UnderwaterCaveFeature : public CaveFeature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_UNDERWATERCAVEFEATURE
public:
    class UnderwaterCaveFeature& operator=(class UnderwaterCaveFeature const &) = delete;
    UnderwaterCaveFeature(class UnderwaterCaveFeature const &) = delete;
#endif


public:
    /*0*/ virtual ~UnderwaterCaveFeature();
    /*5*/ virtual bool carveEllipsoidVolume(class IBlockWorldGenAPI &, struct CaveFeatureUtils::CarverConfiguration const &, class Random &, class ChunkPos const &, class Vec3 const &, class BoundingBox const &, float, float, struct CaveFeatureUtils::CarvingParameters const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_UNDERWATERCAVEFEATURE
public:
#endif
    MCAPI UnderwaterCaveFeature();


};