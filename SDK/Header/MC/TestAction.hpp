// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "IRequestAction.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class TestAction : public IRequestAction {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TESTACTION
public:
    class TestAction& operator=(class TestAction const &) = delete;
    TestAction(class TestAction const &) = delete;
#endif


public:
    /*0*/ virtual ~TestAction();
    /*1*/ virtual void execute(class ServerLevel &, class Dimension &);
    /*3*/ virtual bool operator==(class IRequestAction &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TESTACTION
public:
#endif
    MCAPI TestAction();


};