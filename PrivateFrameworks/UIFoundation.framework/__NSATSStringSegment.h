/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface __NSATSStringSegment : NSString  {
    struct __CFString { } *_originalString;
    long _originalStringLength;
    struct { 
        int location; 
        int length; 
    } _range;
    const unsigned short *_characters;
    unsigned short _buffer[128];
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (unsigned short)characterAtIndex:(unsigned int)arg1;
- (void)dealloc;
- (oneway void)release;
- (unsigned int)length;
- (void)getCharacters:(unsigned short*)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (const unsigned short*)_fastCharacterContents;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (id)initWithOriginalString:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)_setOriginalString:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;

@end
