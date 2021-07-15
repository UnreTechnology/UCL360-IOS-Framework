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
#import "OnUploaderListener.h"

NS_ASSUME_NONNULL_BEGIN

@interface UnreUtils : NSObject
    
// 设备初始化
+ (BOOL) initSDK:(NSString*)appId :(NSString*)appSecret :(NSString*) cloudUrl NS_SWIFT_NAME(initSDK(appId:appSecret:cloudUrl)) ;

// wifi连接
// 跳转wifi连结界面
+ (void) connect;
+ (BOOL) isConnected;
// 断开wifi连接
+ (void) disConnect;

// 获取设备测量状态
+ (UnreDeviceState*) getDeviceState NS_SWIFT_NAME(getDeviceState());

// 获取设备信息
+ (UnreDeviceInfo*) getDeviceInfo NS_SWIFT_NAME(getDeviceInfo()) ;

// 设备是否工作状态
+ (BOOL) isDeviceWorking;

// 发起测量
+ (BOOL) startScan:(NSString* )unreMeasurementRegion :(NSString*)ruleId :(NSString*) drawId :(NSString*) extras :(NSString*)standards;

// 测量回调
+ (BOOL) registerScanCallback:(id<OnScanListener>) listener;

+ (NSArray<UnreMeasurementRules*>*) getRules:(NSString*) ruleId;

// 获取可用测量规则
+ (NSString*) getAvailableMeasurementRules:(NSString*)stageId NS_SWIFT_NAME(getAvailableMeasurementRules(stageId:));

+ (NSString*) getScanResult:(NSString*) taskId;

// 图纸或爆点数据下载
+ (BOOL) download:(NSString*)projectId :(NSString*)stageId :(NSString*)draws :(id<OnDownloadListener>)listener;

// 获取房型图
+ (NSString*) getBoundingBox:(NSString*) drawId;

// app报告处理完成
+ (BOOL) reportFinish:(NSString*) region :(NSString*)extras :(BOOL) isSuccess;

// 手动模糊匹配后,更新scanResult
+ (NSString*) updateScanMatchMatrix:(NSString*) region :(NSString*) newMatrix : (NSString*)extras  NS_SWIFT_NAME(updateScanMatchMatrix(region:newMatrix:extras:));

// 更新scanResult
+ (BOOL) updateScanResult:(NSString*)region :(NSString*)scanResult :(NSString*)extras NS_SWIFT_NAME(updateScanResult(region:scanResult:extras:));

+ (NSString*) updateScanMatchWallMapping:(NSString*)region :(NSString*) drawWallId :(NSString*) scanWallId :(NSString*)extras NS_SWIFT_NAME(updateScanMatchWallMapping(region:drawWallId:scanWallId:extras:));

// 监听设备电量 空间
+ (BOOL) registerHardwareListener:(id<OnDeviceHardwareStatusListener>) listener;
+ (BOOL) unRegisterHardwareListener;

+ (void) enableLog:(BOOL) enable;
//
+ (BOOL) interrupt;

// 清理缓存
+ (BOOL) clean:(NSString*) cleanType :(NSString*) stageId;

+ (BOOL) upload:(id<OnUploaderListener>)listener NS_SWIFT_NAME(upload(listener:));

+ (BOOL) inMuteMode:(BOOL) enable;

+ (BOOL) cleanDevice;

+ (void) destory;

+ (BOOL) uploadLogs;

@end

NS_ASSUME_NONNULL_END
