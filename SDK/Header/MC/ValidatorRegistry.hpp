// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ValidatorRegistry {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VALIDATORREGISTRY
public:
    class ValidatorRegistry& operator=(class ValidatorRegistry const &) = delete;
    ValidatorRegistry(class ValidatorRegistry const &) = delete;
    ValidatorRegistry() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_VALIDATORREGISTRY
public:
#endif
    MCAPI static void registerValidators(class gsl::basic_string_span<char const, -1>, class std::function<class ContentTierIncompatibleReason (class PackInstance const &, class ContentTierInfo const &)>, class std::function<class ContentTierIncompatibleReason (struct SubpackInfo const &, class ContentTierInfo const &)>);

//private:
    MCAPI static class ServiceReference<class ValidatorRegistry> _get();

private:


};