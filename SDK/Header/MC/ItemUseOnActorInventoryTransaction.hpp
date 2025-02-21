// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ItemUseOnActorInventoryTransaction {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMUSEONACTORINVENTORYTRANSACTION
public:
    class ItemUseOnActorInventoryTransaction& operator=(class ItemUseOnActorInventoryTransaction const &) = delete;
    ItemUseOnActorInventoryTransaction(class ItemUseOnActorInventoryTransaction const &) = delete;
    ItemUseOnActorInventoryTransaction() = delete;
#endif


public:
    /*0*/ virtual ~ItemUseOnActorInventoryTransaction();
    /*1*/ virtual void read(class ReadOnlyBinaryStream &);
    /*2*/ virtual void write(class BinaryStream &) const;
    /*3*/ virtual void postLoadItems(class BlockPalette &, bool);
    /*4*/ virtual enum InventoryTransactionError handle(class Player &, bool) const;
    /*5*/ virtual void onTransactionError(class Player &, enum InventoryTransactionError) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ITEMUSEONACTORINVENTORYTRANSACTION
public:
#endif
    MCAPI class ItemUseOnActorInventoryTransaction & setSelectedItem(class ItemStack const &);


};