// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Bedrock.hpp"
#include "Json.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class CommunitySiftProcessor {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMMUNITYSIFTPROCESSOR
public:
    class CommunitySiftProcessor& operator=(class CommunitySiftProcessor const &) = delete;
    CommunitySiftProcessor(class CommunitySiftProcessor const &) = delete;
    CommunitySiftProcessor() = delete;
#endif


public:
    /*0*/ virtual ~CommunitySiftProcessor();
    /*1*/ virtual class CallbackToken processMessages(class Player const &, enum TextProcessingEventOrigin, std::vector<std::string> const &, class std::function<void (std::vector<std::string> const &, std::vector<std::string> const &)>);
    /*2*/ virtual class CallbackToken processCommandsAndNames(class Player const &, enum TextProcessingEventOrigin, std::vector<std::string> const &, class std::function<void (std::vector<std::string> const &, std::vector<std::string> const &)>);
    /*3*/ virtual void processJoinEvent(class Player const &);
    /*4*/ virtual void processLeaveEvent(class Player const &);
    /*5*/ virtual void onStartShutdown();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_COMMUNITYSIFTPROCESSOR
public:
#endif
    MCAPI CommunitySiftProcessor(std::string const &, std::string const &, class Scheduler &);

//private:
    MCAPI class std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>> _createRequest(std::string const &, std::string const &, class IMinecraftEventing *, std::string const &, enum TextProcessingEventOrigin, class std::shared_ptr<std::vector<std::string>>, class std::shared_ptr<std::vector<std::string>>, bool, std::string const &);
    MCAPI struct CommunitySiftEndpoints _getEndpointsFromConfig(class Json::Value const &, std::string const &);
    MCAPI void _processEvent(class Player const &, enum TextProcessingEventOrigin, class UserEntityIdentifierComponent const *, std::string const &);
    MCAPI class CallbackToken _processMessages(class Player const &, bool, enum TextProcessingEventOrigin, std::vector<std::string> const &, std::string const &, class std::function<void (std::vector<std::string> const &, std::vector<std::string> const &)>);
    MCAPI bool _validateCommunitySiftConfiguration();

private:


};