// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class JigsawPlacement {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_JIGSAWPLACEMENT
public:
    class JigsawPlacement& operator=(class JigsawPlacement const &) = delete;
    JigsawPlacement(class JigsawPlacement const &) = delete;
    JigsawPlacement() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_JIGSAWPLACEMENT
public:
#endif
    MCAPI JigsawPlacement(unsigned __int64, unsigned __int64, std::vector<std::unique_ptr<class StructurePiece>> &, class std::function<std::unique_ptr<class PoolElementStructurePiece> (class StructurePoolElement const &, class BlockPos const &, enum Rotation const &, int, struct JigsawJunction &, class BoundingBox const &, class BlockPos const &)>, class Random &, class JigsawStructureRegistry const &, class Dimension &);
    MCAPI void addPieces(class StructurePoolElement const &, class BlockPos const &, enum Rotation const &, class std::basic_string_view<char, struct std::char_traits<char>>);
    MCAPI ~JigsawPlacement();

//private:
    MCAPI void _addPiece(class PoolElementStructurePiece const &, class BlockPos const &, enum Rotation const &, class BlockPos const &, unsigned __int64);
    MCAPI class BlockPos _findLocalAnchorOffset(class StructurePoolElement const &, class BlockPos const &, enum Rotation const &, class std::basic_string_view<char, struct std::char_traits<char>>) const;
    MCAPI class std::shared_ptr<bool> _setTerrainAdjustment(enum AdjustmentEffect, class BoundingBox const &, struct JigsawJunction const &) const;
    MCAPI bool _tryPlacingPiece(class PoolElementStructurePiece const &, class BoundingBox const &, class JigsawBlockInfo const &, class BlockPos const &, class StructureTemplatePool const *, class BlockPos const &, unsigned __int64);

private:


};