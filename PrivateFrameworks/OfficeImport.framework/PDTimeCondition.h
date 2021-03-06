/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class PDAnimationTargetElement;

@interface PDTimeCondition : NSObject  {
    BOOL mHasDelay;
    int mDelay;
    int mTriggerEvent;
    PDAnimationTargetElement *mTgtElement;
}


- (void)dealloc;
- (id)init;
- (void)setDelay:(int)arg1;
- (int)delay;
- (void)setTgtElement:(id)arg1;
- (id)tgtElement;
- (int)triggerEvent;
- (BOOL)hasDelay;
- (void)setTriggerEvent:(int)arg1;

@end
