// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "FilterTest.hpp"
#include "Json.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ActorMissingHealthTest : public FilterTest {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORMISSINGHEALTHTEST
public:
    class ActorMissingHealthTest& operator=(class ActorMissingHealthTest const &) = delete;
    ActorMissingHealthTest(class ActorMissingHealthTest const &) = delete;
    ActorMissingHealthTest() = delete;
#endif


public:
    /*0*/ virtual ~ActorMissingHealthTest();
    /*2*/ virtual bool evaluate(struct FilterContext const &) const;
    /*4*/ virtual class gsl::basic_string_span<char const, -1> getName() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ACTORMISSINGHEALTHTEST
public:
#endif


};