// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class SurfaceLevelCache {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SURFACELEVELCACHE
public:
    class SurfaceLevelCache& operator=(class SurfaceLevelCache const &) = delete;
    SurfaceLevelCache(class SurfaceLevelCache const &) = delete;
    SurfaceLevelCache() = delete;
#endif


public:
    /*0*/ virtual ~SurfaceLevelCache();
    /*1*/ virtual class std::optional<short> getPreliminarySurfaceLevel(class DividedPos2d<4>) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SURFACELEVELCACHE
public:
#endif
    MCAPI SurfaceLevelCache(class DividedPos2d<4>, class IPreliminarySurfaceProvider const &, unsigned __int64);


};