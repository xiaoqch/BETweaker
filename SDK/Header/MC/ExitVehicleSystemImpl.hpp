// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ExitVehicleSystemImpl {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EXITVEHICLESYSTEMIMPL
public:
    class ExitVehicleSystemImpl& operator=(class ExitVehicleSystemImpl const &) = delete;
    ExitVehicleSystemImpl(class ExitVehicleSystemImpl const &) = delete;
    ExitVehicleSystemImpl() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_EXITVEHICLESYSTEMIMPL
public:
#endif
    MCAPI static bool tryPlaceAt(class Vec3 const &, class AABB const &, class IConstBlockSource const &, class optional_ref<class GetCollisionShapeInterface const>);


};