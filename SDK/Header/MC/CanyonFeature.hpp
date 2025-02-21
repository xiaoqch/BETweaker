// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "CanyonFeatureUtils.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class CanyonFeature {

#define AFTER_EXTRA
// Add Member There
public:
struct CanyonConfiguration;

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CANYONFEATURE
public:
    class CanyonFeature& operator=(class CanyonFeature const &) = delete;
    CanyonFeature(class CanyonFeature const &) = delete;
    CanyonFeature() = delete;
#endif


public:
    /*0*/ virtual ~CanyonFeature();
    /*1*/ virtual bool carve(class BlockVolume &, class BiomeSource const &, class Random &, class ChunkPos const &, class Vec3 const &, class Vec3 const &, int, int, int, int, int, int, float, float, class gsl::span<float const, -1>, struct WorldGenContext const &) const;
    /*2*/ virtual void addFeature(class BlockVolume &, class BiomeSource const &, struct CanyonFeatureUtils::CanyonConfiguration const &, class ChunkPos const &, class Random &, int, int, struct WorldGenContext const &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CANYONFEATURE
public:
#endif
    MCAPI CanyonFeature(short);
    MCAPI void apply(class BlockVolume &, class ChunkPos const &, class BiomeSource const &, struct CanyonFeatureUtils::CanyonConfiguration const &, class Random &, unsigned int, struct WorldGenContext const &);
    MCAPI static bool isDiggable(class Block const &, class Block const &);

//protected:
    MCAPI void addTunnel(class BlockVolume &, class BiomeSource const &, class Random &, class ChunkPos const &, class Vec3 const &, class Vec3 const &, float, float, float, int, int, float, struct WorldGenContext const &) const;

protected:


};