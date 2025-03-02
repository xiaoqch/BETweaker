// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Core.hpp"
#include "Bedrock.hpp"
#include "DirectoryPackAccessStrategy.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class EncryptedFileAccessStrategy : public DirectoryPackAccessStrategy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENCRYPTEDFILEACCESSSTRATEGY
public:
    class EncryptedFileAccessStrategy& operator=(class EncryptedFileAccessStrategy const &) = delete;
    EncryptedFileAccessStrategy(class EncryptedFileAccessStrategy const &) = delete;
    EncryptedFileAccessStrategy() = delete;
#endif


public:
    /*0*/ virtual ~EncryptedFileAccessStrategy();
    /*4*/ virtual bool isWritable() const;
    /*6*/ virtual bool isTrusted() const;
    /*7*/ virtual bool hasAsset(class Core::Path const &, bool) const;
    /*9*/ virtual bool getAsset(class Core::Path const &, std::string &, bool) const;
    /*10*/ virtual bool deleteAsset(class Core::PathBuffer<std::string> const &);
    /*11*/ virtual bool writeAsset(class Core::Path const &, std::string const &);
    /*16*/ virtual std::unique_ptr<class PackAccessStrategy> createSubPack(class Core::Path const &) const;
    /*17*/ virtual enum PackAccessAssetGenerationResult generateAssetSet();
    /*21*/ virtual class ContentIdentity readContentIdentity() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ENCRYPTEDFILEACCESSSTRATEGY
public:
#endif
    MCAPI EncryptedFileAccessStrategy(class ResourceLocation const &, class ContentIdentity const &, class gsl::not_null<class Bedrock::NonOwnerPointer<class IContentKeyProvider const>> const &, bool, class std::optional<class std::unordered_map<class Core::PathBuffer<std::string>, std::string, struct std::hash<class Core::PathBuffer<std::string>>, struct std::equal_to<class Core::PathBuffer<std::string>>, class std::allocator<struct std::pair<class Core::PathBuffer<std::string> const, std::string>>>>);
    MCAPI static bool isValidEncryptedPack(class Core::Path const &, class ContentIdentity &);

//protected:
    MCAPI std::string _getContentsFile();

//private:
    MCAPI static bool _getContentIdentityFromEncryptedStream(std::string &, class ContentIdentity &);
    MCAPI static void _transformStream(std::string &, std::string const &, unsigned __int64);

protected:

private:


};