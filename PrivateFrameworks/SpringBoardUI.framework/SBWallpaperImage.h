/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@class NSData;

@interface SBWallpaperImage : UIImage  {
    int _variant;
    NSData *_data;
}

@property(readonly) int variant;
@property(readonly) NSData * data;

+ (void)preheatWallpaperDataForVariant:(int)arg1;
+ (void)clearCachedWallpaper;
+ (id)cachedWallpaperDataForVariant:(int)arg1;

- (id)data;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithVariant:(int)arg1;
- (int)variant;

@end
