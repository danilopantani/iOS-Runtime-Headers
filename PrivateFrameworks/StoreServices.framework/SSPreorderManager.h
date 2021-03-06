/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class SSXPCConnection, NSArray, NSObject<OS_dispatch_queue>;

@interface SSPreorderManager : NSObject  {
    SSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSArray *_itemKinds;
    SSXPCConnection *_observerConnection;
    NSObject<OS_dispatch_queue> *_observerQueue;
    struct __CFArray { } *_observers;
    NSArray *_preorders;
}

@property(readonly) NSArray * itemKinds;
@property(readonly) NSArray * preorders;

+ (id)musicStoreItemKinds;
+ (id)bookStoreItemKinds;

- (void)addObserver:(id)arg1;
- (id)initWithItemKinds:(id)arg1;
- (void)reloadFromServer;
- (void)removeObserver:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)itemKinds;
- (void)cancelPreorders:(id)arg1 withCompletionBlock:(id)arg2;
- (void)_registerAsObserver;
- (void)_sendMessageToObservers:(SEL)arg1;
- (void)_handleMessage:(id)arg1 fromServerConnection:(id)arg2;
- (void)_connectAsObserver;
- (id)preorders;

@end
