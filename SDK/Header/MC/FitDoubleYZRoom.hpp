// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class FitDoubleYZRoom {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FITDOUBLEYZROOM
public:
    class FitDoubleYZRoom& operator=(class FitDoubleYZRoom const &) = delete;
    FitDoubleYZRoom(class FitDoubleYZRoom const &) = delete;
    FitDoubleYZRoom() = delete;
#endif


public:
    /*0*/ virtual ~FitDoubleYZRoom();
    /*1*/ virtual bool fits(class RoomDefinition const &) const;
    /*2*/ virtual std::unique_ptr<class OceanMonumentPiece> create(int &, class std::shared_ptr<class RoomDefinition>, class Random &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FITDOUBLEYZROOM
public:
#endif


};