// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class Attribute {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ATTRIBUTE
public:
    class Attribute& operator=(class Attribute const &) = delete;
    Attribute(class Attribute const &) = delete;
    Attribute() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ATTRIBUTE
public:
#endif
    MCAPI Attribute(class HashedString const &, enum RedefinitionMode, bool);
    MCAPI unsigned int const getIDValue() const;
    MCAPI class HashedString const & getName() const;
    MCAPI enum RedefinitionMode getRedefinitionMode() const;
    MCAPI bool isClientSyncable() const;
    MCAPI bool operator==(class Attribute const &) const;
    MCAPI static class Attribute & getByName(class HashedString const &);


};