// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class MoveInput {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVEINPUT
public:
    class MoveInput& operator=(class MoveInput const &) = delete;
    MoveInput(class MoveInput const &) = delete;
    MoveInput() = delete;
#endif


public:
    /*0*/ virtual ~MoveInput();
    /*1*/ virtual void tick(struct IPlayerMovementProxy &);
    /*2*/ virtual void __unk_vfn_2();
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual void clearInputState();
    /*5*/ virtual void __unk_vfn_5();
    /*6*/ virtual bool allowPicking(float, float);
    /*7*/ virtual void setJumping(bool);
    /*8*/ virtual void setAutoJumpingInWater(bool);
    /*9*/ virtual bool isChangeHeight() const;
    /*10*/ virtual void setSneakDown(bool);
    /*11*/ virtual bool isPlayerMoving() const;
    /*12*/ virtual class Vec3 const & getGazeDirection() const;
    /*13*/ virtual struct MoveInputComponent extractInputComponent() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MOVEINPUT
public:
    MCVAPI void clearMovementState();
    MCVAPI void render(float);
    MCVAPI void setKey(int, bool);
#endif


};