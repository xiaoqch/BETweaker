// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class AABB {

#define AFTER_EXTRA
// Add Member There
#define DISABLE_CONSTRUCTOR_PREVENTION_AABB
public:
    Vec3 pointA{};
    Vec3 pointB{};

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AABB
public:
    class AABB& operator=(class AABB const &) = delete;
    AABB(class AABB const &) = delete;
    AABB() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_AABB
public:
#endif
    MCAPI AABB(class Vec3 const &, class Vec3 const &);
    MCAPI AABB(class Vec3 const &, float);
    MCAPI AABB(float, float, float, float, float, float);
    MCAPI class Vec3 axisInside(class AABB const &, class Vec3) const;
    MCAPI class HitResult clip(class Vec3 const &, class Vec3 const &) const;
    MCAPI class Vec3 clipCollide(class AABB const &, class Vec3 const &, bool, float *) const;
    MCAPI class AABB cloneAndExpandAlongDirection(class Vec3 const &) const;
    MCAPI class AABB cloneAndFloor(float, float) const;
    MCAPI class AABB cloneAndFloorMinAndCeilingMax() const;
    MCAPI class AABB cloneAndGrow(class Vec3 const &) const;
    MCAPI class AABB cloneAndShrink(class Vec3 const &) const;
    MCAPI class AABB cloneAndTransformByMatrix(class Matrix const &) const;
    MCAPI bool contains(class AABB const &) const;
    MCAPI bool contains(class Vec3 const &) const;
    MCAPI float distanceTo(class AABB const &) const;
    MCAPI float distanceTo(class Vec3 const &) const;
    MCAPI float distanceToSqr(class AABB const &) const;
    MCAPI class Vec3 getBounds() const;
    MCAPI class Vec3 getCenter() const;
    MCAPI float getSize() const;
    MCAPI float getVolume() const;
    MCAPI bool intersectSegment(class Vec3 const &, class Vec3 const &, class Vec3 &, class Vec3 &) const;
    MCAPI bool intersects(class AABB const &) const;
    MCAPI bool intersects(class Vec3 const &, class Vec3 const &) const;
    MCAPI bool intersectsInner(class AABB const &) const;
    MCAPI bool isValid() const;
    MCAPI bool operator!=(class AABB const &) const;
    MCAPI bool operator==(class AABB const &) const;
    MCAPI class AABB & set(float, float, float, float, float, float);
    MCAPI class AABB & set(class AABB const &);
    MCAPI class AABB & set(class Vec3 const &, class Vec3 const &);
    MCAPI class AABB & shrink(class Vec3 const &);
    MCAPI class AABB & translateCenterTo(class Vec3 const &);
    MCAPI static class AABB const BLOCK_SHAPE;
    MCAPI static class AABB const BOX_AT_ORIGIN_WITH_NO_VOLUME;


};