//
//  MusicCell.m
//  MusicPlay
//
//  Created by jobs on 15/7/21.
//  Copyright (c) 2015年 jobs. All rights reserved.
//

#import "MusicCell.h"
#import "Music.h"

@implementation MusicCell

+(instancetype)musicCellWithTableView:(UITableView *)tableView
{
    static NSString *ID = @"MusicCell";
    return [tableView dequeueReusableCellWithIdentifier:ID];
}

//显示cell的数据
-(void)setMusic:(Music *)music
{
    _music =music;
    
    self.textLabel.text = music.name;
    self.detailTextLabel.text = music.singer;
}

@end
