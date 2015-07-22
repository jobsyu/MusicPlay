//
//  AppDelegate.m
//  MusicPlay
//
//  Created by jobs on 15/7/21.
//  Copyright (c) 2015年 jobs. All rights reserved.
//

#import "AppDelegate.h"
#import <AVFoundation/AVFoundation.h>

@interface AppDelegate ()

@end

@implementation AppDelegate


- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    //设置音乐后台播放的会话类型 //设置播放会话，在后台可以继续播放（还需要设置程序允许后台运行模式）
    AVAudioSession *session = [AVAudioSession sharedInstance];
    [session setCategory:AVAudioSessionCategoryPlayback error:nil];
    [session setActive:YES error:nil];
    
    //开启接收远程事件
    [application  beginReceivingRemoteControlEvents];
    return YES;
}

- (void)applicationWillResignActive:(UIApplication *)application {
    // Sent when the application is about to move from active to inactive state. This can occur for certain types of temporary interruptions (such as an incoming phone call or SMS message) or when the user quits the application and it begins the transition to the background state.
    // Use this method to pause ongoing tasks, disable timers, and throttle down OpenGL ES frame rates. Games should use this method to pause the game.
}

- (void)applicationDidEnterBackground:(UIApplication *)application {
    //开启后台任务
    [application beginBackgroundTaskWithExpirationHandler:nil];
}

#pragma mark 接收远程事件
-(void)remoteControlReceivedWithEvent:(UIEvent *)event
{
    //判断是否为远程事件
    if (event.type == UIEventTypeRemoteControl) {
        NSLog(@"接收到远程事件");
        //        UIEventSubtypeRemoteControlPlay                播放
        //        UIEventSubtypeRemoteControlPause               暂停,
        //        UIEventSubtypeRemoteControlStop                停止,
        //        UIEventSubtypeRemoteControlPreviousTrack      上一首
        //        UIEventSubtypeRemoteControlNextTrack           下一首,
        //event.subtype = UIEventSubtypeRemoteControlNextTrack
        //调用block
        self.mRemoteEventBlock(event);
    }
}

- (void)applicationWillEnterForeground:(UIApplication *)application {
    // Called as part of the transition from the background to the inactive state; here you can undo many of the changes made on entering the background.
}

- (void)applicationDidBecomeActive:(UIApplication *)application {
    // Restart any tasks that were paused (or not yet started) while the application was inactive. If the application was previously in the background, optionally refresh the user interface.
}

- (void)applicationWillTerminate:(UIApplication *)application {
    // Called when the application is about to terminate. Save data if appropriate. See also applicationDidEnterBackground:.
}

@end
