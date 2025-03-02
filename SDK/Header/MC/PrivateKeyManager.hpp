// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Crypto.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class PrivateKeyManager {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PRIVATEKEYMANAGER
public:
    class PrivateKeyManager& operator=(class PrivateKeyManager const &) = delete;
    PrivateKeyManager(class PrivateKeyManager const &) = delete;
    PrivateKeyManager() = delete;
#endif


public:
    /*0*/ virtual ~PrivateKeyManager();
    /*1*/ virtual bool isValid() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PRIVATEKEYMANAGER
public:
#endif
    MCAPI PrivateKeyManager(enum Crypto::Asymmetric::System);
    MCAPI std::string computeSecret(class KeyManager const &) const;
    MCAPI std::string sign(std::string const &, enum Crypto::Hash::HashType) const;


};