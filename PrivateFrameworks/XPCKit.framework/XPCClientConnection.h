/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/XPCKit.framework/XPCKit
 */

@class NSString, NSObject<OS_dispatch_queue>, NSObject<OS_xpc_object>, <XPCClientConnectionDelegate>;

@interface XPCClientConnection : NSObject  {
    NSString *_serviceName;
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    <XPCClientConnectionDelegate> *_delegate;
}

@property(readonly) <XPCClientConnectionDelegate> * delegate;


- (void)sendMessage:(id)arg1 withHandler:(id)arg2;
- (void)_reallySendMessage:(id)arg1 handler:(id)arg2 sequence:(unsigned long)arg3 retryCount:(unsigned long)arg4;
- (void)_handleConnectionEvent:(id)arg1;
- (id)delegate;
- (id)debugDescription;
- (void).cxx_destruct;
- (id)initWithServiceName:(id)arg1 delegate:(id)arg2;
- (void)shutDownCompletionBlock:(id)arg1;
- (void)_handleIncomingMessage:(id)arg1;

@end
