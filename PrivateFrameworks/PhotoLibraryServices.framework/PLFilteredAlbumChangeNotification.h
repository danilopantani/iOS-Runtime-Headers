/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class PLAlbumChangeNotification, NSIndexSet, PLFilteredAlbum, PLIndexMapper;

@interface PLFilteredAlbumChangeNotification : PLAlbumChangeNotification <PLIndexMapperDataSource, PLDerivedNotification> {
    PLFilteredAlbum *_album;
    NSIndexSet *_oldFilteredIndexes;
    NSIndexSet *_filteredIndexes;
    PLIndexMapper *_indexMapper;
    PLAlbumChangeNotification *_backingNotification;
}

@property(readonly) NSIndexSet * updatedFilteredIndexes;
@property(copy) NSIndexSet * filteredIndexes;
@property(readonly) PLIndexMapper * indexMapper;

+ (id)notificationForDerivedObject:(id)arg1 priorChangeState:(id)arg2 forBackingObjectNotification:(id)arg3;

- (id)description;
- (void)dealloc;
- (id)init;
- (id)object;
- (void)setFilteredIndexes:(id)arg1;
- (BOOL)countDidChange;
- (id)updatedFilteredIndexes;
- (id)initWithFilteredAlbum:(id)arg1 priorChangeState:(id)arg2 albumChangeNotification:(id)arg3;
- (id)_changedObjects;
- (BOOL)_getOldSet:(id*)arg1 newSet:(id*)arg2;
- (BOOL)keyAssetDidChange;
- (BOOL)titleDidChange;
- (id)_diffDescription;
- (BOOL)shouldReload;
- (id)album;
- (id)indexMapper;
- (BOOL)shouldIncludeObjectAtIndex:(unsigned int)arg1;
- (id)filteredIndexes;

@end
