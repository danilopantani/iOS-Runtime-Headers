/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AppStoreUI.framework/AppStoreUI
 */

@class NSObject<OS_dispatch_source>, ISOperation, SSSoftwareUpdatesRequest;

@interface ASPurchasesStorePageViewController : SUStorePageViewController <SSSoftwareUpdatesRequestDelegate> {
    SSSoftwareUpdatesRequest *_backgroundRequest;
    ISOperation *_constructRequestOperation;
    NSObject<OS_dispatch_source> *_enterForegroundTimer;
    BOOL _invalidateOnNextBackground;
}


- (void)enqueueFetchOperation;
- (BOOL)_shouldDisplaySegmentedControlInNavigationBar:(id)arg1;
- (void)enqueueFetchOperationForPageSection:(id)arg1;
- (BOOL)canBeResolved;
- (void)_tabConfigurationChanged:(id)arg1;
- (void)cancelOperations;
- (void)operationFinished:(id)arg1;
- (void)applicationWillEnterForeground;
- (void)applicationDidEnterBackground;
- (BOOL)shouldExcludeFromNavigationHistory;
- (id)initWithSection:(id)arg1;
- (void)_startBackgroundRequest;
- (void)_reloadForBackgroundNotification;
- (void)_enqueueRealFetchOperationWithRequestProperties:(id)arg1;
- (BOOL)_isPageSectionSoftwareUpdates:(id)arg1;
- (void)_constructSoftwareUpdatesRequestWithProperties:(id)arg1;
- (BOOL)_URLRequestPropertiesAreForSoftwareUpdates:(id)arg1;
- (void)_reloadBadgeFromApplicationBadge;
- (BOOL)_sectionIncludesSoftwareUpdates:(id)arg1;
- (void)_cancelEnterForegroundTimer;
- (void)_cancelBackgroundRequest;
- (void)_tabBarControllerDidLoad:(id)arg1;
- (void)_softwareLibraryDidChange:(id)arg1;
- (void)dealloc;
- (void)updateQueueRequest:(id)arg1 didReceiveResponse:(id)arg2;
- (void)operation:(id)arg1 failedWithError:(id)arg2;
- (void)_getRotationContentSettings:(struct { BOOL x1; BOOL x2; BOOL x3; BOOL x4; float x5; int x6; }*)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;

@end
