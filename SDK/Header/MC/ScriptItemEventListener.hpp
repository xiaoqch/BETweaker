// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ScriptItemEventListener {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTITEMEVENTLISTENER
public:
    class ScriptItemEventListener& operator=(class ScriptItemEventListener const &) = delete;
    ScriptItemEventListener(class ScriptItemEventListener const &) = delete;
    ScriptItemEventListener() = delete;
#endif


public:
    /*0*/ virtual ~ScriptItemEventListener();
    /*1*/ virtual void __unk_vfn_1();
    /*2*/ virtual void __unk_vfn_2();
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual void __unk_vfn_4();
    /*5*/ virtual void __unk_vfn_5();
    /*6*/ virtual void __unk_vfn_6();
    /*7*/ virtual void __unk_vfn_7();
    /*8*/ virtual void __unk_vfn_8();
    /*9*/ virtual void __unk_vfn_9();
    /*10*/ virtual void __unk_vfn_10();
    /*11*/ virtual void __unk_vfn_11();
    /*12*/ virtual void __unk_vfn_12();
    /*13*/ virtual void __unk_vfn_13();
    /*14*/ virtual void __unk_vfn_14();
    /*15*/ virtual void __unk_vfn_15();
    /*16*/ virtual enum EventResult onEvent(struct ItemDefinitionEventTriggeredEvent const &);
    /*17*/ virtual enum EventResult onEvent(struct ItemUseOnEvent const &);
    /*18*/ virtual enum EventResult onEvent(struct ItemUseEvent const &);
    /*19*/ virtual enum EventResult onEvent(struct ItemStartUseOnEvent const &);
    /*20*/ virtual enum EventResult onEvent(struct ItemStopUseOnEvent const &);
    /*21*/ virtual enum EventResult onEvent(struct ItemChargeEvent const &);
    /*22*/ virtual enum EventResult onEvent(struct ItemCompleteChargeEvent const &);
    /*23*/ virtual enum EventResult onEvent(struct ItemReleaseChargeEvent const &);
    /*24*/ virtual enum EventResult onEvent(struct ItemStopChargeEvent const &);
    /*25*/ virtual enum EventResult onEvent(struct ItemNotificationEvent const &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTITEMEVENTLISTENER
public:
#endif
    MCAPI ScriptItemEventListener(class Scripting::WeakLifetimeScope const &, struct Scripting::TypedObjectHandle<class ScriptWorldEvents>);


};