// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "Item.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class EmptyMapItem : public Item {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EMPTYMAPITEM
public:
    class EmptyMapItem& operator=(class EmptyMapItem const &) = delete;
    EmptyMapItem(class EmptyMapItem const &) = delete;
    EmptyMapItem() = delete;
#endif


public:
    /*0*/ virtual ~EmptyMapItem();
    /*7*/ virtual void __unk_vfn_7();
    /*10*/ virtual void __unk_vfn_10();
    /*13*/ virtual void __unk_vfn_13();
    /*15*/ virtual void __unk_vfn_15();
    /*51*/ virtual void __unk_vfn_51();
    /*53*/ virtual void __unk_vfn_53();
    /*59*/ virtual bool requiresInteract() const;
    /*66*/ virtual void __unk_vfn_66();
    /*70*/ virtual void __unk_vfn_70();
    /*71*/ virtual void __unk_vfn_71();
    /*72*/ virtual void __unk_vfn_72();
    /*75*/ virtual void __unk_vfn_75();
    /*79*/ virtual void __unk_vfn_79();
    /*80*/ virtual void __unk_vfn_80();
    /*84*/ virtual class ItemStack & use(class ItemStack &, class Player &) const;
    /*95*/ virtual std::string buildDescriptionId(class ItemDescriptor const &, class CompoundTag const *) const;
    /*115*/ virtual std::string getInteractText(class Player const &) const;
    /*133*/ virtual std::unique_ptr<class Packet> getUpdatePacket(class ItemStack const &, class Level &, class Actor &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_EMPTYMAPITEM
public:
#endif
    MCAPI EmptyMapItem(std::string const &, short);
    MCAPI static void addPlayerMarker(class ItemStack &);
    MCAPI static void addPlayerMarker(class ItemInstance &);
    MCAPI static bool isLocatorMap(class ItemStack const &);


};