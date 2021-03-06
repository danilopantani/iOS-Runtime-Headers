/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class UINavigationItem, PLCloudSharedLibraryViewController;

@interface PLCloudSharedAlbumPickerViewController : PLAbstractAlbumPickerViewController <PLTexturedCardViewContained> {
    UINavigationItem *_navItem;
}

@property(readonly) PLCloudSharedLibraryViewController * libraryViewController;
@property(readonly) UINavigationItem * texturedCardNavigationItem;


- (void)dealloc;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)_handleDidSelectAlbum:(struct NSObject { Class x1; }*)arg1;
- (id)texturedCardNavigationItem;
- (void)setAlbumCreationLabel:(id)arg1;
- (id)libraryViewController;
- (id)preparedContentController;
- (int)albumListFilter;
- (id)preparedLibraryViewController;
- (id)initWithLibraryContentMode:(int)arg1 assetsToAdd:(id)arg2 completionHandler:(id)arg3;
- (int)libraryViewController:(id)arg1 willSetCellAccessoryType:(int)arg2 forAlbum:(id)arg3;

@end
