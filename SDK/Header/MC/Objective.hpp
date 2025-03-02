// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class Objective {

#define AFTER_EXTRA
// Add Member There
public:
    LIAPI bool setDisplay(const std::string& slotName, ObjectiveSortOrder sort);

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OBJECTIVE
public:
    class Objective& operator=(class Objective const &) = delete;
    Objective(class Objective const &) = delete;
    Objective() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_OBJECTIVE
public:
#endif
    MCAPI Objective(std::string const &, class ObjectiveCriteria const &);
    MCAPI class ObjectiveCriteria const & getCriteria() const;
    MCAPI std::string const & getDisplayName() const;
    MCAPI std::string const & getName() const;
    MCAPI struct ScoreInfo getPlayerScore(struct ScoreboardId const &) const;
    MCAPI bool getPlayerScoreRef(struct ScoreboardId const &, struct ScoreInfoRef &);
    MCAPI std::vector<struct ScoreboardId> getPlayers() const;
    MCAPI class std::unordered_map<struct ScoreboardId, int, struct std::hash<struct ScoreboardId>, struct std::equal_to<struct ScoreboardId>, class std::allocator<struct std::pair<struct ScoreboardId const, int>>> const & getScores() const;
    MCAPI bool hasScore(struct ScoreboardId const &) const;
    MCAPI bool hasScores() const;
    MCAPI void setDisplayName(std::string const &);
    MCAPI ~Objective();
    MCAPI static std::unique_ptr<class Objective> deserialize(class CompoundTag const &, class Scoreboard &);
    MCAPI static std::unique_ptr<class CompoundTag> serialize(class Objective const &);

//private:
    MCAPI bool _modifyPlayerScore(int &, struct ScoreboardId const &, int, enum PlayerScoreSetFunction);
    MCAPI void _resetPlayer(struct ScoreboardId const &);

private:


};