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
@property NSString* deviceId;
@property NSString* deviceVersion;

@property MeasureData* data;
@property NSArray<ContourFile*>* files;

@end

NS_ASSUME_NONNULL_END
