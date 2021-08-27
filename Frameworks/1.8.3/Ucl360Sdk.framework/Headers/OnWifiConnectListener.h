//
//  OnWifiConnectListener.h
//  Ucl360Sdk
//
//  Created by unre on 2021/8/3.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol OnWifiConnectListener <NSObject>
    
-(void) onDeivceConencted:(BOOL)isSuccess;

@end

NS_ASSUME_NONNULL_END
