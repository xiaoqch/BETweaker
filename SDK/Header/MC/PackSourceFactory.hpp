// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Core.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class PackSourceFactory {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PACKSOURCEFACTORY
public:
    class PackSourceFactory& operator=(class PackSourceFactory const &) = delete;
    PackSourceFactory(class PackSourceFactory const &) = delete;
    PackSourceFactory() = delete;
#endif


public:
    /*0*/ virtual ~PackSourceFactory();
    /*1*/ virtual class WorldTemplatePackSource & createWorldTemplatePackSource(class WorldTemplateManager const &, class mce::UUID const &, enum PackType, enum PackOrigin);
    /*2*/ virtual class WorldTemplatePackSource * getWorldTemplatePackSource(class mce::UUID const &, enum PackType) const;
    /*3*/ virtual class DirectoryPackSource & createDirectoryPackSource(class Core::Path const &, enum PackType, enum PackOrigin, bool);
    /*4*/ virtual class DirectoryPackSource * getDirectoryPackSource(class Core::Path const &, enum PackType) const;
    /*5*/ virtual class InPackagePackSource & createInPackagePackSource(enum PackType);
    /*6*/ virtual class InPackagePackSource * getInPackagePackSource(enum PackType);
    /*7*/ virtual class WorldHistoryPackSource & createWorldHistoryPackSource(class Core::Path const &, enum PackType);
    /*8*/ virtual class WorldHistoryPackSource * getWorldHistoryPackSource(class Core::Path const &, enum PackType) const;
    /*9*/ virtual class DirectoryPackSource * getDirectoryPackSourceContaining(struct PackIdVersion const &) const;
    /*10*/ virtual void removeFromDirectoryPackSource(class Core::Path const &);
    /*11*/ virtual class InPackagePackSource & createDynamicPackagePackSource(enum PackType);
    /*12*/ virtual class InPackagePackSource * getDynamicPackagePackSource(enum PackType);
    /*13*/ virtual void setDynamicPackagePacks(class std::shared_ptr<class IDynamicPackagePacks> const &);
    /*14*/ virtual void setDynamicPackageRoot(class Core::PathBuffer<std::string>);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PACKSOURCEFACTORY
public:
#endif
    MCAPI PackSourceFactory(class std::shared_ptr<class IInPackagePacks> const &);


};