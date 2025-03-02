// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Core.hpp"
#include "Bedrock.hpp"
#include "LevelStorageWriteBatch.hpp"
#include "LevelStorage.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "third-party/leveldb/status.h"

#undef BEFORE_EXTRA

class DBStorage : public LevelStorage {

#define AFTER_EXTRA
// Add Member There
public:
struct PendingWriteResult {
    PendingWriteResult() = delete;
    PendingWriteResult(PendingWriteResult const&) = delete;
    PendingWriteResult(PendingWriteResult const&&) = delete;
};

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DBSTORAGE
public:
    class DBStorage& operator=(class DBStorage const &) = delete;
    DBStorage(class DBStorage const &) = delete;
    DBStorage() = delete;
#endif


public:
    /*0*/ virtual ~DBStorage();
    /*1*/ virtual void addStorageObserver(std::unique_ptr<class LevelStorageObserver>);
    /*2*/ virtual std::unique_ptr<class CompoundTag> getCompoundTag(std::string const &, enum DBHelpers::Category);
    /*3*/ virtual bool hasKey(class gsl::basic_string_span<char const, -1>, enum DBHelpers::Category) const;
    /*4*/ virtual void forEachKeyWithPrefix(class gsl::basic_string_span<char const, -1>, enum DBHelpers::Category, class std::function<void (class gsl::basic_string_span<char const, -1>, class gsl::basic_string_span<char const, -1>)> const &) const;
    /*5*/ virtual bool loadLevelData(class LevelData &);
    /*6*/ virtual std::unique_ptr<class ChunkSource> createChunkStorage(std::unique_ptr<class ChunkSource>, enum StorageVersion);
    /*7*/ virtual void saveLevelData(class LevelData const &);
    /*8*/ virtual class Core::PathBuffer<std::string> const & getFullPath() const;
    /*9*/ virtual class std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>> saveData(std::string const &, std::string &&, enum DBHelpers::Category);
    /*10*/ virtual class std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>> saveData(class LevelStorageWriteBatch const &);
    /*11*/ virtual class std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>> deleteData(std::string const &, enum DBHelpers::Category);
    /*12*/ virtual void syncIO();
    /*13*/ virtual void getStatistics(std::string &) const;
    /*15*/ virtual void __unk_vfn_15();
    /*16*/ virtual void startShutdown();
    /*17*/ virtual bool isShuttingDown() const;
    /*18*/ virtual bool checkShutdownDone();
    /*19*/ virtual bool loadData(class gsl::basic_string_span<char const, -1>, std::string &, enum DBHelpers::Category) const;
    /*20*/ virtual void __unk_vfn_20();
    /*21*/ virtual std::vector<struct SnapshotFilenameAndLength> createSnapshot(std::string const &);
    /*22*/ virtual void releaseSnapshot();
    /*23*/ virtual void compactStorage();
    /*24*/ virtual void syncAndSuspendStorage();
    /*25*/ virtual void resumeStorage();
    /*26*/ virtual void setFlushAllowed(bool);
    /*27*/ virtual void flushToPermanentStorage();
    /*28*/ virtual void freeCaches();
    /*29*/ virtual void setCompactionCallback(class std::function<void (enum CompactionStatus)>);
    /*30*/ virtual void setCriticalSyncSaveCallback(class std::function<void (void)>);
    /*31*/ virtual void corruptLevel();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DBSTORAGE
public:
    MCVAPI struct Core::LevelStorageResult getLevelStorageState() const;
    MCVAPI struct Core::LevelStorageResult getState() const;
#endif
    MCAPI DBStorage(struct DBStorageConfig, class gsl::not_null<class Bedrock::NonOwnerPointer<class LevelDbEnv>>);
    MCAPI void _notifyChunkStorageDestroyed(class DBChunkStorage &);
    MCAPI bool tryRepair(class Core::Path const &) const;

//protected:
    MCAPI struct std::pair<class LevelStorageWriteBatch *, class std::_Tree_iterator<class std::_Tree_val<struct std::_Tree_simple_types<struct std::pair<std::string const, struct LevelStorageWriteBatch::BatchEntry>>>>> _findCacheEntry(std::string const &);
    MCAPI class std::map<std::string, struct DBStorage::PendingWriteResult, struct std::less<std::string>, class std::allocator<struct std::pair<std::string const, struct DBStorage::PendingWriteResult>>> _getAllPendingWrites() const;
    MCAPI void _handleErrorStatus(class leveldb::Status const &);
    MCAPI void _mergeIntoWriteCache(class LevelStorageWriteBatch const &);
    MCAPI void _queueSaveCallback(bool);
    MCAPI void _read(class gsl::basic_string_span<char const, -1>, enum DBHelpers::Category, class std::function<void (class gsl::basic_string_span<char const, -1>, class gsl::basic_string_span<char const, -1>)> const &) const;
    MCAPI struct DBStorage::PendingWriteResult _readPendingWrite(std::string const &, enum DBHelpers::Category) const;

//private:
    MCAPI class TaskResult _flushWriteCacheToLevelDB();
    MCAPI std::string _getTelemetryMessage(class leveldb::Status const &) const;
    MCAPI void _markAsCorrupted(class gsl::basic_string_span<char const, -1>) const;
    MCAPI void _scheduleNextAutoCompaction();
    MCAPI bool _suspendAndPerformSaveAction(class std::function<class TaskResult (void)>, class std::function<void (void)>);

protected:

private:


};