// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class WorldSessionEndPoint {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WORLDSESSIONENDPOINT
public:
    class WorldSessionEndPoint& operator=(class WorldSessionEndPoint const &) = delete;
    WorldSessionEndPoint(class WorldSessionEndPoint const &) = delete;
    WorldSessionEndPoint() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_WORLDSESSIONENDPOINT
public:
    MCVAPI void flush();
    MCVAPI bool isEnabled() const;
    MCVAPI void log(enum LogArea, enum LogLevel, char const *);
    MCVAPI bool logOnlyOnce() const;
    MCVAPI void setEnabled(bool);
#endif
    MCAPI WorldSessionEndPoint(class IMinecraftEventing &);


};