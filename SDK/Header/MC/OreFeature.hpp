// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class OreFeature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OREFEATURE
public:
    class OreFeature& operator=(class OreFeature const &) = delete;
    OreFeature(class OreFeature const &) = delete;
#endif


public:
    /*0*/ virtual ~OreFeature();
    /*1*/ virtual class std::optional<class BlockPos> place(class IBlockWorldGenAPI &, class BlockPos const &, class Random &, class RenderParams &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_OREFEATURE
public:
#endif
    MCAPI OreFeature(int, std::vector<struct ReplaceRule> &&);
    MCAPI OreFeature();


};