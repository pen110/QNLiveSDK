//
//  QNLiveRoom.h
//  QNLiveSDK
//
//  Created by 潘欣 on 2022/5/11.
//

#import <Foundation/Foundation.h>
#import "QNLiveRoomModel.h"
NS_ASSUME_NONNULL_BEGIN
typedef void ( ^successBloc) (id content);
@class QNLiveRoom;
@protocol liveRoomDelegate <NSObject>

/// 公告信息
/// @param liveRoom room
/// @param model 公告内容信息
- (void)qnLiveRoom:(QNLiveRoom *)liveRoom noticeInfo:(attModel *)model;


@end


@interface QNLiveRoom : NSObject

@property (nonatomic,strong)QNLiveRoomModel *roomModel;

@property (nonatomic,weak) id<liveRoomDelegate>liveRoomDelegate;

/// 点赞 - count，点击点赞按钮3秒后请求此接口,做个延迟操作,客户有可能连续点击点赞按钮
/// @param success 成功回调
/// @param failure 失败回调
-(void)doLikeWithCount:(NSInteger)count Action:(successBloc)success failure:(void (^)(NSError * _Nonnull))failure;


/// 获取邀请排行榜
/// @param successBloc successBloc
/// @param failure failure
- (void)getInvitesuccessBloc:(successBloc)successBloc failure:(void (^)(NSError * _Nonnull))failure;

/// 获取直播信息
/// @param liveId 直播id
- (void)getRoomLiveStatus:(NSString *)liveId success:(successBloc)success failure:(void (^)(NSError * _Nonnull error))failure;


// 实现chat数据，manager调用
//- (void)setAttModel:(attModel *)model;


/// 拿到直播的状态
//- (void)liveRoomStatus:(NSString *)statue;

@end

NS_ASSUME_NONNULL_END
