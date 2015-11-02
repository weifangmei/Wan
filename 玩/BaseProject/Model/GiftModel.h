//
//  GiftModel.h
//  BaseProject
//
//  Created by tarena on 15/11/2.
//  Copyright © 2015年 Tarena. All rights reserved.
//

#import "BaseModel.h"

@class GiftAModel,GiftDModel,GiftGModel;
@interface GiftModel : BaseModel

@property (nonatomic, strong) NSArray<GiftAModel *> *a;

@property (nonatomic, strong) NSArray<GiftDModel *> *d;

@property (nonatomic, strong) NSArray<GiftGModel *> *g;

@end
@interface GiftAModel : NSObject

@property (nonatomic, copy) NSString *id;

@property (nonatomic, copy) NSString *name;

@property (nonatomic, strong) NSArray<NSString *> *level;

@end

@interface GiftDModel : NSObject

@property (nonatomic, copy) NSString *id;

@property (nonatomic, copy) NSString *name;

@property (nonatomic, strong) NSArray<NSString *> *level;

@end

@interface GiftGModel : NSObject

@property (nonatomic, copy) NSString *id;

@property (nonatomic, copy) NSString *name;

@property (nonatomic, strong) NSArray<NSString *> *level;

@end

