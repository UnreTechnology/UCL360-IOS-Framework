//
//  UnreDeviceInfo.h
//  lib
//
//  Created by unre on 2021/5/25.
//


#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface UnreDeviceInfo: NSObject

@property(nonatomic,copy) NSString* SN;
@property(nonatomic,copy) NSString* Version;
@property(nonatomic,copy) NSString* MCUVersion;
@property(nonatomic,copy) NSString* ImuId;
@property(nonatomic,copy) NSString* LidarId;
@property(nonatomic,copy) NSString* MotorId;


@end

NS_ASSUME_NONNULL_END

