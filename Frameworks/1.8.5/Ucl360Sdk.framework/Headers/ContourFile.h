//
//  ContourFile.h
//  Ucl360Sdk
//
//  Created by unre on 2021/6/10.
//

#ifndef ContourFile_h
#define ContourFile_h

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ContourMapStandard :NSObject

@property(nonatomic,copy) NSString* desc;
@property(nonatomic) NSArray* RGB;

@end

@interface ContourFile: NSObject

@property(nonatomic,copy) NSString* wallid;
@property(nonatomic,copy) NSString* path;
@property(nonatomic,assign) int width;
@property(nonatomic,assign) int height;
@property(nonatomic) NSArray<ContourMapStandard*>* mapStandard;

@end

NS_ASSUME_NONNULL_END

#endif /* ContourFile_h */
