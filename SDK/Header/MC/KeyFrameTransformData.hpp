// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class KeyFrameTransformData {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_KEYFRAMETRANSFORMDATA
public:
    class KeyFrameTransformData& operator=(class KeyFrameTransformData const &) = delete;
    KeyFrameTransformData() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_KEYFRAMETRANSFORMDATA
public:
#endif
    MCAPI KeyFrameTransformData(class KeyFrameTransformData const &);
    MCAPI void addChannelTransform(class ExpressionNode const &, int);
    MCAPI bool operator==(class KeyFrameTransformData const &) const;


};