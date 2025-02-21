// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ProjectileItemComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PROJECTILEITEMCOMPONENT
public:
    class ProjectileItemComponent& operator=(class ProjectileItemComponent const &) = delete;
    ProjectileItemComponent(class ProjectileItemComponent const &) = delete;
    ProjectileItemComponent() = delete;
#endif


public:
    /*0*/ virtual ~ProjectileItemComponent();
    /*1*/ virtual bool isNetworkComponent() const;
    /*2*/ virtual void __unk_vfn_2();
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual void __unk_vfn_4();
    /*5*/ virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /*6*/ virtual bool initializeFromNetwork(class CompoundTag const &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PROJECTILEITEMCOMPONENT
public:
#endif
    MCAPI ProjectileItemComponent(class ComponentItem *);
    MCAPI bool dispense(class BlockSource &, class Container &, int, class Vec3 const &, unsigned char) const;
    MCAPI class Vec3 getShootDir(class Player const &, float) const;
    MCAPI class Actor * shootProjectile(class BlockSource &, class Vec3 const &, class Vec3 const &, float, class Player *) const;
    MCAPI static void bindType();
    MCAPI static class HashedString const & getIdentifier();


};