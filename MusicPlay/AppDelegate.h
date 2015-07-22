//
//  AppDelegate.h
//  MusicPlay
//
//  Created by jobs on 15/7/21.
//  Copyright (c) 2015年 jobs. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void (^PlayerRemoteEventBlock)(UIEvent *event); //播放器远程事件block

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (copy,nonatomic) PlayerRemoteEventBlock mRemoteEventBlock;
@end

