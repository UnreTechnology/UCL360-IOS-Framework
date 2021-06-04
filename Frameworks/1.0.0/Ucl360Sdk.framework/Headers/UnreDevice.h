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
-(void) startScan:(NSString*) unreMeasurementRegion :(NSString*) ruleID :(NSString*) drawId :(id<OnScanListener>) listener;
-(void) startScanOnlyQueryState :(NSString*) unreMeasurementRegion :(id<OnScanListener>) listener;

@end

NS_ASSUME_NONNULL_END
