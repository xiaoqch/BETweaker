// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ChunkBuildOrderPolicy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHUNKBUILDORDERPOLICY
public:
    class ChunkBuildOrderPolicy& operator=(class ChunkBuildOrderPolicy const &) = delete;
    ChunkBuildOrderPolicy(class ChunkBuildOrderPolicy const &) = delete;
#endif


public:
    /*0*/ virtual ~ChunkBuildOrderPolicy();
    /*1*/ virtual int getChunkRebuildPriority(class ChunkPos const &) const;
    /*2*/ virtual unsigned int registerForUpdates();
    /*3*/ virtual void unregisterForUpdates(unsigned int);
    /*4*/ virtual void setPlayerInfluence(unsigned int, class ChunkPos const &, class Vec3 const &);
    /*5*/ virtual void setTickingAreaInfluence(unsigned int, class ChunkPos const &, int, int, bool, bool);
    /*6*/ virtual void updateInfluences();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CHUNKBUILDORDERPOLICY
public:
#endif
    MCAPI ChunkBuildOrderPolicy();


};