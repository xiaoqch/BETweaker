// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class IRandom {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IRANDOM
public:
    class IRandom& operator=(class IRandom const &) = delete;
    IRandom(class IRandom const &) = delete;
    IRandom() = delete;
#endif


public:
    /*0*/ virtual ~IRandom();
    /*1*/ virtual void __unk_vfn_1() = 0;
    /*2*/ virtual void __unk_vfn_2() = 0;
    /*3*/ virtual void __unk_vfn_3() = 0;
    /*4*/ virtual void __unk_vfn_4() = 0;
    /*5*/ virtual void __unk_vfn_5() = 0;
    /*6*/ virtual void __unk_vfn_6() = 0;
    /*7*/ virtual void __unk_vfn_7() = 0;
    /*8*/ virtual void __unk_vfn_8() = 0;
    /*9*/ virtual void __unk_vfn_9() = 0;
    /*10*/ virtual std::unique_ptr<class IPositionalRandomFactory> forkPositional();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_IRANDOM
public:
#endif


};