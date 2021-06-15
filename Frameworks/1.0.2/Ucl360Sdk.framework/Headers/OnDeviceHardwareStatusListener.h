//
//  OnDeviceHardwareStatusListener.h
//  Ucl360Sdk
//
//  Created by unre on 2021/6/8.
//

#ifndef OnDeviceHardwareStatusListener_h
#define OnDeviceHardwareStatusListener_h


#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol OnDeviceHardwareStatusListener <NSObject>
    
-(void) onStatusCallBack:(BOOL) isLowBattery :(BOOL) isLowSpace;

@end

NS_ASSUME_NONNULL_END


#endif /* OnDeviceHardwareStatusListener_h */
