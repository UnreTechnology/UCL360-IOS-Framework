//
//  UnreDevice.h
//  unrelib
//
//  Created by unre on 2021/6/1.
//

#import <Foundation/Foundation.h>
#import <OnScanListener.h>


NS_ASSUME_NONNULL_BEGIN

@interface UnreDevice : NSObject

-(void) interrupt;
//-(BOOL) startScan:(NSString *)unreMeasurementRegion :(NSString *)ruleId :(NSString *)drawId :(NSString*) extras :(NSString*) standards;
-(ScanError) startScan:(NSString *)unreMeasurementRegion :(NSString *)ruleId :(NSString *)drawId :(NSString*) extras :(NSString*) standards;

-(ScanError) startScan:(NSString *)unreMeasurementRegion :(NSString *)ruleId :(NSString *)drawId :(NSString*) extras :(NSString*)  standards:(NSArray<NSNumber*>*)coordinate :(NSString*) oldIds :(NSString*)avoidanceRule;

-(void) registerScanCallback:(id<OnScanListener>) listener;

-(BOOL) isDeviceWorking;

-(void) inMuteMode:(BOOL) enable;

-(NSNumber*) getTaskProgress:(NSString*) taskId;
-(NSString*) getTaskState:(NSString*) taskId;

@end

NS_ASSUME_NONNULL_END
