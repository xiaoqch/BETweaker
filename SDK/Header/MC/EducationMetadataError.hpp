// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "PackError.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class EducationMetadataError : public PackError {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EDUCATIONMETADATAERROR
public:
    class EducationMetadataError& operator=(class EducationMetadataError const &) = delete;
    EducationMetadataError(class EducationMetadataError const &) = delete;
    EducationMetadataError() = delete;
#endif


public:
    /*0*/ virtual ~EducationMetadataError();
    /*2*/ virtual class std::unordered_map<int, std::string, struct std::hash<int>, struct std::equal_to<int>, class std::allocator<struct std::pair<int const, std::string>>> const & getLocErrorMessageMap() const;
    /*3*/ virtual class std::unordered_map<int, std::string, struct std::hash<int>, struct std::equal_to<int>, class std::allocator<struct std::pair<int const, std::string>>> const & getEventErrorMessageMap() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_EDUCATIONMETADATAERROR
public:
#endif
    MCAPI EducationMetadataError(enum PackParseErrorType, std::vector<std::string> const &);


};