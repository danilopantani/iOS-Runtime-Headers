/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface MFQuotedPrintableEncoder : MFBaseFilterDataConsumer  {
    unsigned long _line;
    unsigned long _matchedFrom;
    unsigned char _lastHorizontalWhitespace;
    BOOL _forTextPart;
    BOOL _lastWasNewLine;
    BOOL _forHeader;
}

@property BOOL forTextPart;
@property BOOL forHeader;

+ (unsigned long)requiredSizeToEncodeHeaderBytes:(const char *)arg1 length:(unsigned long)arg2;

- (BOOL)forHeader;
- (BOOL)forTextPart;
- (void)setForHeader:(BOOL)arg1;
- (int)appendData:(id)arg1;
- (void)done;
- (void)setForTextPart:(BOOL)arg1;

@end
