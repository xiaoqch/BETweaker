// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ItemUseMethodMap {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMUSEMETHODMAP
public:
    class ItemUseMethodMap& operator=(class ItemUseMethodMap const &) = delete;
    ItemUseMethodMap(class ItemUseMethodMap const &) = delete;
    ItemUseMethodMap() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ITEMUSEMETHODMAP
public:
#endif
    MCAPI static std::string const & getItemUseMethodName(enum ItemUseMethod);

//private:

private:
    MCAPI static class BidirectionalUnorderedMap<enum ItemUseMethod, std::string> const mMap;


};