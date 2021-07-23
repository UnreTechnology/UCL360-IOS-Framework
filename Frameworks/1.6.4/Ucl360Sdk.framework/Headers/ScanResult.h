//
//  NSObject+ScanResult.h
//  unrelib
//
//  Created by unre on 2021/5/26.
//

#import <Foundation/Foundation.h>
#import "ContourFile.h"
#import "MeasureData.h"

NS_ASSUME_NONNULL_BEGIN

@interface ScanResult: NSObject

@property NSString* version;
@property NSString* unreTaskId;
@property NSString* ispass;

@property NSString* deviceId;
@property NSString* deviceVersion;

@property MeasureData* data;

@property NSArray<ContourFile*>* files;

@property double credibility;
@property NSArray<NSNumber*>* matrix;
@property NSDictionary* mapping;
@property NSDictionary* drawing_outline;
@property NSDictionary* scan_roomContour;
@property NSDictionary* bestForMatch;

@end

NS_ASSUME_NONNULL_END
