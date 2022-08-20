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
/// @param liveID liveID
-(void)userSignWithLiveId:(NSString *)liveID successBloc:(nullable successBloc)successBloc failure:(nullable void (^)(NSError * nullable))failure;

@end

NS_ASSUME_NONNULL_END
