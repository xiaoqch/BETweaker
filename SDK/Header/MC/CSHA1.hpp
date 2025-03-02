// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class CSHA1 {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CSHA1
public:
    class CSHA1& operator=(class CSHA1 const &) = delete;
    CSHA1(class CSHA1 const &) = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CSHA1
public:
#endif
    MCAPI CSHA1();
    MCAPI void Final();
    MCAPI unsigned char * GetHash() const;
    MCAPI void Reset();
    MCAPI void Update(unsigned char const *, unsigned int);
    MCAPI ~CSHA1();

//private:
    MCAPI void Transform(unsigned int *, unsigned char const *);

private:


};