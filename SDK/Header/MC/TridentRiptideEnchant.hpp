// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Enchant.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class TridentRiptideEnchant {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRIDENTRIPTIDEENCHANT
public:
    class TridentRiptideEnchant& operator=(class TridentRiptideEnchant const &) = delete;
    TridentRiptideEnchant(class TridentRiptideEnchant const &) = delete;
    TridentRiptideEnchant() = delete;
#endif


public:
    /*0*/ virtual ~TridentRiptideEnchant();
    /*1*/ virtual bool isCompatibleWith(enum Enchant::Type) const;
    /*2*/ virtual int getMinCost(int) const;
    /*3*/ virtual int getMaxCost(int) const;
    /*4*/ virtual void __unk_vfn_4();
    /*5*/ virtual int getMaxLevel() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TRIDENTRIPTIDEENCHANT
public:
#endif
    MCAPI TridentRiptideEnchant(enum Enchant::Type, enum Enchant::Frequency, class gsl::basic_string_span<char const, -1>, class gsl::basic_string_span<char const, -1>, int, bool, int);


};