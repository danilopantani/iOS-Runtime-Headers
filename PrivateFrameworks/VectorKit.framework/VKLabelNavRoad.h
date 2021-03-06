/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class VKLabelNavJunction, NSString, VKLabelTile, VKLabelNavRoadLabel;

@interface VKLabelNavRoad : NSObject  {
    VKLabelTile *_tile;
    struct { struct { id x_1_1_1; char *x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned int x_1_1_7; unsigned long long x_1_1_8; BOOL x_1_1_9; unsigned long long x_1_1_10; float x_1_1_11; id x_1_1_12; int x_1_1_13; } x1; unsigned int x2; unsigned int x3; int x4; int x5; unsigned int x6; unsigned int x7; struct { float x_8_1_1; float x_8_1_2; float x_8_1_3; float x_8_1_4; } x8; struct { /* ? */ } *x9; } *_data;
    int _vertexIndexA;
    int _vertexIndexB;
    struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; } *_junctionA;
    struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; } *_junctionB;
    VKLabelNavJunction *_navJunctionA;
    struct { 
        float x; 
        float y; 
    } _direction;
    BOOL _isRoadLabelUnique;
    BOOL _onRoute;
    BOOL _isStartOfRoadName;
    BOOL _isInGuidance;
    BOOL _areLabelsDisabled;
    struct { 
        unsigned int index; 
        float offset; 
    } _routeOffset;
    float _routeCrossProduct;
    int _intraRoadPriority;
    double _length;
    NSString *_name;
    NSString *_shieldDisplayGroup;
    NSString *_shieldGroup;
    VKLabelNavRoadLabel *_roadSign;
    VKLabelNavRoadLabel *_roadShield;
    BOOL _isAwayFromRoute;
}

@property(readonly) VKLabelTile * tile;
@property(readonly) NSString * name;
@property(readonly) NSString * shieldDisplayGroup;
@property(readonly) NSString * shieldGroup;
@property(readonly) struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; }* junctionB;
@property struct { float x1; float x2; } direction;
@property BOOL onRoute;
@property BOOL isStartOfRoadName;
@property BOOL isInGuidance;
@property BOOL areLabelsDisabled;
@property struct { unsigned int x1; float x2; } routeOffset;
@property float routeCrossProduct;
@property int intraRoadPriority;
@property BOOL isRoadLabelUnique;
@property(readonly) BOOL isAwayFromRoute;
@property(readonly) BOOL suppressRoadSignIfShieldPresent;
@property(readonly) BOOL isRamp;
@property(readonly) BOOL isOnewayToJunction;


- (id)name;
- (id)description;
- (id).cxx_construct;
- (void)dealloc;
- (double)length;
- (struct { float x1; float x2; })direction;
- (void)setDirection:(struct { float x1; float x2; })arg1;
- (void)setIsRoadLabelUnique:(BOOL)arg1;
- (BOOL)isRoadLabelUnique;
- (void)setAreLabelsDisabled:(BOOL)arg1;
- (BOOL)areLabelsDisabled;
- (void)setIntraRoadPriority:(int)arg1;
- (int)intraRoadPriority;
- (struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; }*)junctionB;
- (void)setRouteOffset:(struct { unsigned int x1; float x2; })arg1;
- (struct { unsigned int x1; float x2; })routeOffset;
- (void)setRouteCrossProduct:(float)arg1;
- (float)routeCrossProduct;
- (void)setIsInGuidance:(BOOL)arg1;
- (BOOL)isInGuidance;
- (void)setIsStartOfRoadName:(BOOL)arg1;
- (BOOL)isStartOfRoadName;
- (void)setOnRoute:(BOOL)arg1;
- (void)createLabelWithLabelContext:(struct LabelContext { id x1; id x2; id x3; id x4; struct ViewTransform {} *x5; int x6; int x7; unsigned int x8; float x9; boolx10; boolx11; boolx12; boolx13; boolx14; boolx15; int x16; struct { double x_17_1_1; double x_17_1_2; double x_17_1_3; double x_17_1_4; } x17; struct { float x_18_1_1; float x_18_1_2; float x_18_1_3; float x_18_1_4; } x18; struct { float x_19_1_1; float x_19_1_2; float x_19_1_3; float x_19_1_4; } x19; struct { float x_20_1_1; float x_20_1_2; float x_20_1_3; float x_20_1_4; } x20; int x21; }*)arg1 isShieldLabel:(BOOL)arg2 desiredOffsetDistance:(float)arg3 maxOffsetDistance:(float)arg4 minJunctionDistance:(float)arg5 roadGraph:(id)arg6;
- (id)shieldDisplayGroup;
- (id)shieldGroup;
- (BOOL)matchesRoad:(id)arg1;
- (BOOL)matchesRoadEdge:(const struct { struct { /* ? */ } *x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; struct { /* ? */ } *x6; struct { /* ? */ } *x7; }*)arg1;
- (void)getRoadEdge:(struct { struct { /* ? */ } *x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; struct { /* ? */ } *x6; struct { /* ? */ } *x7; }*)arg1;
- (BOOL)isOnewayToJunction;
- (BOOL)suppressRoadSignIfShieldPresent;
- (id)initWithRoadEdge:(const struct { struct { /* ? */ } *x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; struct { /* ? */ } *x6; struct { /* ? */ } *x7; }*)arg1 navJunctionA:(id)arg2 routeOffset:(struct { unsigned int x1; float x2; })arg3 tile:(id)arg4;
- (id)_newLabelWithLabelContext:(struct LabelContext { id x1; id x2; id x3; id x4; struct ViewTransform {} *x5; int x6; int x7; unsigned int x8; float x9; boolx10; boolx11; boolx12; boolx13; boolx14; boolx15; int x16; struct { double x_17_1_1; double x_17_1_2; double x_17_1_3; double x_17_1_4; } x17; struct { float x_18_1_1; float x_18_1_2; float x_18_1_3; float x_18_1_4; } x18; struct { float x_19_1_1; float x_19_1_2; float x_19_1_3; float x_19_1_4; } x19; struct { float x_20_1_1; float x_20_1_2; float x_20_1_3; float x_20_1_4; } x20; int x21; }*)arg1 isShieldLabel:(BOOL)arg2 worldPoint:(struct { double x1; double x2; double x3; })arg3;
- (BOOL)_worldPointForRoadOffset:(float)arg1 worldPoint:(struct { double x1; double x2; double x3; }*)arg2;
- (BOOL)onRoute;
- (id)labelWithType:(BOOL)arg1;
- (BOOL)hasShield;
- (BOOL)isRamp;
- (BOOL)isAwayFromRoute;
- (id)tile;

@end
