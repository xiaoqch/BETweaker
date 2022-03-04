#include "../Global.h"
#include <RegCommandAPI.h>
#include "../Main/Module.h"
using namespace RegisterCommandHelper;
class BETCommand : public Command
{

    enum class Operation
    {
        BetterHarvestingCrop,
        NoFarmDestroy,
        FastSleeping,
        HUBinfo,
        EditSign,
        DispenserCrops,
        FastLeafDecay,
        AutoFish,
        DoubleDoors,
        FastSetMinecart
    } operation;
    bool isenable;

public:

    void execute(CommandOrigin const& ori, CommandOutput& output) const override
    {
        switch (operation)
        {
        case Operation::BetterHarvestingCrop:
            Settings::BetterHarvestingCrop = isenable;
            break;
        case Operation::NoFarmDestroy:
            Settings::NoFarmDestroy = isenable;
            break;
        case Operation::FastSleeping:
            Settings::FastSleeping = isenable;
            break;
        case Operation::HUBinfo:
            if (Settings::HUBinfo == isenable) break;
            Settings::HUBinfo = isenable;
            if (isenable)
                Module::HUBInfo();
            else
                hubinfo.cancel();
            break;
        case Operation::DispenserCrops:
            Settings::DispenserCrops = isenable;
            break;
        case Operation::EditSign:
            Settings::EditSign = isenable;
            break;
        case Operation::FastLeafDecay:
            Settings::FastLeafDecay = isenable;
            break;
        case Operation::AutoFish:
            Settings::AutoFish = isenable;
            break;
        case Operation::DoubleDoors:
            Settings::DoubleDoors = isenable;
            break;
        case Operation::FastSetMinecart:
            Settings::FastSetMinecart = isenable;
        default:
            break;
        }
        output.success(std::to_string(isenable));
        Settings::reloadJson(JsonFile);
    }

    static void setup(CommandRegistry* registry)
    {
        // Register Cmd
        registry->registerCommand("bet", "BETweaker System",CommandPermissionLevel::GameMasters, { (CommandFlagValue)0 }, { (CommandFlagValue)0x80 });

        // ll version & help
        registry->addEnum<Operation>("Function", {
            {"betterharvest", Operation::BetterHarvestingCrop},
            {"nofarmdestroy", Operation::NoFarmDestroy},
            {"fastsleep", Operation::FastSleeping},
            {"dispensercrops", Operation::DispenserCrops},
            {"hubinfo", Operation::HUBinfo},
            {"editsign", Operation::EditSign},
            {"fastleafdecay", Operation::FastLeafDecay},
            {"autofish", Operation::AutoFish},
            {"doubledoors", Operation::DoubleDoors},
            {"fastsetminecart", Operation::FastSetMinecart}
            }
        );

        registry->registerOverload<BETCommand>(
            "bet",
            makeMandatory<CommandParameterDataType::ENUM>(&BETCommand::operation, "Operation", "Function"),
            makeMandatory(&BETCommand::isenable,"Enable"));
    }
};

class SeedCommand : public Command
{

public:

    void execute(CommandOrigin const& ori, CommandOutput& output) const override
    {
        vector<CommandOutputParameter>opt;
        opt.push_back(CommandOutputParameter::CommandOutputParameter(std::to_string(Global<Level>->getSeed()), 0));
        output.success("commands.seed.success",opt);
    }

    static void setup(CommandRegistry* registry)
    {
        // Register Cmd
        registry->registerCommand("seed", "get level's seed", CommandPermissionLevel::GameMasters, { (CommandFlagValue)0 }, { (CommandFlagValue)0x80 });
        registry->registerOverload<SeedCommand>("seed");
    }
};

void RegisterCommands()
{
    Event::RegCmdEvent::subscribe([](Event::RegCmdEvent ev) { // Register commands
        BETCommand::setup(ev.mCommandRegistry);
        SeedCommand::setup(ev.mCommandRegistry);
        return true;
        });
}
