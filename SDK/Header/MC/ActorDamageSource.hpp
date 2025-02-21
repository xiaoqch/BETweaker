// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
class Actor;

#undef BEFORE_EXTRA

class ActorDamageSource {

#define AFTER_EXTRA
// Add Member There
public:
    LIAPI Actor* getEntity();

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORDAMAGESOURCE
public:
    class ActorDamageSource& operator=(class ActorDamageSource const &) = delete;
    ActorDamageSource(class ActorDamageSource const &) = delete;
    ActorDamageSource() = delete;
#endif


public:
    /*0*/ virtual ~ActorDamageSource();
    /*1*/ virtual bool isEntitySource() const;
    /*2*/ virtual bool isChildEntitySource() const;
    /*3*/ virtual bool isBlockSource() const;
    /*4*/ virtual bool isFire() const;
    /*5*/ virtual bool isReducedByArmorReduction() const;
    /*6*/ virtual bool isFallingBlockDamage() const;
    /*7*/ virtual bool isFallDamage() const;
    /*8*/ virtual struct std::pair<std::string, std::vector<std::string>> getDeathMessage(std::string, class Actor *) const;
    /*9*/ virtual bool getIsCreative() const;
    /*10*/ virtual bool getIsWorldBuilder() const;
    /*11*/ virtual struct ActorUniqueID getEntityUniqueID() const;
    /*12*/ virtual enum ActorType getEntityType() const;
    /*13*/ virtual enum ActorCategory getEntityCategories() const;
    /*14*/ virtual bool getDamagingEntityIsCreative() const;
    /*15*/ virtual bool getDamagingEntityIsWorldBuilder() const;
    /*16*/ virtual struct ActorUniqueID getDamagingEntityUniqueID() const;
    /*17*/ virtual enum ActorType getDamagingEntityType() const;
    /*18*/ virtual enum ActorCategory getDamagingEntityCategories() const;
    /*19*/ virtual std::unique_ptr<class ActorDamageSource> clone() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ACTORDAMAGESOURCE
public:
#endif
    MCAPI ActorDamageSource(enum ActorDamageCause);
    MCAPI enum ActorDamageCause getCause() const;
    MCAPI void setCause(enum ActorDamageCause);
    MCAPI static std::vector<struct std::pair<std::string, enum ActorDamageCause>> generateDamageCauseCommandEnum();
    MCAPI static bool isDamageCausedByMob(enum ActorDamageCause);
    MCAPI static enum ActorDamageCause lookupCause(std::string const &);
    MCAPI static std::string const & lookupCauseName(enum ActorDamageCause);


};