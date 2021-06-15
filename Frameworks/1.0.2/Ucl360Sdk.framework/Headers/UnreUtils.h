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
#import "OnDownloadListener.h"
#import "OnDeviceHardwareStatusListener.h"
#import "UnreMeasurementRules.h"

NS_ASSUME_NONNULL_BEGIN

@interface UnreUtils : NSObject
    
// 设备初始化
+(BOOL) initSDK:(NSString*)appId :(NSString*)appSecret NS_SWIFT_NAME(initSDK(appId:appSecret:)) ;


// wifi连接
// 跳转wifi连结界面
+ (void) connect;
+ (BOOL) isConnected;
// 断开wifi连接
+ (void) disConnect;

// 获取设备测量状态
+(UnreDeviceState*) getDeviceState NS_SWIFT_NAME(getDeviceState());

// 获取设备信息
+(UnreDeviceInfo*) getDeviceInfo NS_SWIFT_NAME(getDeviceInfo()) ;

// 设备是否工作状态
+(BOOL) isDeviceWorking;

// 发起测量
+ (BOOL) startScan:(NSString* )unreMeasurementRegion :(NSString*)ruleId :(NSString*) drawId :(NSString*) extras;

// 测量回调
+ (BOOL) registerScanCallback:(id<OnScanListener>) listener;

+ (NSArray<UnreMeasurementRules*>*) getRules:(NSString*) ruleId;

// 获取可用测量规则
+ (NSString*) getAvailableMeasurementRules:(NSString*)projectId NS_SWIFT_NAME(getAvailableMeasurementRules(projectId:));

+ (NSString*) getScanResult:(NSString*) taskId;

// 图纸或爆点数据下载
+ (BOOL) download:(NSString*)projectId :(NSString*)stageId :(NSString*)draws :(id<OnDownloadListener>)onDownloadListener;

// 获取房型图
+ (NSString*) getBoundingBox:(NSString*) drawId;

// app报告处理完成
+ (BOOL) reportFinish:(NSString*) taskId;

// 监听设备电量 空间
+ (BOOL) registerHardwareListener:(id<OnDeviceHardwareStatusListener>) listener;
+ (BOOL) unRegisterHardwareListener;

+ (void) enableLog:(BOOL) enable;
//
+ (BOOL) interrupt;

// 清理缓存
+ (BOOL) clean;


@end

NS_ASSUME_NONNULL_END
