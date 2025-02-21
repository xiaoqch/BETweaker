// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ContainerModel.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class HudContainerModel : public ContainerModel {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HUDCONTAINERMODEL
public:
    class HudContainerModel& operator=(class HudContainerModel const &) = delete;
    HudContainerModel(class HudContainerModel const &) = delete;
    HudContainerModel() = delete;
#endif


public:
    /*0*/ virtual void containerContentChanged(int);
    /*1*/ virtual ~HudContainerModel();
    /*6*/ virtual void __unk_vfn_6();
    /*7*/ virtual class ContainerWeakRef getContainerWeakRef() const;
    /*12*/ virtual void __unk_vfn_12();
    /*14*/ virtual bool isValid();
    /*15*/ virtual void __unk_vfn_15();
    /*16*/ virtual void __unk_vfn_16();
    /*19*/ virtual void __unk_vfn_19();
    /*20*/ virtual class Container * _getContainer() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_HUDCONTAINERMODEL
public:
#endif
    MCAPI HudContainerModel(enum ContainerEnumName, class Player &);

//private:
    MCAPI void _refreshContainer();

private:


};