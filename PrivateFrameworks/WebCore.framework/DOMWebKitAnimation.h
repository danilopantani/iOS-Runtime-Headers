/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@class NSString;

@interface DOMWebKitAnimation : DOMObject  {
}

@property(readonly) NSString * name;
@property(readonly) double duration;
@property double elapsedTime;
@property(readonly) double delay;
@property(readonly) int iterationCount;
@property(readonly) BOOL paused;
@property(readonly) BOOL ended;
@property(readonly) unsigned short direction;
@property(readonly) unsigned short fillMode;


- (id)name;
- (void)dealloc;
- (void)pause;
- (BOOL)paused;
- (void)finalize;
- (unsigned short)direction;
- (double)delay;
- (double)duration;
- (void)play;
- (unsigned short)fillMode;
- (BOOL)ended;
- (int)iterationCount;
- (void)setElapsedTime:(double)arg1;
- (double)elapsedTime;

@end
