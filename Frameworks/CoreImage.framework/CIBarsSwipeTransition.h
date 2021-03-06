/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class CIImage, NSNumber;

@interface CIBarsSwipeTransition : CIFilter  {
    CIImage *inputImage;
    CIImage *inputTargetImage;
    NSNumber *inputAngle;
    NSNumber *inputWidth;
    NSNumber *inputBarOffset;
    NSNumber *inputTime;
}

@property(retain) CIImage * inputImage;
@property(retain) CIImage * inputTargetImage;
@property(retain) NSNumber * inputAngle;
@property(retain) NSNumber * inputWidth;
@property(retain) NSNumber * inputBarOffset;
@property(retain) NSNumber * inputTime;

+ (id)customAttributes;

- (id)inputBarOffset;
- (void)setInputBarOffset:(id)arg1;
- (id)inputTime;
- (void)setInputTargetImage:(id)arg1;
- (id)inputTargetImage;
- (void)setInputTime:(id)arg1;
- (id)inputWidth;
- (void)setInputWidth:(id)arg1;
- (void)setInputAngle:(id)arg1;
- (id)inputAngle;
- (id)_kernel;
- (void)setInputImage:(id)arg1;
- (id)inputImage;
- (id)outputImage;
- (void)setDefaults;

@end
