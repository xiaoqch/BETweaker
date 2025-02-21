// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "CommandOrigin.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class VirtualCommandOrigin : public CommandOrigin {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VIRTUALCOMMANDORIGIN
public:
    class VirtualCommandOrigin& operator=(class VirtualCommandOrigin const &) = delete;
    VirtualCommandOrigin(class VirtualCommandOrigin const &) = delete;
    VirtualCommandOrigin() = delete;
#endif


public:
    /*0*/ virtual ~VirtualCommandOrigin();
    /*1*/ virtual std::string const & getRequestId() const;
    /*2*/ virtual std::string getName() const;
    /*3*/ virtual class BlockPos getBlockPosition() const;
    /*4*/ virtual class Vec3 getWorldPosition() const;
    /*5*/ virtual class std::optional<class Vec2> getRotation() const;
    /*6*/ virtual class Level * getLevel() const;
    /*7*/ virtual class Dimension * getDimension() const;
    /*8*/ virtual class Actor * getEntity() const;
    /*9*/ virtual enum CommandPermissionLevel getPermissionsLevel() const;
    /*10*/ virtual std::unique_ptr<class CommandOrigin> clone() const;
    /*13*/ virtual bool hasChatPerms() const;
    /*14*/ virtual bool hasTellPerms() const;
    /*15*/ virtual bool canUseAbility(enum AbilitiesIndex) const;
    /*17*/ virtual bool canUseCommandsWithoutCheatsEnabled() const;
    /*18*/ virtual bool isSelectorExpansionAllowed() const;
    /*19*/ virtual class NetworkIdentifier const & getSourceId() const;
    /*21*/ virtual class CommandOrigin const & getOutputReceiver() const;
    /*22*/ virtual struct CommandOriginIdentity getIdentity() const;
    /*23*/ virtual enum CommandOriginType getOriginType() const;
    /*27*/ virtual void updateValues();
    /*28*/ virtual class Vec3 const getExecutePosition(int, class CommandPositionFloat const &) const;
    /*29*/ virtual class CompoundTag serialize() const;
    /*30*/ virtual bool isValid() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_VIRTUALCOMMANDORIGIN
public:
#endif
    MCAPI VirtualCommandOrigin(class CommandOrigin const &, class CommandOrigin const &, class CommandPositionFloat const &, int);
    MCAPI VirtualCommandOrigin(class CommandOrigin const &, class Actor &, class CommandPositionFloat const &, int);
    MCAPI VirtualCommandOrigin(std::unique_ptr<class CommandOrigin>, std::unique_ptr<class CommandOrigin>, class CommandPositionFloat const &, int);
    MCAPI class CommandOrigin * getOrigin() const;
    MCAPI static std::unique_ptr<class VirtualCommandOrigin> load(class CompoundTag const &, class ServerLevel &);


};