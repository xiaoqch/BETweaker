// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "IdentityDefinition.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ScoreboardIdentityRef {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCOREBOARDIDENTITYREF
public:
    class ScoreboardIdentityRef& operator=(class ScoreboardIdentityRef const &) = delete;
    ScoreboardIdentityRef(class ScoreboardIdentityRef const &) = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCOREBOARDIDENTITYREF
public:
#endif
    MCAPI ScoreboardIdentityRef(struct ScoreboardId const &);
    MCAPI ScoreboardIdentityRef();
    MCAPI struct ActorUniqueID const & getEntityId() const;
    MCAPI std::string const & getFakePlayerName() const;
    MCAPI enum IdentityDefinition::Type getIdentityType() const;
    MCAPI std::string const & getName(class std::function<std::string const & (struct ActorUniqueID)> const &) const;
    MCAPI struct PlayerScoreboardId const & getPlayerId() const;
    MCAPI struct ScoreboardId const & getScoreboardId() const;
    MCAPI bool isPlayerType() const;
    MCAPI bool modifyScoreInObjective(int &, class Objective &, int, enum PlayerScoreSetFunction);
    MCAPI bool removeFromObjective(class Scoreboard &, class Objective &);
    MCAPI static class ScoreboardIdentityRef const Undefined;
    MCAPI static std::unique_ptr<class CompoundTag> serialize(class ScoreboardIdentityRef const &);


};