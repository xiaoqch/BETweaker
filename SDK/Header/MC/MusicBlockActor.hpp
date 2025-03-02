// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockActor.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class MusicBlockActor : public BlockActor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MUSICBLOCKACTOR
public:
    class MusicBlockActor& operator=(class MusicBlockActor const &) = delete;
    MusicBlockActor(class MusicBlockActor const &) = delete;
    MusicBlockActor() = delete;
#endif


public:
    /*0*/ virtual ~MusicBlockActor();
    /*1*/ virtual void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /*2*/ virtual bool save(class CompoundTag &) const;
    /*12*/ virtual void __unk_vfn_12();
    /*16*/ virtual void __unk_vfn_16();
    /*28*/ virtual void __unk_vfn_28();
    /*29*/ virtual void __unk_vfn_29();
    /*31*/ virtual void __unk_vfn_31();
    /*32*/ virtual void __unk_vfn_32();
    /*33*/ virtual void __unk_vfn_33();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MUSICBLOCKACTOR
public:
#endif
    MCAPI MusicBlockActor(class BlockPos const &);
    MCAPI void playNote(class BlockSource &, class BlockPos const &);
    MCAPI void tune();


};