// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "OceanMonumentPiece.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class OceanMonumentSimpleTopRoom : public OceanMonumentPiece {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OCEANMONUMENTSIMPLETOPROOM
public:
    class OceanMonumentSimpleTopRoom& operator=(class OceanMonumentSimpleTopRoom const &) = delete;
    OceanMonumentSimpleTopRoom(class OceanMonumentSimpleTopRoom const &) = delete;
    OceanMonumentSimpleTopRoom() = delete;
#endif


public:
    /*0*/ virtual ~OceanMonumentSimpleTopRoom();
    /*2*/ virtual enum StructurePieceType getType() const;
    /*4*/ virtual bool postProcess(class BlockSource &, class Random &, class BoundingBox const &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_OCEANMONUMENTSIMPLETOPROOM
public:
#endif


};