// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ItemStackRequestBatch {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMSTACKREQUESTBATCH
public:
    class ItemStackRequestBatch& operator=(class ItemStackRequestBatch const &) = delete;
    ItemStackRequestBatch(class ItemStackRequestBatch const &) = delete;
    ItemStackRequestBatch() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ITEMSTACKREQUESTBATCH
public:
#endif
    MCAPI std::vector<std::unique_ptr<class ItemStackRequestData>> const & getRequests() const;
    MCAPI std::vector<std::unique_ptr<class ItemStackRequestData>> takeRequests() const;
    MCAPI void write(class BinaryStream &) const;
    MCAPI ~ItemStackRequestBatch();
    MCAPI static std::unique_ptr<class ItemStackRequestBatch> read(class ReadOnlyBinaryStream &);


};