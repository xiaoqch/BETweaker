// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class DurabilityItemComponent {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DURABILITYITEMCOMPONENT
public:
    class DurabilityItemComponent& operator=(class DurabilityItemComponent const &) = delete;
    DurabilityItemComponent(class DurabilityItemComponent const &) = delete;
    DurabilityItemComponent() = delete;
#endif


public:
    /*0*/ virtual ~DurabilityItemComponent();
    /*1*/ virtual bool isNetworkComponent() const;
    /*2*/ virtual void __unk_vfn_2();
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual void __unk_vfn_4();
    /*5*/ virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /*6*/ virtual bool initializeFromNetwork(class CompoundTag const &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DURABILITYITEMCOMPONENT
public:
#endif
    MCAPI DurabilityItemComponent(class ComponentItem *);
    MCAPI int getDamageChance(int) const;
    MCAPI struct IntRange getDamageChanceRange() const;
    MCAPI int getMaxDamage() const;
    MCAPI void setMaxDamage(int);
    MCAPI static void bindType();
    MCAPI static class HashedString const & getIdentifier();


};