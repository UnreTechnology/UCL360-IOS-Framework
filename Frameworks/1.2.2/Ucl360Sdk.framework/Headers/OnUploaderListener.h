//
//  OnUploaderListener.h
//  Ucl360Sdk
//
//  Created by unre on 2021/6/18.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol OnUploaderListener <NSObject>
    
-(void) onUploadFinish:(BOOL)isSuccess :(NSInteger)failCount NS_SWIFT_NAME (onUploadFinish(isSuccess:failCount:)) ;

-(void) onUpload:(BOOL) isSuccess :(NSInteger) completeSize :(NSInteger) all :(NSString*)region NS_SWIFT_NAME (onUpload(isSuccess:completeSize:all:region:)) ;

@end

NS_ASSUME_NONNULL_END
