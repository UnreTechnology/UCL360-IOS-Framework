//
//  UnreDeviceState.h
//  unrelib
//
//  Created by unre on 2021/5/26.
//

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger,DeviceState) {
    Idle,
    Workinng,
};

@interface UnreDeviceState: NSObject

@property(nonatomic,copy) NSString* state;
@property(nonatomic,copy) NSString* currentTaskId;

@end

NS_ASSUME_NONNULL_END
