//
//  UnreDeviceState.h
//  unrelib
//
//  Created by unre on 2021/5/26.
//

#import "UnreMeasurementRegion.h"

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger,DeviceState) {
    Idle,
    Workinng,
};

@interface UnreDeviceStateDetails : NSObject

@property(nonatomic,copy) NSString* currentTaskId;
//@property(nonatomic) UnreMeasurementRegion* region;
@property(nonatomic,copy) NSString* region;
@property(nonatomic,copy) NSString* extras;
@property(nonatomic,copy) NSNumber* progress;

@end

@interface UnreDeviceState: NSObject

@property(nonatomic,copy) NSString* state;
//@property(nonatomic,copy) NSString* currentTaskId;
@property(nonatomic) NSArray<UnreDeviceStateDetails*>* tasks;
@property(nonatomic,copy) NSString* extras;

@end

NS_ASSUME_NONNULL_END
