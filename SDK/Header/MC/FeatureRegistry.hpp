// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class FeatureRegistry {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FEATUREREGISTRY
public:
    class FeatureRegistry& operator=(class FeatureRegistry const &) = delete;
    FeatureRegistry(class FeatureRegistry const &) = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FEATUREREGISTRY
public:
#endif
    MCAPI FeatureRegistry();
    MCAPI void forEachFeature(class std::function<void (class HashedString const &, class WeakRefT<struct FeatureRefTraits>)>) const;
    MCAPI std::vector<std::string> getLargeFeaturePasses() const;
    MCAPI std::vector<std::string> getSmallFeaturePasses() const;
    MCAPI bool isFeaturePassDefined(std::string const &) const;
    MCAPI void loadFromDefinitions(class IWorldRegistriesProvider &, class ResourcePackManager const &, class Experiments const &);
    MCAPI class WeakRefT<struct FeatureRefTraits> lookupByName(std::string const &) const;
    MCAPI class WeakRefT<struct FeatureRefTraits> lookupOrReserveFeature(std::string const &);
    MCAPI class WeakRefT<struct FeatureRefTraits> reserveFeature(std::string const &);
    MCAPI void setLargeFeaturePasses(std::vector<std::string>);
    MCAPI void setSmallFeaturePasses(std::vector<std::string>);
    MCAPI static std::string const AFTER_SKY_PASS;
    MCAPI static std::string const AFTER_SURFACE_PASS;
    MCAPI static std::string const AFTER_UNDERGROUND_PASS;
    MCAPI static std::string const BEFORE_SKY_PASS;
    MCAPI static std::string const BEFORE_SURFACE_PASS;
    MCAPI static std::string const BEFORE_UNDERGROUND_PASS;
    MCAPI static std::string const FINAL_PASS;
    MCAPI static std::string const FIRST_PASS;
    MCAPI static std::string const PREGENERATION_PASS;
    MCAPI static std::string const SKY_PASS;
    MCAPI static std::string const SURFACE_PASS;
    MCAPI static std::string const UNDERGROUND_PASS;

//private:
    MCAPI std::string const _featureNamespaceFromInput(std::string const &, std::string const &);
    MCAPI void _registerFeature(std::string const &, std::unique_ptr<class IFeature>);
    MCAPI void _setupFeature(class IWorldRegistriesProvider &, class ResourcePackManager const &, std::string const &, std::string const &, class SemVersion const &);

private:


};