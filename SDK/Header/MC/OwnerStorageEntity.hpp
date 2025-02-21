// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class OwnerStorageEntity {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OWNERSTORAGEENTITY
public:
    class OwnerStorageEntity& operator=(class OwnerStorageEntity const &) = delete;
    OwnerStorageEntity(class OwnerStorageEntity const &) = delete;
    OwnerStorageEntity() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_OWNERSTORAGEENTITY
public:
#endif

//protected:
    MCAPI OwnerStorageEntity(class OwnerStorageEntity &&);
    MCAPI OwnerStorageEntity(enum OwnerStorageEntity::EmptyInit);
    MCAPI OwnerStorageEntity(enum OwnerStorageEntity::VariadicInit, class EntityRegistry &);
    MCAPI class EntityContext & _getStackRef() const;
    MCAPI bool _hasValue() const;
    MCAPI void _remake(class EntityRegistry &);
    MCAPI void _reset();
    MCAPI class OwnerStorageEntity & operator=(class OwnerStorageEntity &&);
    MCAPI ~OwnerStorageEntity();

protected:


};