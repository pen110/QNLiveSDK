//
//  QNLottery.h
//  QNLiveSDK
//
//  Created by 潘欣 on 2022/7/4.
// 抽奖

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
typedef void ( ^successBloc) (id content);
@protocol QNLotteryDelegate <NSObject>

-(void)isShowPrizeButton:(BOOL)isShow;

- (void)openPrize:(MessageModel *)model;

@end

@interface QNLottery : NSObject

@property (nonatomic,weak)id<QNLotteryDelegate>lotteryDelegate;


/// 获取中奖信息
/// @param liveID liveID
-(void)getLotteryList:(NSString *)liveID successBloc:(nullable successBloc)successBloc failure:(nullable void (^)(NSError * nullable))failure;


/// 抽奖报名
/// @param liveID liveID
-(void)joinPrize:(NSString *)liveID phone:(NSString*)phone successBloc:(nullable successBloc)successBloc failure:(nullable void (^)(NSError * nullable))failure;

/// 获取中奖名单
/// @param prizeID 奖品ID
/// @param successBloc 回调
/// @param failure 失败回调
-(void)getWinnerList:(NSString *)prizeID successBloc:(nullable successBloc)successBloc failure:(nullable void (^)(NSError * nullable))failure;


/// 填写抽奖信息
/// @param dic 参数
/// @param successBloc successBloc
/// @param failure failure
- (void)fillAwardsInfo:(NSDictionary*) dic successBloc:(successBloc)successBloc failure:(void (^)(NSError * _Nonnull))failure;

/// 领奖需要填写的信息
/// @param prizeID 奖品ID
/// @param successBloc 回调
/// @param failure 失败回调
-(void)getFillInfo:(NSString *)prizeID successBloc:(nullable successBloc)successBloc failure:(nullable void (^)(NSError * nullable))failure;

/// 筛选中奖手机号
/// @param prizeId 奖品ID
/// @param successBloc 回调
/// @param failure 失败回调
-(void)getCheckIsWinner:(NSString *)prizeId successBloc:(nullable successBloc)successBloc failure:(nullable void (^)(NSError * _Nonnull))failure;
@end

NS_ASSUME_NONNULL_END
