// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class EmptyLootItem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EMPTYLOOTITEM
public:
    class EmptyLootItem& operator=(class EmptyLootItem const &) = delete;
    EmptyLootItem(class EmptyLootItem const &) = delete;
    EmptyLootItem() = delete;
#endif


public:
    /*0*/ virtual bool _createItem(std::vector<class ItemStack> &, class Random &, class LootTableContext &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_EMPTYLOOTITEM
public:
#endif


};