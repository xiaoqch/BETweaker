// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ContainerScreenValidatorBase.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ElementConstructorContainerScreenValidator : public ContainerScreenValidatorBase {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ELEMENTCONSTRUCTORCONTAINERSCREENVALIDATOR
public:
    class ElementConstructorContainerScreenValidator& operator=(class ElementConstructorContainerScreenValidator const &) = delete;
    ElementConstructorContainerScreenValidator(class ElementConstructorContainerScreenValidator const &) = delete;
#endif


public:
    /*0*/ virtual ~ElementConstructorContainerScreenValidator();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ELEMENTCONSTRUCTORCONTAINERSCREENVALIDATOR
public:
#endif
    MCAPI ElementConstructorContainerScreenValidator();


};