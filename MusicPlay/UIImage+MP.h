//
//  UIImage+MP.h
//  MusicPlay
//
//  Created by jobs on 15/7/21.
//  Copyright (c) 2015年 jobs. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (MP)

/**
 *  返回一张自由拉伸的图片
 */
+(UIImage *)resizedImageWithName:(NSString *)name;


/**
 *  返回拉伸的图片
 */
+(UIImage *)resizedImageWithName:(NSString *)name left:(CGFloat)left top:(CGFloat)top;

/**
 *  返回圆形图片
 *
 *  @param name        圆的名称
 *  @param borderwidth 边宽
 *  @param borderColor 边颜色
 *
 *  @return 
 */
+(instancetype)circleImageWithName:(NSString *)name borderWidth:(CGFloat)borderWidth borderColor:(UIColor *)borderColor;

+(instancetype)circleImageWithImage:(UIImage *)image borderWidth:(CGFloat)borderWidth borderColor:(UIColor *)borderColor;

+(UIImage *)imageFromMainBundleWithName:(NSString *)name;
@end
