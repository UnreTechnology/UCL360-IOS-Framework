//
//  OnDownloadListener.h
//  Ucl360Sdk
//
//  Created by unre on 2021/6/8.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol OnDownloadListener <NSObject>

-(void) onDownload:(NSInteger) process NS_SWIFT_NAME(onDownload(progress:));
-(void) onDownloadFinish:(BOOL)success :(NSInteger) errorCode NS_SWIFT_NAME(onDownloadFinish(success:errorCode:));

@end

NS_ASSUME_NONNULL_END

