/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSString, PFUbiquityStoreMetadata, PFUbiquityLocation, NSManagedObjectModel;

@interface PFUbiquityMigrationManager : NSObject  {
    NSManagedObjectModel *_destinationModel;
    NSManagedObjectModel *_sourceModel;
    PFUbiquityLocation *_rootLocation;
    PFUbiquityStoreMetadata *_storeMetadata;
    NSString *_localPeerID;
}

@property(readonly) NSManagedObjectModel * sourceModel;
@property(readonly) NSManagedObjectModel * destinationModel;
@property(readonly) PFUbiquityLocation * rootLocation;
@property(readonly) PFUbiquityStoreMetadata * storeMetadata;


- (void)dealloc;
- (BOOL)migrateTransactionLogs:(BOOL)arg1 andBaselineIfNecessaryForStoreName:(id)arg2 peerID:(id)arg3 error:(id*)arg4;
- (id)initWithDestinationModel:(id)arg1 sourceModel:(id)arg2 ubiquityRootLocation:(id)arg3 localPeerID:(id)arg4;
- (id)initWithDestinationModel:(id)arg1 storeMetadata:(id)arg2 ubiquityRootLocation:(id)arg3 localPeerID:(id)arg4;
- (id)rootLocation;
- (id)storeMetadata;
- (id)destinationModel;
- (id)sourceModel;

@end
