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
#import "OnWifiConnectListener.h"

NS_ASSUME_NONNULL_BEGIN

@interface UnreUtils : NSObject
    
// 设备初始化
+ (BOOL) initSDK:(NSString*)appId :(NSString*)appSecret :( NSString* _Nonnull)cloudUrl NS_SWIFT_NAME(initSDK(appId:appSecret:cloudUrl:)) ;

// wifi连接
// 跳转wifi连结界面
+ (void) connect;
+ (BOOL) isConnected;
// 断开wifi连接
+ (void) disConnect;

// 获取设备测量状态
+ (NSString*) getDeviceState NS_SWIFT_NAME(getDeviceState());

// 获取设备信息
+ (NSString*) getDeviceInfo NS_SWIFT_NAME(getDeviceInfo()) ;

// 设备是否工作状态
+ (BOOL) isDeviceWorking;

// 发起测量
//+ (BOOL) startScan:(NSString* )unreMeasurementRegion :(NSString*)ruleId :(NSString*) drawId :(NSString*) extras :(NSString*)standards;
+ (NSString*) startScan:(NSString* )unreMeasurementRegion :(NSString*)ruleId :(NSString*) drawId :(NSString*) extras :(NSString*)standards;

+ (NSString*) startScan:(NSString* )unreMeasurementRegion :(NSString*)ruleId :(NSString*) drawId :(NSString*) extras :(NSString*)standards :(NSString*)coordinate :(NSString*) oldIds :(NSString*) avoidanceRule;
 
// 测量回调
+ (BOOL) registerScanCallback:(id<OnScanListener>) listener;

+ (NSArray<UnreMeasurementRules*>*) getRules:(NSString*) ruleId;

// 获取可用测量规则
+ (NSString*) getAvailableMeasurementRules:(NSString*)stageId NS_SWIFT_NAME(getAvailableMeasurementRules(stageId:));

//+ (NSString*) getScanResult:(NSString*) taskId;

// 图纸或爆点数据下载
+ (BOOL) download:(NSString*)projectId :(NSString*)stageId :(NSString*)draws :(id<OnDownloadListener>)listener;

// 获取房型图
+ (NSString*) getBoundingBox:(NSString*) drawId NS_SWIFT_NAME(getBoundingBox(drawId:));

// app报告处理完成
+ (BOOL) reportFinish:(NSString*) region :(NSString*)extras :(BOOL) isSuccess;
+ (BOOL) reportFinish:(NSString*) region :(NSString*)extras :(BOOL) isSuccess :(NSString*) newPointId;

// 手动模糊匹配后,更新scanResult
+ (NSString*) updateScanMatchMatrix:(NSString*) region :(NSString*) newMatrix : (NSString*)extras  NS_SWIFT_NAME(updateScanMatchMatrix(region:newMatrix:extras:));

// 更新scanResult
+ (BOOL) updateScanResult:(NSString*)region :(NSString*)scanResult :(NSString*)extras NS_SWIFT_NAME(updateScanResult(region:scanResult:extras:));

+ (NSString*) updateScanMatchWallMapping:(NSString*)region :(NSString*) drawWallId :(NSString*) scanWallId :(NSString*)extras :(NSString*) oldIds NS_SWIFT_NAME(updateScanMatchWallMapping(region:drawWallId:scanWallId:extras:oldIds));

// 监听设备电量 空间
+ (BOOL) registerHardwareListener:(id<OnDeviceHardwareStatusListener>) listener;
+ (BOOL) unRegisterHardwareListener;

+ (BOOL) registerWifiListener:(id<OnWifiConnectListener>) listener NS_SWIFT_NAME(registerWifiListener(listener:));
+ (BOOL) unRegisterWifiListener;

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

//+ (NSString*) getPointCloudPath:(NSString*)region :(NSString*)extras;
+ (NSString*) multiStationCombine:(NSString*)regionns :(NSString*) extras :(NSString*)drawType NS_SWIFT_NAME(multiStationCombine(regions:extras:drawType:));
+ (NSString*) multiStationCombineTest;

+ (NSString*) getScanResult:(NSString *)region :(NSString*) extras NS_SWIFT_NAME(getScanResult(region:extras:));
+ (bool) deleteTask:(NSString *)region :(NSString*) extras NS_SWIFT_NAME(deleteTask(region:extras:));

//+ (NSString*) deleteWallData:(NSString*)regions :(NSString*)extras :(NSString*) ID;

+(NSString*) deleteWallData:(NSString*)path :(NSString*)ID;

+(BOOL) collectTaskInfomations:(NSString* )region :(NSString*)extras;

+(BOOL) uploadTaskInnfomations:(NSString*) region :(NSString*) extra :(NSString*) appVersion :(NSString*)drawId :(NSString*)describe:(NSString*)person;

@end

NS_ASSUME_NONNULL_END
