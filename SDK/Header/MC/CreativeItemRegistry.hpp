// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class CreativeItemRegistry {

#define AFTER_EXTRA
// Add Member There
public:
   static class CreativeItemRegistry* getCreativeItemRegistry() {
        auto regptr = (std::unique_ptr<CreativeItemRegistry>*)dlsym("?mCurrentRegistry@CreativeItemRegistry@@0V?$unique_ptr@VCreativeItemRegistry@@U?$default_delete@VCreativeItemRegistry@@@std@@@std@@A");
        return regptr->get();
    }
#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CREATIVEITEMREGISTRY
public:
    class CreativeItemRegistry& operator=(class CreativeItemRegistry const &) = delete;
    CreativeItemRegistry(class CreativeItemRegistry const &) = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CREATIVEITEMREGISTRY
public:
#endif
    MCAPI CreativeItemRegistry();
    MCAPI class CreativeItemEntry * findCreativeItemEntry(class TypedServerNetId<struct CreativeItemNetIdTag, unsigned int, 0> const &);
    MCAPI class CreativeItemEntry * findCreativeItemEntry(class ItemInstance const &);
    MCAPI class CreativeItemGroupCategory * getCreativeCategory(enum CreativeItemCategory);
    MCAPI class CreativeGroupInfo * getCreativeGroup(unsigned int);
    MCAPI std::vector<class CreativeItemEntry> const & getCreativeItemEntries();
    MCAPI class CreativeItemEntry * getItemEntry(unsigned int);
    MCAPI class CreativeItemGroupCategory * newCreativeCategory(std::string const &, enum CreativeItemCategory);
    MCAPI class CreativeGroupInfo * newCreativeGroup(enum CreativeItemCategory, class HashedString const &, class ItemInstance const &);
    MCAPI class CreativeItemEntry * newItemEntry(class TypedServerNetId<struct CreativeItemNetIdTag, unsigned int, 0> const &, class ItemInstance const &);
    MCAPI void resetGroups();
    MCAPI class CreativeItemEntry * updateItemEntry(unsigned int, class ItemInstance const &);
    MCAPI void updateNetIdMap();
    MCAPI static class CreativeItemRegistry * current();
    MCAPI static void forEachCreativeItemInstance(class std::function<bool (class ItemInstance &)>);
    MCAPI static class std::mutex mCreativeListMutex;
    MCAPI static void reset();
    MCAPI static void setCurrentRegistry(std::unique_ptr<class CreativeItemRegistry> &&);

//private:
    MCAPI void _forEachCreativeItemInstance(class std::function<bool (class ItemInstance &)>);

private:
    MCAPI static std::unique_ptr<class CreativeItemRegistry> mCurrentRegistry;


};