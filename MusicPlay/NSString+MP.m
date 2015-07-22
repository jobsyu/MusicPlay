//
//  NSString+MP.m
//  MusicPlay
//
//  Created by jobs on 15/7/21.
//  Copyright (c) 2015年 jobs. All rights reserved.
//

#import "NSString+MP.h"

@implementation NSString (MP)

/**
 *  返回分与秒的字符串 如:01:60
 */
+(NSString *)getMinuteSecondWithSecond:(NSTimeInterval)time
{
    int minute = (int)time / 60;
    int second = (int)time % 60;
    
    if (second > 9) { //2:10
        return [NSString stringWithFormat:@"%d:%d",minute,second];
    }
    
    //2:09
    return [NSString stringWithFormat:@"%d:0%d",minute,second];
}
@end
