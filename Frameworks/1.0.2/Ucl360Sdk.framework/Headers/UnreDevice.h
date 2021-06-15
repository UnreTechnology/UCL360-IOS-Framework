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

-(BOOL) startScan:(NSString *)unreMeasurementRegion :(NSString *)ruleId :(NSString *)drawId :(NSString*) extras;

-(void) registerScanCallback:(id<OnScanListener>) listener;

-(void) startScanOnlyQueryState :(NSString*) unreMeasurementRegion :(id<OnScanListener>) listener;

-(BOOL) isDeviceWorking;

@end

NS_ASSUME_NONNULL_END
