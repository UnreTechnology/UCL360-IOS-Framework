//
//  ScanError.h
//  unrelib
//
//  Created by unre on 2021/5/26.
//

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
    /**其它错误*/
    OTHER_ERROR,
    /**设备脏污*/
    DIRTY_ERROR,
    /**匹配失败*/
    MATCH_FIAL,
    /**数据分析失败*/
    ANALYZING_FAIL,
    /**扫描失败*/
    SCAN_FAIL,
    /**强制中断*/
    INTERRUPT,
    /**文件保存出错*/
    WRITE_ERROR,
    /**数据格式出错*/
    FORMAT_ERROR,
    /**数据同步出错*/
    SYNC_ERROR,
    /**未初始化*/
    NOT_INIT,
    /**没有对应图纸*/
    NO_DRAWMAP,
    /**同一个任务，前一次未结束*/
    TASK_NOT_FINISH,
    /**超过两个任务在处理*/
    TOO_MUCH_TASKS,
    /**图纸类型未设置*/
    NO_DRAWTYPE,
    /**添加站点只支持混合阶段*/
    ONLY_SUPPORT_CONCRETE,
    /**IMU数据异常*/
    IMU_DATA_EXP
};

NS_ASSUME_NONNULL_END
