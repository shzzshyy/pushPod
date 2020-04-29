//
//  SMALLDOUBLEBLACK.h
//
//
//  Created by Slark on 2018/7/26.
//  Copyright © 2018年 Slark. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SMALLDOUBLEBLACK : NSObject
/** 传入一个u时间戳
 *  返回一个距离当前时间的值
 *  
 */
+ (NSString *)updateTimeForTimeInterval:(NSInteger)timeInterval;

/** 传入一个时间格式
 *  YYYY-MM-dd HH:mm:ss
 */
+ (NSString*)getCurrentTimeWithFormat:(NSString*)format;

/**
 * 获取当前时间戳
 */
+ (NSString*)getCurrentTimeStamp;


/**
 * 时间转化为时间戳
 */
+ (NSString*)timeStampWithTime:(NSString*)timeString;

/**
 * 时间戳转时间
 */
+ (NSString*)timeWithTimeStamp:(NSString*)timeStamp;



@end
