//
//  QNLiveSDKManager.h
//  QNLiveSDK
//
//  Created by 潘欣 on 2022/6/16.
//

#import <Foundation/Foundation.h>
#import "EnterpriseModel.h"
#import "CourseModel.h"
#import "BaseMessageModel.h"
#import "MessageModel.h"
//直播间
#import "QNLiveRoom.h"
//聊天室
#import "QNChat.h"
//播放器
#import <PLPlayerKit/PLPlayerKit.h>
//商品
#import "QNProduct.h"
//抽奖
#import "QNLottery.h"
//签到
#import "QNUserSign.h"
//观看
#import "QNWatchLimit.h"

//问卷
#import "QNVotes.h"
#import "QNOnLineNumModel.h"
#import "QNApplyFormModel.h"
NS_ASSUME_NONNULL_BEGIN
typedef void ( ^successBloc) (id content);
// 请求失败
typedef void (^failure)(id error);
@class QNLiveSDKManager;

#pragma mark - delegate
@protocol QNLiveDelegate <NSObject>

@optional

/// 企业信息回调
/// @param enterpriseModel 企业信息model
/// @param error 错误原因
-(void)enterpriseInfo:(nullable EnterpriseModel *)enterpriseModel error:(nullable NSError *)error;

/// 直播初始化状态回调
/// @param liveRoomInfoModel 直播状态model
/// @param error 错误原因
-(void)liveRoomInfo:(nullable QNLiveRoomModel *)liveRoomInfoModel error:(nullable NSError *)error;


/// 商品信息
/// @param goodsList 商品列表
-(void)qnManager:(QNLiveSDKManager *)manager goodsList:(NSArray<GoodsListModel *> *)goodsList;

/// 直播点赞观看数据
/// @param likeInfo 点赞观看信息
-(void)onManager:(QNLiveSDKManager *)manager likeInfo:(attModel *)likeInfo;

/// 接收到新消息
/// @param messageModel 消息
-(void)onManager:(QNLiveSDKManager *)manager onNewMessageRecive:(BaseMessageModel *)messageModel;


/// 直播状态更新
/// @param manager manager
/// @param status 状态类型
- (void)onManager:(QNLiveSDKManager *)manager getUpdateRoomLiveStatus:(NSString *)status;

/// 公告消息
/// @param manager manager
/// @param model 公告内容
-(void)onManagerChat:(QNLiveSDKManager *)manager noticeInfo:(attModel *)model;

/// 打开抽奖
/// @param manager manager
/// @param isShow 公告内容
-(void)onManager:(QNLiveSDKManager *)manager lottery:(BOOL)isShow;

/// 开奖
/// @param manager manager
/// @param model 开奖信息
-(void)openPrize:(QNLiveSDKManager *)manager withModel:(MessageModel *)model;


/// 签到
/// @param manager manager
-(void)userSignManager:(QNLiveSDKManager *)manager;


/// 获取提交表单
/// @param manager manager
/// @param model 返回的表单个数model
- (void)applyFormManager:(QNLiveSDKManager *)manager WithFormModel:(NSArray<QNApplyFormModel*> *)model;


/// 检查观看者是否在白名单内 status = 1是，=0 否
/// @param manager manager
/// @param status 1 和0
- (void)manager:(QNLiveSDKManager *)manager whiteUserStatus:(BOOL)status;


/// 秒杀活动
/// @param manager manager descriptio
/// @param model model description
- (void)manager:(QNLiveSDKManager *)manager withSecKill:(attModel *)model;


/// 是否被禁言  是否被禁言 1 禁言某个人，2，解开禁言某个人，3，全体禁言，4，解开全体禁言
/// @param isUserForbidden 是否被禁言
-(void)isUserForbidden:(int)isUserForbidden;

/// 是否被踢出房间
/// @param isUserKickOut 是否被踢出房间
-(void)isUserKickOut:(BOOL)isUserKickOut;


/// 密码，支付观看 type 1 是 密码，2 是支付 3 是公开
/// @param manager manager description
/// @param type model description
- (void)manager:(QNLiveSDKManager *)manager withWatchType:(int)type;


/// 投票问卷类型返回
/// @param manager manager description
/// @param type  1， 是问卷，2 投票，3，考试
- (void)manager:(QNLiveSDKManager *)manager withVoteType:(int)type;


/// 是否显示有购物车
/// @param manager manager description
/// @param isShow isShow description
- (void)manager:(QNLiveSDKManager *)manager isShowShopCart:(BOOL)isShow;

/// 送礼通知
/// @param manager manager description
/// @param gift gift description
-(void)qnManager:(QNLiveSDKManager *)manager sendGift:(nullable attModel *)gift;

/// 打开红包 has_red = 1
/// @param manager manager description
/// @param redPacket redPacket description
-(void)qnManager:(QNLiveSDKManager *)manager hasRedPacket:(nullable textModel *)redPacket;

@end

@interface QNLiveSDKManager : NSObject

/// 管理SDK单例
+ (instancetype)shardManager;
/// 直播相关代理
@property (nonatomic,weak) id<QNLiveDelegate>delegate;

