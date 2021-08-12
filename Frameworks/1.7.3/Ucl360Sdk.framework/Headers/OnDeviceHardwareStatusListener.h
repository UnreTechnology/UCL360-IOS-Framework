//
//  OnDeviceHardwareStatusListener.h
//  Ucl360Sdk
//
//  Created by unre on 2021/6/8.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol OnDeviceHardwareStatusListener <NSObject>
    
-(void) onStatusCallBack:(BOOL) isLowBattery :(BOOL) isLowSpace NS_SWIFT_NAME(onStatusCallBack(isLowBattery:isLowSpace:)) ;

@end

NS_ASSUME_NONNULL_END
