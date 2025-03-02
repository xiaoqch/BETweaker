// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class AttributeInstance {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ATTRIBUTEINSTANCE
public:
    class AttributeInstance& operator=(class AttributeInstance const &) = delete;
#endif


public:
    /*0*/ virtual ~AttributeInstance();
    /*1*/ virtual void tick();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ATTRIBUTEINSTANCE
public:
#endif
    MCAPI AttributeInstance(class AttributeInstance const &);
    MCAPI AttributeInstance();
    MCAPI void addBuff(class AttributeBuff const &);
    MCAPI void addModifier(class AttributeModifier const &);
    MCAPI void addModifier(class std::shared_ptr<class AttributeModifier>);
    MCAPI class Attribute const * getAttribute() const;
    MCAPI std::vector<class TemporalAttributeBuff> const & getBuffs() const;
    MCAPI float getCurrentValue() const;
    MCAPI float getDefaultValue(int) const;
    MCAPI class AttributeInstanceHandle getHandle() const;
    MCAPI std::vector<class AttributeInstanceHandle> const & getListeners() const;
    MCAPI float getMaxValue() const;
    MCAPI float getMinValue() const;
    MCAPI class AttributeModifier getModifier(class mce::UUID const &) const;
    MCAPI std::vector<class AttributeModifier> getModifiers() const;
    MCAPI bool hasModifier(class mce::UUID const &) const;
    MCAPI bool hasModifier(class std::shared_ptr<class AttributeModifier>) const;
    MCAPI bool hasModifiers() const;
    MCAPI bool hasTemporalBuffs() const;
    MCAPI void inheritFrom(class AttributeInstance const &, class BaseAttributeMap *);
    MCAPI bool isValid() const;
    MCAPI void notify(__int64);
    MCAPI bool operator==(class AttributeInstance const &) const;
    MCAPI void recalculateModifiers();
    MCAPI void registerListener(class AttributeInstance const &);
    MCAPI void removeBuff(class std::shared_ptr<class AttributeBuff>);
    MCAPI void removeBuffs();
    MCAPI void removeModifier(class AttributeModifier const &);
    MCAPI void removeModifier(class std::shared_ptr<class AttributeModifier>);
    MCAPI bool removeModifier(class mce::UUID const &);
    MCAPI void resetToDefaultValue();
    MCAPI void resetToMaxValue();
    MCAPI void resetToMinValue();
    MCAPI void serializationSetRange(float, float, float);
    MCAPI void serializationSetValue(float, int, float);
    MCAPI void setCurrentValue(float);
    MCAPI void setDefaultValue(float, int);
    MCAPI void setDefaultValueOnly(float);
    MCAPI void setDelegate(class std::shared_ptr<class AttributeInstanceDelegate>);
    MCAPI void setMaxValue(float);
    MCAPI void setRange(float, float, float);

//private:
    MCAPI AttributeInstance(class BaseAttributeMap *, class Attribute const *);
    MCAPI float _calculateValue(class AttributeBuff const &);
    MCAPI float _calculateValue();
    MCAPI float _sanitizeValue(float);

private:


};