// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "Bedrock.hpp"
#include "TextObjectText.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ScriptMinecraftServerAdminModuleFactory : public TextObjectText {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMINECRAFTSERVERADMINMODULEFACTORY
public:
    class ScriptMinecraftServerAdminModuleFactory& operator=(class ScriptMinecraftServerAdminModuleFactory const &) = delete;
    ScriptMinecraftServerAdminModuleFactory(class ScriptMinecraftServerAdminModuleFactory const &) = delete;
    ScriptMinecraftServerAdminModuleFactory() = delete;
#endif


public:
    /*0*/ virtual ~ScriptMinecraftServerAdminModuleFactory();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTMINECRAFTSERVERADMINMODULEFACTORY
public:
#endif
    MCAPI ScriptMinecraftServerAdminModuleFactory(class Bedrock::NonOwnerPointer<class ScriptPackConfigurationManager>);
    MCAPI static std::string getModuleUUIDAsString();
    MCAPI static struct Scripting::ModuleDescriptor makeModuleDescriptorFor(struct Scripting::Version);

//private:

private:
    MCAPI static char const * ModuleName;
    MCAPI static class mce::UUID const ModuleUUID;


};