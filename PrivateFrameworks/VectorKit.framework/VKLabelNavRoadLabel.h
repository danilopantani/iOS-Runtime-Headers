/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class VKLabelNavRoad, NSString;

@interface VKLabelNavRoadLabel : NSObject  {
    struct shared_ptr<vk::Label> { 
        struct Label {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    } _label;
    VKLabelNavRoad *_road;
    NSString *_displayGroup;
    BOOL _isShield;
    unsigned int _displayID;
}

@property VKLabelNavRoad * road;
@property(readonly) const struct shared_ptr<vk::Label> { struct Label {} *x1; struct __shared_weak_count {} *x2; }* label;
@property(readonly) BOOL isShield;
@property unsigned int displayID;

+ (id)displayGroupForShieldLabelOnRoad:(id)arg1;

- (id)description;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (const struct shared_ptr<vk::Label> { struct Label {} *x1; struct __shared_weak_count {} *x2; }*)label;
- (unsigned int)displayID;
- (BOOL)isShield;
- (id)displayGroup;
- (id)initWithRoad:(id)arg1 label:(const struct shared_ptr<vk::Label> { struct Label {} *x1; struct __shared_weak_count {} *x2; }*)arg2;
- (void)setDisplayID:(unsigned int)arg1;
- (void)setRoad:(id)arg1;
- (id)road;

@end
