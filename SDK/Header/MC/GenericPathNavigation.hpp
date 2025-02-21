// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "PathNavigation.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class GenericPathNavigation : public PathNavigation {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GENERICPATHNAVIGATION
public:
    class GenericPathNavigation& operator=(class GenericPathNavigation const &) = delete;
    GenericPathNavigation(class GenericPathNavigation const &) = delete;
    GenericPathNavigation() = delete;
#endif


public:
    /*0*/ virtual ~GenericPathNavigation();
    /*1*/ virtual void initializeInternal(class Mob &, struct NavigationDescription *);
    /*2*/ virtual void tick(class NavigationComponent &, class Mob &);
    /*3*/ virtual class Vec3 getTempMobPos(class Mob const &) const;
    /*9*/ virtual void stop(class NavigationComponent &, class Mob &);
    /*12*/ virtual void updatePath(class NavigationComponent &, class Mob &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_GENERICPATHNAVIGATION
public:
#endif


};