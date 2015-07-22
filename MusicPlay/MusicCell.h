//
//  MusicCell.h
//  MusicPlay
//
//  Created by jobs on 15/7/21.
//  Copyright (c) 2015年 jobs. All rights reserved.
//

#import <UIKit/UIKit.h>
@class Music;

@interface MusicCell : UITableViewCell

+(instancetype)musicCellWithTableView:(UITableView *)tableView;

@property (nonatomic,strong) Music *music;
@end
