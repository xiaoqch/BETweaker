// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class WorldGenCache {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WORLDGENCACHE
public:
    class WorldGenCache& operator=(class WorldGenCache const &) = delete;
    WorldGenCache(class WorldGenCache const &) = delete;
    WorldGenCache() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_WORLDGENCACHE
public:
#endif
    MCAPI WorldGenCache(class ChunkLocalNoiseCache, class SurfaceLevelCache);
    MCAPI class ChunkLocalNoiseCache const & getChunkLocalNoiseCache() const;
    MCAPI class SurfaceLevelCache const & getSurfaceLevelCache() const;
    MCAPI ~WorldGenCache();


};