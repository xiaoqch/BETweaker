// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class LegacyTradeableComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEGACYTRADEABLECOMPONENT
public:
    class LegacyTradeableComponent& operator=(class LegacyTradeableComponent const &) = delete;
    LegacyTradeableComponent(class LegacyTradeableComponent const &) = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LEGACYTRADEABLECOMPONENT
public:
#endif
    MCAPI void DecrementMerchantTimer();
    MCAPI void IncrementTradeTier();
    MCAPI LegacyTradeableComponent();
    MCAPI void addAdditionalSaveData(class CompoundTag &) const;
    MCAPI class UpdateTradePacket createDataPacket(class Actor &, enum ContainerID);
    MCAPI bool getAddRecipeOnUpdate() const;
    MCAPI std::string const & getDisplayName() const;
    MCAPI bool getInteraction(class Actor &, class Player &, class ActorInteraction &);
    MCAPI class Player const * getLastPlayerTradeName() const;
    MCAPI class MerchantRecipeList * getOffers(class Actor &);
    MCAPI bool getResetLockedOnFirstTrade() const;
    MCAPI int getRiches() const;
    MCAPI int getTradeTier() const;
    MCAPI int getUpdateMerchantTimer() const;
    MCAPI std::string const & loadDisplayName(class Actor &);
    MCAPI void loadOffersFromTag(class CompoundTag const *);
    MCAPI void notifyTrade(class Actor &, int);
    MCAPI class LegacyTradeableComponent & operator=(class LegacyTradeableComponent &&);
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &, class DataLoadHelper &);
    MCAPI void reloadComponent(class Actor &);
    MCAPI void restockAllRecipes(class Actor &);
    MCAPI void setAddRecipeOnUpdate(bool);
    MCAPI void setOffers(class MerchantRecipeList &);
    MCAPI void setResetLockedOnFirstTrade(bool);
    MCAPI void setRiches(int);
    MCAPI void setTradeTier(int);
    MCAPI bool shouldConvertTrades(class Actor &) const;
    MCAPI bool shouldPersistTrades(class Actor &) const;
    MCAPI void updateTradeTier(class Actor &);
    MCAPI ~LegacyTradeableComponent();
    MCAPI static bool isUseNewTradeScreen(class Actor const &);

//private:
    MCAPI struct TradeTable * _getTradeTable(class Actor &);
    MCAPI void _rearrangeTradeList(class Actor &, std::vector<struct Trade> &, unsigned __int64);
    MCAPI bool _refreshTrades(class Actor &);

private:


};