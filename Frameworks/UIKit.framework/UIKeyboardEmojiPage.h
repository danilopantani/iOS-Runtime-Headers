/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UITouch, NSArray, UIKeyboardEmojiInputController, UIKeyboardEmojiView;

@interface UIKeyboardEmojiPage : UIView  {
    NSArray *_emoji;
    int _numRows;
    int _numCols;
    int _numPages;
    struct CGPoint { 
        float x; 
        float y; 
    } _emojiPadding;
    struct CGPoint { 
        float x; 
        float y; 
    } _margin;
    struct CGSize { 
        float width; 
        float height; 
    } _emojiSize;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _keyActivationRect;
    UITouch *_activeTouch;
    BOOL _needsLayout;
    BOOL _needsEmojiRendering;
    UIKeyboardEmojiView *_touched;
    UIKeyboardEmojiView *_pendingDisplay;
    UIKeyboardEmojiView *_onDisplay;
    UIKeyboardEmojiInputController *_inputController;
}

@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } keyActivationRect;
@property(readonly) int emojiCountPerPage;
@property UIKeyboardEmojiInputController * inputController;
@property BOOL needsLayout;
@property(retain) UITouch * activeTouch;
@property(retain) NSArray * emoji;
@property(retain) UIKeyboardEmojiView * touched;
@property(retain) UIKeyboardEmojiView * pendingDisplay;
@property(retain) UIKeyboardEmojiView * onDisplay;


- (void)dealloc;
- (void)setKeyActivationRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })keyActivationRect;
- (void)generateSubviews;
- (int)takeEmoji:(id)arg1 fromIndex:(int)arg2;
- (int)emojiCountPerPage;
- (void)touchMoved:(id)arg1;
- (void)touchBegan:(id)arg1;
- (id)inputController;
- (void)removeDisplayedPopup:(id)arg1;
- (void)showPendingPopup:(id)arg1;
- (id)closestForPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)touchEnded:(id)arg1;
- (void)checkForStalePopup:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })emojiRectForPoint:(struct CGPoint { float x1; float x2; })arg1 index:(unsigned int*)arg2;
- (id)pendingDisplay;
- (id)touched;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForRow:(int)arg1 Col:(int)arg2;
- (void)deactivatePopUps;
- (void)setInputController:(id)arg1;
- (void)setTouched:(id)arg1;
- (void)setOnDisplay:(id)arg1;
- (void)setPendingDisplay:(id)arg1;
- (id)onDisplay;
- (void)cancelPendingPopupChanges;
- (void)updateLayoutConstants;
- (void)setEmoji:(id)arg1;
- (id)emoji;
- (void)setNeedsLayout:(BOOL)arg1;
- (void)touchCancelled:(id)arg1;
- (id)activeTouch;
- (void)setActiveTouch:(id)arg1;
- (BOOL)needsLayout;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)removeFromSuperview;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end
