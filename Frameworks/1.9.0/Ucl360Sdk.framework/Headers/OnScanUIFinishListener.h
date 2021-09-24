//
//  OnScanUIFinishListener.h
//  Ucl360Sdk
//
//  Created by unre on 2021/6/18.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol OnScanUIFinishListener <NSObject>
    
-(void)  onScanUIFinish:(BOOL)success :(NSString*) data NS_SWIFT_NAME(onScanUIFinish(success:data:)) ;

@end

NS_ASSUME_NONNULL_END
