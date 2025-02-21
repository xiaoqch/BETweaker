// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class JigsawStructureElementRegistry {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_JIGSAWSTRUCTUREELEMENTREGISTRY
public:
    class JigsawStructureElementRegistry& operator=(class JigsawStructureElementRegistry const &) = delete;
    JigsawStructureElementRegistry(class JigsawStructureElementRegistry const &) = delete;
    JigsawStructureElementRegistry() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_JIGSAWSTRUCTUREELEMENTREGISTRY
public:
#endif
    MCAPI void clear();
    MCAPI class StructurePoolElement const * lookupByName(std::string) const;
    MCAPI void registerStructureElement(std::string, std::unique_ptr<class StructurePoolElement> &&);
    MCAPI ~JigsawStructureElementRegistry();


};