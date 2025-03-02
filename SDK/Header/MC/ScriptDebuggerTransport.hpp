// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ScriptDebuggerTransport {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTDEBUGGERTRANSPORT
public:
    class ScriptDebuggerTransport& operator=(class ScriptDebuggerTransport const &) = delete;
    ScriptDebuggerTransport(class ScriptDebuggerTransport const &) = delete;
    ScriptDebuggerTransport() = delete;
#endif


public:
    /*0*/ virtual ~ScriptDebuggerTransport();
    /*1*/ virtual bool listen(unsigned short);
    /*2*/ virtual bool connect(std::string const &, unsigned short);
    /*3*/ virtual bool selectClient();
    /*4*/ virtual bool connected() const;
    /*5*/ virtual bool lostConnection() const;
    /*6*/ virtual bool readyClose() const;
    /*7*/ virtual void close();
    /*8*/ virtual bool peek() const;
    /*9*/ virtual bool receive(char *, unsigned __int64);
    /*10*/ virtual void send(char const *, unsigned __int64);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTDEBUGGERTRANSPORT
public:
#endif
    MCAPI ScriptDebuggerTransport(class IScriptDebuggerWatchdog &);


};