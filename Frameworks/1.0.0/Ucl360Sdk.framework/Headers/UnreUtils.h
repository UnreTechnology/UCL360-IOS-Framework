//
//  NSObject+UnreUtils.h
//  lib
//
//  Created by unre on 2021/5/25.
//

#import <Foundation/Foundation.h>
#import "UnreDeviceInfo.h"
#import "UnreDeviceState.h"
#import "OnScanListener.h"
#import "UnreMeasurementRules.h"

NS_ASSUME_NONNULL_BEGIN

@interface UnreUtils : NSObject
    
+(BOOL) initSDK:(NSString*)appId :(NSString*)appSecret NS_SWIFT_NAME(initSDK(appId:appSecret:)) ;

//+(BOOL) clean;

// 设备信息
+(UnreDeviceInfo*) getDeviceInfo NS_SWIFT_NAME(getDeviceInfo()) ;

// wifi连接
+ (void) connect;
+ (BOOL) isConnected;
+ (void) disConnect;

+ (BOOL) interrupt;

+ (BOOL) startScan:(NSString* )unreMeasurementRegion :(NSString*)ruleId :(NSString*) drawId :( id <OnScanListener> )onScanListener;
 
+ (NSArray<UnreMeasurementRules*>*) getRules:(NSString*) ruleId;


@end

NS_ASSUME_NONNULL_END