/// 是否锁屏
@property(nonatomic,assign) BOOL isLockScreen;

/// 登录注册  [user_id,nickname,headimg,enterprise_id,token], token=md5(userid+企业secret)
/// @param userDic 用户信息
/// @param liveId 直播id
- (void)init:(NSDictionary *)userDic withLiveId:(NSString *)liveId success:(successBloc)success failure:(nullable void (^)(NSError * nullable))failure;


/// 密码校验
/// @param psw 输入密码
-(NSInteger)getCheckWithPSW:(NSString *)psw;

/// 获取企业送礼物内容
/// @param success success description
/// @param failure failure description
- (void)enterpriseJsonSuccess:(successBloc)success failure:(nullable void (^)(NSError * nullable))failure;


/// 获取直播间人数
/// @param success success description
/// @param failure failure description
- (void)getOnlineNumberWithPage:(int)page success:(successBloc)success failure:(nullable void (^)(NSError * nullable))failure;

/// 送礼物排行榜
/// @param params liveId直播间Id
/// @param successBlock successBlock description
/// @param failure failure description
- (void)getRankingGift:(NSString *)params successBloc:(successBloc)successBlock failure:(void (^)(NSError * _Nonnull error))failure;

/// 返回一个100*100 的image
/// liveRoomInfo: error 此方法中返回share_card 和share_url
//- (UIImage *)setupQRCodeImage;


/// 邀请卡
/// @param params 直播间id liveId
/// @param successBlock successBlock description
/// @param failure failure description
- (void)getWatchMakeShareCard:(NSString *)params successBloc:(successBloc)successBlock failure:(void (^)(NSError * _Nonnull error))failure;


/// 获取主播个人信息
/// @param params 直播id liveId
/// @param successBlock successBlock description
/// @param failure failure description
- (void)getAnchorUserinfo:(NSString *)params successBloc:(successBloc)successBlock failure:(void (^)(NSError * _Nonnull error))failure;

/// 踢出直播间
/// @param params course_id,直播间id，image头像，nickname昵称，user_id用户id
/// @param successBlock successBlock description
/// @param failure failure description
- (void)getWatchAddKickOut:(NSDictionary *)params successBloc:(successBloc)successBlock failure:(void (^)(NSError * _Nonnull error))failure;

/// 黑名单列表
/// @param params liveId直播间id
/// @param successBlock successBlock description
/// @param failure failure description
- (void)getWatchListKickOut:(NSString *)params successBloc:(successBloc)successBlock failure:(void (^)(NSError * _Nonnull error))failure;

/// 移除黑名单
/// @param params 移除黑名单列表中的id
/// @param successBlock successBlock description
/// @param failure failure description
- (void)getWatchDelKickOut:(NSString *)params successBloc:(successBloc)successBlock failure:(void (^)(NSError * _Nonnull error))failure;

/// 禁言某人
/// @param params image,nickname,user_id,liveId
/// @param successBlock successBlock description
/// @param failure failure description
- (void)getWatchAddForbidden:(NSDictionary *)params successBloc:(successBloc)successBlock failure:(void (^)(NSError * _Nonnull error))failure;


/// 禁言列表
/// @param params 直播间id
/// @param successBlock successBlock description
/// @param failure failure description
- (void)getWatchListForbiddenWords:(NSString *)params successBloc:(successBloc)successBlock failure:(void (^)(NSError * _Nonnull error))failure;

/// 解开禁言
/// @param params 禁言列表中的id 和 userId 被禁言者的个人id
/// @param successBlock successBlock description
/// @param failure failure description
- (void)getWatchDelForbiddenWords:(NSDictionary *)params successBloc:(successBloc)successBlock failure:(void (^)(NSError * _Nonnull error))failure;


/// 超管关闭直播间（无法重新开播，也没有回放，增加一个新状态，超管发一个leancloud消息告诉主播，强制关闭直播）
/// @param successBlock successBlock description
/// @param failure failure description
- (void)SuperTubeStopLiveSuc:(successBloc)successBlock failure:(failure)failure;
/**
 直播间信息，点赞，排行榜
 */
@property (nonatomic,strong)QNLiveRoom *_Nullable liveRoom;

/**聊天室*/
@property (nonatomic,strong)QNChat *_Nullable chat;

/**播放器*/
@property(nonatomic,strong) PLPlayer *_Nullable player;
//初始化播放器
-(PLPlayer *)initializePlayer;


/**抽奖*/
@property (nonatomic,strong)QNLottery *_Nullable lottery;

/**签到*/
@property (nonatomic,strong)QNUserSign *_Nullable userSign;

/**商品*/
@property (nonatomic,strong)QNProduct *_Nullable product;

/**观看限制*/
@property (nonatomic,strong)QNWatchLimit *_Nullable watchLimit;

@property (nonatomic,strong)QNVotes *_Nullable votes;

//- (void)initPlayerWithFrame:(CGRect)frame;

//-(void)play;

/// 断开
-(void)close;

@end

NS_ASSUME_NONNULL_END
