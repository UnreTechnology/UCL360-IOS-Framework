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

-(void) onDownloadMessage:(NSString*) message;
-(void) onDownloadFinish:(BOOL)success :(int) errorCode;

@end

NS_ASSUME_NONNULL_END

#endif /* OnDownloadListener_h */


