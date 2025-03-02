// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "Item.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class DiggerItem : public Item {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DIGGERITEM
public:
    class DiggerItem& operator=(class DiggerItem const &) = delete;
    DiggerItem(class DiggerItem const &) = delete;
    DiggerItem() = delete;
#endif


public:
    /*0*/ virtual ~DiggerItem();
    /*7*/ virtual void __unk_vfn_7();
    /*10*/ virtual void __unk_vfn_10();
    /*13*/ virtual void __unk_vfn_13();
    /*15*/ virtual void __unk_vfn_15();
    /*48*/ virtual int getAttackDamage() const;
    /*49*/ virtual bool isHandEquipped() const;
    /*51*/ virtual void __unk_vfn_51();
    /*53*/ virtual void __unk_vfn_53();
    /*60*/ virtual void appendFormattedHovertext(class ItemStackBase const &, class Level &, std::string &, bool) const;
    /*61*/ virtual bool isValidRepairItem(class ItemStackBase const &, class ItemStackBase const &, class BaseGameVersion const &) const;
    /*63*/ virtual int getEnchantValue() const;
    /*66*/ virtual void __unk_vfn_66();
    /*70*/ virtual void __unk_vfn_70();
    /*71*/ virtual void __unk_vfn_71();
    /*72*/ virtual void __unk_vfn_72();
    /*75*/ virtual void __unk_vfn_75();
    /*79*/ virtual void __unk_vfn_79();
    /*80*/ virtual void __unk_vfn_80();
    /*88*/ virtual float getDestroySpeed(class ItemStackBase const &, class Block const &) const;
    /*93*/ virtual bool mineBlock(class ItemStack &, class Block const &, int, int, int, class Actor *) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DIGGERITEM
public:
#endif
    MCAPI void setBlocks(std::vector<class Block const *> const &);

//protected:
    MCAPI DiggerItem(std::string const &, int, int, class Item::Tier const &, std::vector<class Block const *> const &);

protected:


};