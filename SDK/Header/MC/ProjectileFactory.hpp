// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ProjectileFactory {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PROJECTILEFACTORY
public:
    class ProjectileFactory& operator=(class ProjectileFactory const &) = delete;
    ProjectileFactory(class ProjectileFactory const &) = delete;
    ProjectileFactory() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PROJECTILEFACTORY
public:
#endif
    MCAPI ProjectileFactory(class Level &);
    MCAPI bool shootProjectileFromDefinition(struct ActorDefinitionIdentifier const &, class Mob *, class Vec3);
    MCAPI static std::unique_ptr<class OnHitSubcomponent> createSubcomponent(class Json::Value &, class SemVersion const &, std::string const &);
    MCAPI static void initFactory();
    MCAPI static void shutdown();

//private:

private:
    MCAPI static class std::unordered_map<std::string, class std::function<std::unique_ptr<class OnHitSubcomponent> (void)>, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, class std::function<std::unique_ptr<class OnHitSubcomponent> (void)>>>> mSubcomponentMap;


};