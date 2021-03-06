/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSObject<OS_dispatch_queue>, NSString, NSArray;

@interface HSBrowser : NSObject <NSNetServiceDelegate> {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _addLibraryHandler;

    NSArray *_availableLibraries;
    struct _DNSServiceRef_t { } *_dnsService;
    NSObject<OS_dispatch_queue> *_dnsServiceQueue;
    NSString *_homeSharingGroupID;
    BOOL _isBrowsing;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _removeLibraryHandler;

}

@property(copy) NSString * homeSharingGroupID;
@property(readonly) NSArray * availableLibraries;


- (void)_startWithCurrentRetryCount:(unsigned int)arg1 maximumRetryCount:(unsigned int)arg2 addLibraryHandler:(id)arg3 removeLibraryHandler:(id)arg4;
- (id)availableLibraries;
- (void)startWithAddLibraryHandler:(id)arg1 removeLibraryHandler:(id)arg2;
- (void)setHomeSharingGroupID:(id)arg1;
- (id)homeSharingGroupID;
- (void)dealloc;
- (id)init;
- (void)stop;
- (void)_didRemoveService:(id)arg1 moreComing:(BOOL)arg2;
- (void)_didFindService:(id)arg1 moreComing:(BOOL)arg2;

@end
