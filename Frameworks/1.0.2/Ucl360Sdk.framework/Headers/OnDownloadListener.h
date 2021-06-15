//
//  OnDownloadListener.h
//  Ucl360Sdk
//
//  Created by unre on 2021/6/8.
//

#ifndef OnDownloadListener_h
#define OnDownloadListener_h

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol OnDownloadListener <NSObject>

-(void) onDownload:(NSInteger*) process;
-(void) onDownloadFinish:(BOOL)success :(NSInteger) errorCode;

@end

NS_ASSUME_NONNULL_END

#endif /* OnDownloadListener_h */


