// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "StructureFeature.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class StrongholdFeature : public StructureFeature {

#define AFTER_EXTRA
// Add Member There
public:
struct StrongholdResult {
    StrongholdResult() = delete;
    StrongholdResult(StrongholdResult const&) = delete;
    StrongholdResult(StrongholdResult const&&) = delete;
};

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRONGHOLDFEATURE
public:
    class StrongholdFeature& operator=(class StrongholdFeature const &) = delete;
    StrongholdFeature(class StrongholdFeature const &) = delete;
    StrongholdFeature() = delete;
#endif


public:
    /*0*/ virtual ~StrongholdFeature();
    /*3*/ virtual bool getNearestGeneratedFeature(class Dimension &, class BiomeSource const &, class BlockPos const &, class BlockPos &, class IPreliminarySurfaceProvider const &, bool);
    /*5*/ virtual bool isFeatureChunk(class BiomeSource const &, class Random &, class ChunkPos const &, unsigned int, class IPreliminarySurfaceProvider const &, class Dimension const &);
    /*6*/ virtual std::unique_ptr<class StructureStart> createStructureStart(class Dimension &, class BiomeSource const &, class Random &, class ChunkPos const &, class IPreliminarySurfaceProvider const &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_STRONGHOLDFEATURE
public:
#endif
    MCAPI StrongholdFeature(class VillageFeature *, unsigned int);
    MCAPI static class BlockPos const START_OFFSET;

//protected:
    MCAPI void generatePositions(class Random &, class BiomeSource const &, unsigned int, class IPreliminarySurfaceProvider const &, class Dimension const &);

//private:
    MCAPI struct StrongholdFeature::StrongholdResult const _generateStronghold(unsigned int, class ChunkPos const &);
    MCAPI bool _getNearestStronghold(class Dimension const &, unsigned int, class BlockPos const &, class BlockPos &, bool);

protected:

private:


};