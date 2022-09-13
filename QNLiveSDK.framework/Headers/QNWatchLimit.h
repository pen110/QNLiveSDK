//
//  QNWatchLimit.h
//  QNLiveSDK
//
//  Created by 潘欣 on 2022/7/11.
//

#import <Foundation/Foundation.h>
@class QNWatchLimit;
NS_ASSUME_NONNULL_BEGIN


typedef void ( ^successBloc) (id content);

@protocol QNWatchLimitDelegate <NSObject>

- (void)watchList:(QNWatchLimit *)watch whiteUserStatus:(BOOL)status;

@end


@interface QNWatchLimit : NSObject

@property (nonatomic,weak)id<QNWatchLimitDelegate>watchDelegate;

/// 获取个人信息
- (void)getUserinfosuccessBloc:(successBloc)successBloc failure:(void (^)(NSError * _Nonnull error))failure;


/// 验证key(名字，手机号等)是否在白名单内
/// @param successBloc successBloc description
/// @param failure failure description
- (void)whiteUserStatusCheckSuccessBloc:(successBloc)successBloc failure:(void (^)(NSError * _Nonnull error))failure;

/// 接口返回的 limitCondition 对应字段
/// @param successBloc successBloc description
/// @param failure failure description
- (void)getLimitConditionsuccessBloc:(successBloc)successBloc failure:(void (^)(NSError * _Nonnull error))failure;


/// 修改个人信息
/// @param successBloc successBloc description
/// @param failure failure description
- (void)getUserModifyWithArgument:(NSDictionary *)param successBloc:(successBloc)successBloc failure:(void (^)(NSError * _Nonnull error))failure;


/// 获取验证码
/// @param successBloc successBloc descriptio
/// @param failure failure description
- (void)getVerificationCodeWithPhone:(NSString *)phone successBloc:(successBloc)successBloc failure:(void (^)(NSError * _Nonnull error))failure;

/// 提交表单
/// @param successBloc successBloc descriptio
/// @param failure failure description
- (void)getUserAddApplyWithContent:(NSDictionary *)dic successBloc:(successBloc)successBloc failure:(void (^)(NSError * _Nonnull error))failure;
@end

NS_ASSUME_NONNULL_END
