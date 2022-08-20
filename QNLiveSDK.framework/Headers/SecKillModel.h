//
//  SecKillModel.h
//  QNLiveSDK
//
//  Created by 潘欣 on 2022/7/14.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
@class ProductListModel;
@interface SecKillModel : NSObject
@property (nonatomic,assign) int ID;
@property (nonatomic,strong) NSString *name;
@property (nonatomic,strong) NSString *start_time;
@property (nonatomic,strong) NSArray<ProductListModel*> *product_list;
@end


@interface ProductListModel : NSObject
@property (nonatomic,strong) NSString *app_turn_url;
@property (nonatomic,strong) NSString *goodsUrl;
@property (nonatomic,assign) int ID;
@property (nonatomic,strong) NSString *image;
@property (nonatomic,strong) NSString *jump_type;
@property (nonatomic,strong) NSString *name;
@property (nonatomic,strong) NSString *original_id;
@property (nonatomic,strong) NSString *page_path;
@property (nonatomic,strong) NSString *price;
@property (nonatomic,strong) NSString *price_end;
@property (nonatomic,strong) NSString *price_type;
@property (nonatomic,strong) NSString *product_label;
@property (nonatomic,strong) NSString *subtitle;
@end

NS_ASSUME_NONNULL_END
