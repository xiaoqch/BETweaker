// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockActor.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class BeehiveBlockActor : public BlockActor {

#define AFTER_EXTRA
// Add Member There
public:
struct Occupant {
    Occupant() = delete;
    Occupant(Occupant const&) = delete;
    Occupant(Occupant const&&) = delete;
};

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEEHIVEBLOCKACTOR
public:
    class BeehiveBlockActor& operator=(class BeehiveBlockActor const &) = delete;
    BeehiveBlockActor(class BeehiveBlockActor const &) = delete;
    BeehiveBlockActor() = delete;
#endif


public:
    /*0*/ virtual ~BeehiveBlockActor();
    /*1*/ virtual void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /*2*/ virtual bool save(class CompoundTag &) const;
    /*7*/ virtual void tick(class BlockSource &);
    /*12*/ virtual void __unk_vfn_12();
    /*16*/ virtual void __unk_vfn_16();
    /*28*/ virtual void __unk_vfn_28();
    /*29*/ virtual void __unk_vfn_29();
    /*31*/ virtual void __unk_vfn_31();
    /*32*/ virtual void __unk_vfn_32();
    /*33*/ virtual void __unk_vfn_33();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BEEHIVEBLOCKACTOR
public:
#endif
    MCAPI BeehiveBlockActor(class BlockPos const &);
    MCAPI void disableBeeSpawn();
    MCAPI void evictAll(class BlockSource &, bool);
    MCAPI void saveUserData(class CompoundTag &) const;
    MCAPI bool tryAdmit(class Actor &);
    MCAPI static unsigned int const MAX_OCCUPANCY;
    MCAPI static enum BlockActorType const TypeId;
    MCAPI static std::string const TypeString;

//private:
    MCAPI class Actor * _revive(class BlockSource &, struct BeehiveBlockActor::Occupant const &, unsigned char);
    MCAPI bool _tickOccupant(class BlockSource &, struct BeehiveBlockActor::Occupant &);
    MCAPI void _trySpawnBees(class BlockSource &);
    MCAPI static bool _validSpawnDirection(class BlockSource &, class BlockPos const &, unsigned char);

private:


};