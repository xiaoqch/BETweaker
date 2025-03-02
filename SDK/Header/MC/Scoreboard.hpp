// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Add include headers & pre-declares
class Player;
class Objective;
struct PlayerScore;

struct ScoreInfo {
    char filler[16];
    Objective* getObjective() {
        return dAccess<Objective*>(this, 0);
    }
    int getCount() {
        return dAccess<int>(this, 12);
    }
};
#undef BEFORE_EXTRA

class Scoreboard {

#define AFTER_EXTRA
// Add new members to class
public:

    inline struct ScoreboardId const& createScoreboardId(std::string const& a0) {
        struct ScoreboardId const& (Scoreboard::*rv)(std::string const&);
        *((void**)&rv) = dlsym("?createScoreboardId@ServerScoreboard@@UEAAAEBUScoreboardId@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
        return (this->*rv)(std::forward<std::string const&>(a0));
    }

    inline struct ScoreboardId const& createScoreboardId(class Player const& a0) {
        struct ScoreboardId const& (Scoreboard::*rv)(class Player const&);
        *((void**)&rv) = dlsym("?createScoreboardId@ServerScoreboard@@UEAAAEBUScoreboardId@@AEBVPlayer@@@Z");
        return (this->*rv)(std::forward<class Player const&>(a0));
    }

    LIAPI static Objective* newObjective(const std::string& objname, const std::string& displayName);
    //LIAPI static bool setDisplayObjective(const std::string& objname, const std::string& slot, int sort);
    //LIAPI static Objective* clearDisplayObjective(const std::string& slot);
    //LIAPI static Objective* getDisplayObjective(const std::string& slot);
    LIAPI static bool removeFromObjective(const std::string& objname, const std::string& id);
    LIAPI static bool removeFromObjective(const std::string& objname, Player* player);

    LIAPI static struct ScoreboardId& getOrCreateScoreboardId(std::string const& id);

    LIAPI static int getScore(const std::string& objname, const std::string& id);
    LIAPI static std::optional<int> setScore(const std::string& objname, const std::string& id, int score);
    LIAPI static std::optional<int> addScore(const std::string& objname, const std::string& id, int score);
    LIAPI static std::optional<int> reduceScore(const std::string& objname, const std::string& id, int score);

    LIAPI static int getScore(Player* player, const std::string& key);
    LIAPI static bool setScore(Player* player, const std::string& key, int value);
    LIAPI static bool addScore(Player* player, const std::string& key, int value);
    LIAPI static bool reduceScore(Player* player, const std::string& key, int value);
    LIAPI static bool deleteScore(Player* player, const std::string& objname);

    LIAPI static bool scoreboardIdIsValid(ScoreboardId* id);
#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCOREBOARD
public:
    class Scoreboard& operator=(class Scoreboard const &) = delete;
    Scoreboard(class Scoreboard const &) = delete;
    Scoreboard() = delete;
#endif


public:
    /*0*/ virtual ~Scoreboard();
    /*1*/ virtual class DisplayObjective const * setDisplayObjective(std::string const &, class Objective const &, enum ObjectiveSortOrder);
    /*2*/ virtual class Objective * clearDisplayObjective(std::string const &);
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual void __unk_vfn_4();
    /*5*/ virtual void __unk_vfn_5();
    /*6*/ virtual void onObjectiveAdded(class Objective const &);
    /*7*/ virtual void onObjectiveRemoved(class Objective &);
    /*8*/ virtual void onScoreChanged(struct ScoreboardId const &, class Objective const &);
    /*9*/ virtual void __unk_vfn_9();
    /*10*/ virtual void __unk_vfn_10();
    /*11*/ virtual void __unk_vfn_11();
    /*12*/ virtual void __unk_vfn_12();
    /*13*/ virtual void __unk_vfn_13();
    /*14*/ virtual void __unk_vfn_14();
    /*15*/ virtual bool isClientSide() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCOREBOARD
public:
    MCVAPI struct ScoreboardId const & createScoreboardId(std::string const &);
    MCVAPI struct ScoreboardId const & createScoreboardId(class Player const &);
    MCVAPI struct ScoreboardId const & createScoreboardId(class Actor const &);
    MCVAPI void onPlayerIdentityUpdated(struct PlayerScoreboardId const &);
    MCVAPI void onPlayerJoined(class Player const &);
    MCVAPI void onPlayerScoreRemoved(struct ScoreboardId const &, class Objective const &);
    MCVAPI void setPacketSender(class PacketSender *);
    MCVAPI void tick();
    MCVAPI void writeToLevelStorage();
#endif
    MCAPI Scoreboard(class CommandSoftEnumRegistry);
    MCAPI class Objective * addObjective(std::string const &, std::string const &, class ObjectiveCriteria const &);
    MCAPI void addScoreListener(class Player &, std::string const &);
    MCAPI int applyPlayerOperation(bool &, std::vector<struct ScoreboardId> &, struct ScoreboardId const &, class Objective &, std::vector<struct ScoreboardId> &, class Objective &, enum CommandOperator);
    MCAPI bool clearScoreboardIdentity(struct ScoreboardId const &);
    MCAPI void forEachIdentityRef(class std::function<void (class ScoreboardIdentityRef &)>);
    MCAPI void forEachObjective(class std::function<void (class Objective &)>);
    MCAPI class ObjectiveCriteria * getCriteria(std::string const &) const;
    MCAPI std::vector<std::string> getCriteriaNames() const;
    MCAPI std::vector<struct PlayerScore> getDisplayInfoFiltered(std::string const &) const;
    MCAPI class DisplayObjective const * getDisplayObjective(std::string const &) const;
    MCAPI std::vector<std::string> getDisplayObjectiveSlotNames() const;
    MCAPI std::vector<struct ScoreInfo> getIdScores(struct ScoreboardId const &) const;
    MCAPI class Objective * getObjective(std::string const &) const;
    MCAPI std::vector<std::string> getObjectiveNames() const;
    MCAPI std::vector<class Objective const *> getObjectives() const;
    MCAPI class ScoreboardEventCoordinator & getScoreboardEventCoordinator();
    MCAPI struct ScoreboardId const & getScoreboardId(struct PlayerScoreboardId const &) const;
    MCAPI struct ScoreboardId const & getScoreboardId(std::string const &) const;
    MCAPI struct ScoreboardId const & getScoreboardId(class Actor const &) const;
    MCAPI struct ScoreboardId const & getScoreboardId(class Player const &) const;
    MCAPI class ScoreboardIdentityRef * getScoreboardIdentityRef(struct ScoreboardId const &);
    MCAPI std::vector<class ScoreboardIdentityRef> getScoreboardIdentityRefs() const;
    MCAPI std::vector<struct ScoreboardId> getTrackedIds() const;
    MCAPI bool isObjectiveDisplayed(class Objective const &) const;
    MCAPI int modifyPlayerScore(bool &, struct ScoreboardId const &, class Objective &, int, enum PlayerScoreSetFunction);
    MCAPI class ScoreboardIdentityRef const & registerScoreboardIdentity(struct ScoreboardId const &, struct ActorUniqueID const &);
    MCAPI class ScoreboardIdentityRef const & registerScoreboardIdentity(struct ScoreboardId const &, struct PlayerScoreboardId const &);
    MCAPI class ScoreboardIdentityRef const & registerScoreboardIdentity(struct ScoreboardId const &, std::string const &);
    MCAPI class ScoreboardIdentityRef const & registerScoreboardIdentity(class CompoundTag const &);
    MCAPI bool removeObjective(class Objective *);
    MCAPI void removeScoreListener(class Player &);
    MCAPI void removeScoreListener(class Player &, std::string const &);
    MCAPI void replaceFakePlayer(struct ScoreboardId const &, struct PlayerScoreboardId const &);
    MCAPI void resetPlayerScore(struct ScoreboardId const &);
    MCAPI void resetPlayerScore(struct ScoreboardId const &, class Objective &);
    MCAPI static std::string const DEFAULT_CRITERIA;
    MCAPI static std::string const DISPLAY_SLOT_BELOWNAME;
    MCAPI static std::string const DISPLAY_SLOT_LIST;
    MCAPI static std::string const DISPLAY_SLOT_SIDEBAR;
    MCAPI static char const * OBJECTIVES_ENUM;
    MCAPI static bool shouldClearScoresOnDeath(class Actor const &);

//protected:
    MCAPI void _addLoadedCriteria(std::unique_ptr<class ObjectiveCriteria>);
    MCAPI void _addLoadedObjective(std::unique_ptr<class Objective>);
    MCAPI class std::unordered_map<std::string, std::unique_ptr<class ObjectiveCriteria>, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, std::unique_ptr<class ObjectiveCriteria>>>> const & _getCriteriaMap() const;
    MCAPI class std::unordered_map<std::string, std::unique_ptr<class Objective>, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, std::unique_ptr<class Objective>>>> const & _getObjectiveMap() const;

//private:
    MCAPI struct ScoreboardId const & _getOrCreatePlayerId(class Player &);
    MCAPI void _init();

protected:

private:


};