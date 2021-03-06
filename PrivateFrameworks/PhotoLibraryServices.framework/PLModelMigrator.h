/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class PLPhotoLibrary, PLXPCTransaction, NSFileManager, PLCurrentThumbnailsInformation;

@interface PLModelMigrator : NSObject  {
    double startTime;
    NSFileManager *_fileManager;
    PLXPCTransaction *_transaction;
    PLPhotoLibrary *_photoLibrary;
    long _photoLibraryOnce;
    PLCurrentThumbnailsInformation *_thumbnailsInformation;
}

@property(retain) NSFileManager * fileManager;
@property(readonly) PLPhotoLibrary * photoLibrary;
@property(retain) PLCurrentThumbnailsInformation * _thumbnailsInformation;

+ (id)archivedAssetUUIDForURL:(id)arg1;
+ (BOOL)restartingAfterRestoreFromBackup;
+ (void)recalculateCachedCounts;
+ (id)eventNameFromDate:(id)arg1;
+ (BOOL)shouldRebuildDCIMSubDirectoryAtURL:(id)arg1 directoryEnumerator:(id)arg2 assetsKind:(int*)arg3;
+ (void)setDidImportFileSystemAssets:(BOOL)arg1;
+ (id)assetUUIDForPathPlistURL;
+ (long long)secondsNeededToCleanupModelAfteriTunesRestore;
+ (void)cleanupModelAfterRestoreFromiTunes;
+ (void)recreateThumbnailTablesIfNecessary;
+ (id)modelMigrator;
+ (id)sharedModelMigratorForImport;
+ (void)waitForDataMigratorToExit;
+ (void)loadFileSystemDataIntoDatabase;
+ (void)dontImportFileSystemDataIntoDatabase;
+ (BOOL)restartingAfterOTAMigration;
+ (void)importAfterCrash:(id)arg1 dictionariesByPhotoStreamID:(id)arg2 completionBlock:(id)arg3;
+ (void)repairSingletonObjectsInDatabaseWithCompletionHandler:(id)arg1;
+ (void)createDatabase;
+ (void)archiveAssetUUIDForPathPlist:(id)arg1;
+ (id)generateAssetUUIDForPathPlist;
+ (BOOL)didImportFileSystemAssets;

- (void)dealloc;
- (id)init;
- (void)set_thumbnailsInformation:(id)arg1;
- (id)_thumbnailsInformation;
- (BOOL)_shouldReimportCameraRollAssets;
- (void)resumePhotoStreams;
- (void)pausePhotoStreams;
- (void)collectFileURLs:(id)arg1 forAddingToAlbum:(id)arg2 intoAssetsArray:(id)arg3 assetsKind:(int)arg4;
- (id)fileManager;
- (id)importFileSystemImportAssets:(id)arg1 forceUpdate:(BOOL)arg2;
- (id)_orderedAssetsToImportCameraRollOnly:(BOOL)arg1;
- (void)collectContentsOfDirectoryURL:(id)arg1 forAddingToAlbum:(id)arg2 intoAssetsArray:(id)arg3 assetsKind:(int)arg4;
- (BOOL)shouldRebuildDCIMDirectoryAtURL:(id)arg1 directoryEnumerator:(id)arg2 isPhotoStream:(BOOL*)arg3 cameraRollOnly:(BOOL)arg4;
- (void)_importAllDCIMAssets;
- (void)setFileManager:(id)arg1;
- (id)initWithImplicitTransaction:(BOOL)arg1;
- (long long)secondsNeededToCleanupModelAfteriTunesRestore;
- (void)recalculateCachedCountsWithSemaphore:(id)arg1;
- (void)cleanupModelAfterRestoreFromiTunes;
- (void)recreateThumbnailTablesIfNecessary;
- (void)loadFileSystemDataIntoDatabase;
- (void)dontImportFileSystemDataIntoDatabase;
- (void)importAfterCrash:(id)arg1 dictionariesByPhotoStreamID:(id)arg2 completionBlock:(id)arg3;
- (id)photoLibrary;

@end
