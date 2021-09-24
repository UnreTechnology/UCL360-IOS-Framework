//
//  ScanStatus.h
//  unrelib
//
//  Created by unre on 2021/6/1.
//

#ifndef ScanStatus_h
#define ScanStatus_h

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger,ScanStatus)
{
    /**扫描准备中*/
    PENDING,
    /**扫描中*/
    SCANNING,
    /**数据分析中*/
    ANALYZING,
    /**获取数据*/
    SYNC,
    /**扫描成功*/
    FINISHED,
    /**扫描失败*/
    FAILED
} NS_SWIFT_NAME(ScanStatus) ;

NS_ASSUME_NONNULL_END
#endif /* ScanStatus_h */
