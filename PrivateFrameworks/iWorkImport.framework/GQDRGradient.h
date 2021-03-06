/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface GQDRGradient : NSObject <GQDNameMappable> {
    struct __CFArray { } *mStops;
    int mType;
    float mOpacity;
    float mAngle;
    struct CGPoint { 
        float x; 
        float y; 
    } mStart;
    struct CGPoint { 
        float x; 
        float y; 
    } mEnd;
}

+ (const struct StateSpec { int (**x1)(); char *x2; int x3; int x4; struct Action {} *x5; int (*x6)(); int (*x7)(); int (*x8)(); struct ActionFinder {} *x9; }*)stateForReading;

- (int)type;
- (id).cxx_construct;
- (void)dealloc;
- (float)angle;
- (struct CGPoint { float x1; float x2; })end;
- (struct CGPoint { float x1; float x2; })start;
- (float)opacity;
- (int)readAttributesFromReader:(struct _xmlTextReader { }*)arg1;
- (struct __CFArray { }*)stops;

@end
