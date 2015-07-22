//
//  NSString+MP.h
//  MusicPlay
//
//  Created by jobs on 15/7/21.
//  Copyright (c) 2015年 jobs. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (MP)

/**
 *  返回分与秒的字符串 如:01:60
 */
+(NSString *)getMinuteSecondWithSecond:(NSTimeInterval)time;

@end
