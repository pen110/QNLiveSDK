//
//  QNProduct.h
//  QNLiveSDK
//
//  Created by 潘欣 on 2022/5/27.
//

#import <Foundation/Foundation.h>
NS_ASSUME_NONNULL_BEGIN
@class QNProduct;

typedef void ( ^successBloc) (id content);

@protocol ProductDelegate <NSObject>

- (void)product:(QNProduct *)product seckillOpen:(attModel *)model;

@end

@interface QNProduct : NSObject

@property (nonatomic,weak)id<ProductDelegate>proDelegate;

/// 商品列表
/// @param successBloc 返回数据
/// @param failure 返回错误
- (void)getProductsuccessBloc:(successBloc)successBloc failure:(void (^)(NSError * _Nonnull error))failure;


/// 商品秒杀
/// @param successBloc 返回数据
/// @param failure 返回错误
- (void)getProductWithSeckillId:(NSString *)skillId successBloc:(successBloc)successBloc failure:(void (^)(NSError * _Nonnull error))failure;
@end



NS_ASSUME_NONNULL_END
