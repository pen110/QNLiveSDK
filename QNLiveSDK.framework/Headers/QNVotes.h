//
//  QNVotes.h
//  QNLiveSDK
//
//  Created by 潘欣 on 2022/7/20.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
@class QNVotes;
typedef void ( ^successBloc) (id json);

@protocol QNVotesDelegate <NSObject>

- (void)votes:(QNVotes *)vote withVotesType:(int)type;

@end

@interface QNVotes : NSObject

@property (nonatomic,weak)id<QNVotesDelegate>voteDelegate;
///获取投票问卷相关信息列表
/// @param successBloc successBloc descriptio
/// @param failure failure description
/// qev_liveid_info.json
- (void)getQevInfoSuccessBloc:(successBloc)successBloc failure:(void (^)(NSError * _Nonnull error))failure;

/// 提交答案
/// @param successBloc successBloc description
/// @param failure failure description
- (void)getQevWithAnswer:(NSString *)answer successBloc:(successBloc)successBloc failure:(void (^)(NSError * _Nonnull error))failure;

/// 查询用户答题记录
/// @param successBloc successBloc description
/// @param failure failure description
- (void)getSingleUserRecordSuccessBloc:(successBloc)successBloc failure:(void (^)(NSError * _Nonnull error))failure;
@end

NS_ASSUME_NONNULL_END
