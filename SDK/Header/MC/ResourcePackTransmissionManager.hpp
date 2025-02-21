// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ResourcePackTransmissionManager {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RESOURCEPACKTRANSMISSIONMANAGER
public:
    class ResourcePackTransmissionManager& operator=(class ResourcePackTransmissionManager const &) = delete;
    ResourcePackTransmissionManager(class ResourcePackTransmissionManager const &) = delete;
    ResourcePackTransmissionManager() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RESOURCEPACKTRANSMISSIONMANAGER
public:
#endif
    MCAPI ResourcePackTransmissionManager(class Scheduler &);
    MCAPI void cleanupResourcePackManager(class NetworkIdentifier const &);
    MCAPI class ResourcePackFileUploadManager & getResourcePackUploadManager(class PacketSender &, class NetworkIdentifier const &, std::string const &);
    MCAPI void update();
    MCAPI ~ResourcePackTransmissionManager();


};