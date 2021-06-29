//
//  ScanError.h
//  unrelib
//
//  Created by unre on 2021/5/26.
//

#ifndef ScanError_h
#define ScanError_h
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger,ScanError)
{
    /**正常*/
    NO_ERROR,
    /**未知错误*/
    UNKNOW_ERROR,
    /**设备电量不足*/
    DEVICE_LOW_POWER,
    /**设备空间不足*/
    DEVICE_LOW_SPACE,
    /**设备繁忙（上个任务未结束）*/
    DEVICE_BUSY,
    /**设备APP未打开*/
    APP_NOT_OPEN,
    /**网络错误*/
    NETWORK_ERROR,
    /**请求失败*/
    REQUEST_FAIL,
    /**扫描失败*/
    SCAN_FAIL,
    /**强制中断*/
    INTERRUPT,
    /**文件保存出错*/
    WRITE_ERROR,
    /**数据格式出错*/
    FORMAT_ERROR,
    /**数据同步出错*/
    SYNC_ERROR
    
};


NS_ASSUME_NONNULL_END

#endif /* ScanError_h */