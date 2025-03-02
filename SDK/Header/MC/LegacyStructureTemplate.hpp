// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class LegacyStructureTemplate {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEGACYSTRUCTURETEMPLATE
public:
    class LegacyStructureTemplate& operator=(class LegacyStructureTemplate const &) = delete;
    LegacyStructureTemplate(class LegacyStructureTemplate const &) = delete;
#endif


public:
    /*0*/ virtual class std::unordered_map<class BlockPos, std::string, struct std::hash<class BlockPos>, struct std::equal_to<class BlockPos>, class std::allocator<struct std::pair<class BlockPos const, std::string>>> getMarkers(class BlockPos const &, class LegacyStructureSettings &) const;
    /*1*/ virtual void placeInWorld(class BlockSource &, class BlockPos const &, class LegacyStructureSettings &, class Random &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LEGACYSTRUCTURETEMPLATE
public:
#endif
    MCAPI LegacyStructureTemplate();
    MCAPI class BlockPos calculateConnectedPosition(class LegacyStructureSettings const &, class BlockPos const &, class LegacyStructureSettings const &, class BlockPos const &) const;
    MCAPI std::vector<class JigsawStructureBlockInfo> getJigsawMarkers() const;
    MCAPI class BlockPos getSize(enum Rotation) const;
    MCAPI void load(class CompoundTag const &);
    MCAPI void placeInWorldChunk(class BlockSource &, class BlockPos const &, class LegacyStructureSettings &, class Random &);
    MCAPI static std::string const AUTHOR_TAG;
    MCAPI static std::string const BLOCKS_TAG;
    MCAPI static std::string const BLOCK_TAG_NBT;
    MCAPI static std::string const BLOCK_TAG_POS;
    MCAPI static std::string const BLOCK_TAG_STATE;
    MCAPI static int const CHUNK_SIZE;
    MCAPI static std::string const ENTITIES_TAG;
    MCAPI static std::string const ENTITY_TAG_BLOCKPOS;
    MCAPI static std::string const ENTITY_TAG_NBT;
    MCAPI static std::string const ENTITY_TAG_POS;
    MCAPI static std::string const MINECRAFT_PREFIX;
    MCAPI static std::string const PALETTE_TAG;
    MCAPI static std::string const SIZE_TAG;
    MCAPI static int const STRUCTURE_VERSION;
    MCAPI static std::string const VERSION_TAG;
    MCAPI static class Block const * _mapPropertyToExtraBlock(std::string const &, std::string const &);
    MCAPI static class Block const * _mapToBlock(std::string const &);
    MCAPI static class Block const & _mapToData(class Block const &, class LegacyStructureSettings const &);
    MCAPI static class Block const * _mapToProperty(std::string const &, std::string const &, class Block const &);
    MCAPI static class LegacyStructureSettings const defaultSettings;
    MCAPI static class BlockPos getZeroPositionWithTransform(class BlockPos const &, enum Mirror, enum Rotation, int, int);
    MCAPI static class BlockPos transform(class BlockPos, enum Mirror, enum Rotation);

//private:
    MCAPI std::unique_ptr<class CompoundTag> _mapTag(std::unique_ptr<class CompoundTag>, std::string const &);

private:


};