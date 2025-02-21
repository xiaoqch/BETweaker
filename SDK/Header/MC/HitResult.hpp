// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

class StackResultStorageEntity;

enum class HitResultType:int {
    TILE=0,
    ENTITY,
    ENTITY_OUT_OF_RANGE,
    NO_HIT,
};

#undef BEFORE_EXTRA

class HitResult {

#define AFTER_EXTRA
// Add Member There

    //char filler[112];
    Vec3 startPos;       //0
    Vec3 rayDir;         //12
    HitResultType type;  //24
    FaceID face;         //28
    BlockPos endBpos;    //32
    Vec3 endPos;         //44
    uintptr_t actorRef; //56
    uintptr_t unk64;
    int unk72;
    int unk76;           //76
    bool hitLiquid;      //80
    FaceID liquidFace;   //81
    BlockPos liquidBpos; //84
    Vec3 liquidPos;      //96
    bool indirectHit;    //108
    //112

public:

    LIAPI FaceID getFacing();
    LIAPI Vec3 getPos();
    LIAPI bool isHitLiquid();
    LIAPI bool isEntity();
    LIAPI bool isTile();
	LIAPI BlockPos getBlockPos();
    LIAPI BlockPos getLiquidPos();
    LIAPI FaceID getLiquidFacing();
    //LIAPI Vec3 getLiquidHitPos();
    LIAPI HitResultType getHitResultType();

#undef AFTER_EXTRA


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_HITRESULT
public:
#endif
    MCAPI HitResult(class HitResult const &);
    MCAPI HitResult(class HitResult &&);
    MCAPI HitResult(class Vec3 const &, class Vec3 const &, class Vec3 const &);
    MCAPI HitResult(class Vec3 const &, class Vec3 const &, class Actor &, class Vec3 const &);
    MCAPI HitResult(class Vec3 const &, class Vec3 const &, class Actor &);
    MCAPI HitResult(class Vec3 const &, class Vec3 const &, class BlockPos const &, unsigned char, class Vec3 const &);
    MCAPI HitResult();
    MCAPI void __autoclassinit2(unsigned __int64);
    MCAPI float distanceTo(class Actor const &) const;
    MCAPI class Actor * getEntity() const;
    MCAPI bool isHit() const;
    MCAPI class HitResult & operator=(class HitResult &&);
    MCAPI class HitResult & operator=(class HitResult const &);
    MCAPI ~HitResult();


};