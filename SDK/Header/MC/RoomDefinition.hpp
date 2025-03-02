// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class RoomDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ROOMDEFINITION
public:
    class RoomDefinition& operator=(class RoomDefinition const &) = delete;
    RoomDefinition() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ROOMDEFINITION
public:
#endif
    MCAPI RoomDefinition(class RoomDefinition const &);
    MCAPI RoomDefinition(int);
    MCAPI bool findSource(int);
    MCAPI void setConnection(unsigned char const &, class std::shared_ptr<class RoomDefinition>);
    MCAPI void updateOpenings();
    MCAPI ~RoomDefinition();


};