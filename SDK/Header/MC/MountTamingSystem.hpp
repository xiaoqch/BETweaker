// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class MountTamingSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOUNTTAMINGSYSTEM
public:
    class MountTamingSystem& operator=(class MountTamingSystem const &) = delete;
    MountTamingSystem(class MountTamingSystem const &) = delete;
    MountTamingSystem() = delete;
#endif


public:
    /*0*/ virtual ~MountTamingSystem();
    /*1*/ virtual void __unk_vfn_1();
    /*2*/ virtual void tick(class EntityRegistry &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MOUNTTAMINGSYSTEM
public:
#endif


};