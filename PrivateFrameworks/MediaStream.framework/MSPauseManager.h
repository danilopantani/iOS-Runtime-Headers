/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
 */

@class <MSPauseManagerDelegate>, NSMutableDictionary;

@interface MSPauseManager : NSObject  {
    NSMutableDictionary *_UUIDToTimerMap;
    <MSPauseManagerDelegate> *_delegate;
}

@property <MSPauseManagerDelegate> * delegate;

+ (id)sharedManager;

- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)unpauseUUID:(id)arg1;
- (void)pingPauseUUID:(id)arg1;
- (void)_removeTimerUUID:(id)arg1;
- (void)_addPauseUUID:(id)arg1;
- (void)_timerDidFire:(id)arg1;
- (BOOL)isPaused;

@end
