// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ContainerValidationBase.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class Trade1Ingredient2ContainerValidation : public ContainerValidationBase {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRADE1INGREDIENT2CONTAINERVALIDATION
public:
    class Trade1Ingredient2ContainerValidation& operator=(class Trade1Ingredient2ContainerValidation const &) = delete;
    Trade1Ingredient2ContainerValidation(class Trade1Ingredient2ContainerValidation const &) = delete;
    Trade1Ingredient2ContainerValidation() = delete;
#endif


public:
    /*0*/ virtual ~Trade1Ingredient2ContainerValidation();
    /*1*/ virtual bool isValidSlotForContainer(class ContainerScreenContext const &, class Container const &, int) const;
    /*2*/ virtual bool isItemAllowedInSlot(class ContainerScreenContext const &, int, class ItemStackBase const &, int) const;
    /*3*/ virtual int getAvailableSetCount(int, class ItemStackBase const &) const;
    /*4*/ virtual void __unk_vfn_4();
    /*5*/ virtual void __unk_vfn_5();
    /*6*/ virtual bool canItemMoveToContainer(class ItemStackBase const &) const;
    /*7*/ virtual bool canDestroy(class ContainerScreenContext const &) const;
    /*8*/ virtual int getContainerOffset(class ContainerScreenContext const &) const;
    /*9*/ virtual int getContainerSize(class ContainerScreenContext const &, class Container const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TRADE1INGREDIENT2CONTAINERVALIDATION
public:
#endif
    MCAPI Trade1Ingredient2ContainerValidation(bool);


};