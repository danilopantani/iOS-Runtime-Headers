/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

@class UIView;

@interface HorizontalViewScroller : UIScrollView <UIScrollViewDelegate> {
    UIView *view;
    unsigned int index;
}

@property(retain) UIView * view;
@property unsigned int index;


- (void)dealloc;
- (void)restoreCenterPoint:(struct CGPoint { float x1; float x2; })arg1 scale:(float)arg2;
- (float)scaleToRestoreAfterRotation;
- (struct CGPoint { float x1; float x2; })pointToCenterAfterRotation;
- (void)displayImage:(id)arg1;
- (struct CGPoint { float x1; float x2; })minimumContentOffset;
- (struct CGPoint { float x1; float x2; })maximumContentOffset;
- (void)setMaxMinZoomScalesForCurrentBounds;
- (void)displayView:(id)arg1;
- (void)setIndex:(unsigned int)arg1;
- (unsigned int)index;
- (void)setView:(id)arg1;
- (id)view;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end
