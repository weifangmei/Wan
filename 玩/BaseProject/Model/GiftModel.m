//
//  GiftModel.m
//  BaseProject
//
//  Created by tarena on 15/11/2.
//  Copyright © 2015年 Tarena. All rights reserved.
//

#import "GiftModel.h"

@implementation GiftModel


+ (NSDictionary *)objectClassInArray{
    return @{@"a" : [GiftAModel class], @"d" : [GiftDModel class], @"g" : [GiftGModel class]};
}
@end
@implementation GiftAModel

@end


@implementation GiftDModel

@end


@implementation GiftGModel

@end


