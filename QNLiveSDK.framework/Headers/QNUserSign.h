//
//  QNUserSign.h
//  QNLiveSDK
//
//  Created by 潘欣 on 2022/7/8.
// 签到

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
@class QNUserSign;
typedef void ( ^successBloc) (id content);

@protocol UserSignDelegate <NSObject>

- (void)userSign:(QNUserSign *)sign;

@end

@interface QNUserSign : NSObject

@property (nonatomic,weak)id<UserSignDelegate>signDelegate;
/// 签到
/// @param params
/// liveId直播间id
/// image 头像
/// nickname 昵称
/// userId 用户id
/// @param successBloc successBloc description
/// @param failure failure description
-(void)userSignWithLiveId:(NSDictionary *)params successBloc:(nullable successBloc)successBloc failure:(nullable void (^)(NSError * nullable))failure;

@end

NS_ASSUME_NONNULL_END
