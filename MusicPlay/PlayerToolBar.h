//
//  PlayerToolBar.h
//  MusicPlay
//
//  Created by jobs on 15/7/21.
//  Copyright (c) 2015年 jobs. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef enum {
    BtnTypePlay,//播放
    BtnTypePause,//暂停
    BtnTypePrevious, //上一首
    BtnTypeNext //下一首
}BtnType;

@class Music,PlayerToolBar;

@protocol PlayerToolBarDelegate <NSObject>

-(void)playerTooBar:(PlayerToolBar *)toolbar btnClickWithType:(BtnType)btnType;

@end

@interface PlayerToolBar : UIView

+(instancetype)playerToolBar;

@property (nonatomic,strong) Music *playingMusic; //当前播放的音乐

/**
 *  播放状态 默认暂停状态
 */
@property (nonatomic,assign,getter=isPlaying) BOOL playing;

@property (weak,nonatomic) id<PlayerToolBarDelegate> delegate;
@end
