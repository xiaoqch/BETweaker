// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class InventoryTransactionManager {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INVENTORYTRANSACTIONMANAGER
public:
    class InventoryTransactionManager& operator=(class InventoryTransactionManager const &) = delete;
    InventoryTransactionManager(class InventoryTransactionManager const &) = delete;
    InventoryTransactionManager() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_INVENTORYTRANSACTIONMANAGER
public:
#endif
    MCAPI void _createServerSideAction(class ItemStack const &, class ItemStack const &);
    MCAPI void _logExpectedActions() const;
    MCAPI void addAction(class InventoryAction const &, bool);
    MCAPI void addExpectedAction(class InventoryAction const &);
    MCAPI bool checkActionExpected(class InventoryAction const &);
    MCAPI void forceBalanceTransaction();
    MCAPI void resetExpectedActions();
    MCAPI ~InventoryTransactionManager();


};