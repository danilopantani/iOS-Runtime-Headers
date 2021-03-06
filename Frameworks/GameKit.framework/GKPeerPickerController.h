/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKPeerPickerViewController, <GKPeerPickerControllerDelegate>;

@interface GKPeerPickerController : NSObject  {
    id _picker;
}

@property unsigned int connectionTypesMask;
@property <GKPeerPickerControllerDelegate> * delegate;
@property(getter=isVisible,readonly) BOOL visible;
@property(readonly) GKPeerPickerViewController * pickerViewController;

+ (void)initialize;

- (id)peerPickerViewController:(id)arg1 sessionForConnectionType:(unsigned int)arg2;
- (void)peerPickerViewController:(id)arg1 didSelectConnectionType:(unsigned int)arg2;
- (void)peerPickerViewController:(id)arg1 didConnectPeer:(id)arg2 toSession:(id)arg3;
- (void)peerPickerViewControllerDidCancel:(id)arg1;
- (unsigned int)connectionTypesMask;
- (id)pickerViewController;
- (void)_createPicker;
- (void)setConnectionTypesMask:(unsigned int)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (id)init;
- (void)dismiss;
- (BOOL)isVisible;
- (void)show;

@end
