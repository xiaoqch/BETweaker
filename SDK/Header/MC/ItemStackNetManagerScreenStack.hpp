// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ItemStackNetManagerScreenStack {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMSTACKNETMANAGERSCREENSTACK
public:
    class ItemStackNetManagerScreenStack& operator=(class ItemStackNetManagerScreenStack const &) = delete;
    ItemStackNetManagerScreenStack(class ItemStackNetManagerScreenStack const &) = delete;
    ItemStackNetManagerScreenStack() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ITEMSTACKNETMANAGERSCREENSTACK
public:
#endif
    MCAPI void foreachScreen(class std::function<bool (class ItemStackNetManagerScreen &)>);
    MCAPI class ItemStackNetManagerScreen * getScreenForRequest(class ItemStackRequestData const &);
    MCAPI bool pop();
    MCAPI class ItemStackNetManagerScreen * push(std::unique_ptr<class ItemStackNetManagerScreen>);
    MCAPI unsigned __int64 size() const;
    MCAPI class ItemStackNetManagerScreen const * top() const;
    MCAPI class ItemStackNetManagerScreen * top();
    MCAPI ~ItemStackNetManagerScreenStack();


};