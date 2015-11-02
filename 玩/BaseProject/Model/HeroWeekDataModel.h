//
//  HeroWeekDataModel.h
//  BaseProject
//
//  Created by tarena on 15/11/2.
//  Copyright © 2015年 Tarena. All rights reserved.
//

#import "BaseModel.h"

@class HeroWeekDataDataModel,HeriWeekDataDataChartsModel,HeroWeekDataDataChartsRatioDataModel;
@interface HeroWeekDataModel : BaseModel

@property (nonatomic, copy) NSString *msg;

@property (nonatomic, strong) HeroWeekDataDataModel *data;

@property (nonatomic, assign) NSInteger code;

@end
@interface HeroWeekDataDataModel : NSObject

@property (nonatomic, strong) NSArray<HeriWeekDataDataChartsModel *> *charts;

@property (nonatomic, assign) NSInteger average_win_ratio;

@property (nonatomic, assign) NSInteger average_k_num;

@property (nonatomic, assign) NSInteger champion_id;

@property (nonatomic, assign) NSInteger average_d_num;

@property (nonatomic, assign) NSInteger average_a_num;

@property (nonatomic, assign) NSInteger rank;

@end

@interface HeriWeekDataDataChartsModel : NSObject

@property (nonatomic, copy) NSString *color;

@property (nonatomic, strong) NSArray<HeroWeekDataDataChartsRatioDataModel *> *ratio_data;

@property (nonatomic, copy) NSString *title;

@property (nonatomic, copy) NSString *y_axis_title;

@end

@interface HeroWeekDataDataChartsRatioDataModel : NSObject

@property (nonatomic, copy) NSString *name;

@property (nonatomic, assign) NSInteger value;

@end

