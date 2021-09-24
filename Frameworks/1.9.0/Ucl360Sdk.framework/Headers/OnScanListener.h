//
//  OnScanListener.h
//  unrelib
//
//  Created by unre on 2021/6/1.
//

#import <Foundation/Foundation.h>
#import "ScanStatus.h"
#import "ScanError.h"

NS_ASSUME_NONNULL_BEGIN

@protocol OnScanListener <NSObject>

-(void) onScanStateReport:(ScanStatus) status :(NSString*) region :(NSString*)extras :(NSInteger) progress NS_SWIFT_NAME(onScanStateReport(status:region:extras:progress:));

-(void) onScanFinished:(BOOL) isSuccess :(NSString* )data :(NSString*)region :(NSString*)extras :(ScanError) error NS_SWIFT_NAME(onScanFinished(isSuccess:data:region:extras:error:));

@end

NS_ASSUME_NONNULL_END


