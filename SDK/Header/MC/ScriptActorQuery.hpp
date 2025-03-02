// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ScriptActorQuery {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTACTORQUERY
public:
    class ScriptActorQuery& operator=(class ScriptActorQuery const &) = delete;
    ScriptActorQuery(class ScriptActorQuery const &) = delete;
    ScriptActorQuery() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTACTORQUERY
public:
#endif
    MCAPI static class Scripting::Result<class Scripting::StrongTypedObjectHandle<class ScriptActorIterator>> queryActors(enum ActorSelectorType, class std::optional<struct ScriptActorQueryOptions> const &, class Scripting::WeakLifetimeScope const &, class Dimension *, class Level &);
    MCAPI static class Scripting::Result<class Scripting::StrongTypedObjectHandle<class ScriptPlayerIterator>> queryPlayers(class std::optional<struct ScriptActorQueryOptions> const &, class Scripting::WeakLifetimeScope const &, class Dimension *, class Level &);

//private:
    MCAPI static class ScriptCommandOrigin _createScriptingOrigin(class Dimension *, class ServerLevel &);
    MCAPI static struct Scripting::Error _incompatableWorldQueryOptionError(std::string const &);

private:


};