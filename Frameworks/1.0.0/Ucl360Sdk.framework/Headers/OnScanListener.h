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

-(void) onScanStateReport:(ScanStatus) status :(NSString*) taskId :(int) progress;
-(void) onScanFinished:(BOOL) isSuccess: (NSString* )data :(ScanError) error;

@end

NS_ASSUME_NONNULL_END
