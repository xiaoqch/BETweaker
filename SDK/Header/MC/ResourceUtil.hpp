// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ResourceUtil {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RESOURCEUTIL
public:
    class ResourceUtil& operator=(class ResourceUtil const &) = delete;
    ResourceUtil(class ResourceUtil const &) = delete;
    ResourceUtil() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RESOURCEUTIL
public:
#endif
    MCAPI static enum ResourceFileSystem pathFromString(class gsl::basic_string_span<char const, -1>);
    MCAPI static class gsl::basic_string_span<char const, -1> stringFromPath(enum ResourceFileSystem);


};