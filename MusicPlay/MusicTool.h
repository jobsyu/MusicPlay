//
//  MusicTool.h
//  MusicPlay
//
//  Created by jobs on 15/7/21.
//  Copyright (c) 2015年 jobs. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>
#import "Singleton.h"

@class Music;
@interface MusicTool : NSObject
singleton_interface(MusicTool)

@property (nonatomic,strong) AVAudioPlayer *player;//播放器
/**
 *  音乐播放前的准备工作
 */
-(void)prepareToPlayWithMusic:(Music *)music;

/**
 *  播放
 */
-(void)play;
/**
 *  暂停
 */
-(void)pause;

@end
