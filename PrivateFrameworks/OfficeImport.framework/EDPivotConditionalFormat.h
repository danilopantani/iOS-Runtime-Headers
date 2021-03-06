/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EDCollection;

@interface EDPivotConditionalFormat : NSObject  {
    unsigned int mPriority;
    int mType;
    int mScope;
    EDCollection *mPivotAreas;
}

+ (id)pivotConditionalFormat;

- (int)type;
- (void)dealloc;
- (id)init;
- (void)setPriority:(unsigned int)arg1;
- (unsigned int)priority;
- (void)setType:(int)arg1;
- (void)setScope:(int)arg1;
- (int)scope;
- (id)pivotAreas;

@end
