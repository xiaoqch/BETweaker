// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ClimateUtils.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class OverworldBiomeBuilder {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OVERWORLDBIOMEBUILDER
public:
    class OverworldBiomeBuilder& operator=(class OverworldBiomeBuilder const &) = delete;
    OverworldBiomeBuilder(class OverworldBiomeBuilder const &) = delete;
    OverworldBiomeBuilder() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_OVERWORLDBIOMEBUILDER
public:
#endif
    MCAPI OverworldBiomeBuilder(class BaseGameVersion const &);
    MCAPI void addBiomes(std::vector<struct BiomeNoiseTarget> &, class BiomeRegistry const &) const;
    MCAPI std::vector<struct ClimateParameters> getWorldSpawnParameters() const;

//private:
    MCAPI void _addHighSlice(std::vector<struct BiomeNoiseTarget> &, struct ClimateUtils::Parameter const &) const;
    MCAPI void _addInlandBiomes(std::vector<struct BiomeNoiseTarget> &) const;
    MCAPI void _addLowSlice(std::vector<struct BiomeNoiseTarget> &, struct ClimateUtils::Parameter const &) const;
    MCAPI void _addMidSlice(std::vector<struct BiomeNoiseTarget> &, struct ClimateUtils::Parameter const &) const;
    MCAPI void _addPeaks(std::vector<struct BiomeNoiseTarget> &, struct ClimateUtils::Parameter const &) const;
    MCAPI void _addSurfaceBiome(std::vector<struct BiomeNoiseTarget> &, struct ClimateUtils::Parameter const &, struct ClimateUtils::Parameter const &, struct ClimateUtils::Parameter const &, struct ClimateUtils::Parameter const &, struct ClimateUtils::Parameter const &, float, class Biome *) const;
    MCAPI void _addUndergroundBiome(std::vector<struct BiomeNoiseTarget> &, struct ClimateUtils::Parameter const &, struct ClimateUtils::Parameter const &, struct ClimateUtils::Parameter const &, struct ClimateUtils::Parameter const &, struct ClimateUtils::Parameter const &, float, class Biome *) const;
    MCAPI void _addValleys(std::vector<struct BiomeNoiseTarget> &, struct ClimateUtils::Parameter const &) const;

private:
    MCAPI static struct ClimateUtils::Parameter const EROSIONS[];
    MCAPI static struct ClimateUtils::Parameter const FULL_RANGE;
    MCAPI static struct ClimateUtils::Parameter const HUMIDITIES[];
    MCAPI static struct ClimateUtils::Parameter const TEMPERATURES[];
    MCAPI static struct ClimateUtils::Parameter const coastContinentalness;
    MCAPI static struct ClimateUtils::Parameter const deepOceanContinentalness;
    MCAPI static struct ClimateUtils::Parameter const dripstoneCavesContinentalness;
    MCAPI static struct ClimateUtils::Parameter const farInlandContinentalness;
    MCAPI static struct ClimateUtils::Parameter const inlandContinentalness;
    MCAPI static struct ClimateUtils::Parameter const lushCavesHumidity;
    MCAPI static struct ClimateUtils::Parameter const midInlandContinentalness;
    MCAPI static struct ClimateUtils::Parameter const mushroomFieldsContinentalness;
    MCAPI static struct ClimateUtils::Parameter const nearInlandContinentalness;
    MCAPI static struct ClimateUtils::Parameter const oceanContinentalness;


};