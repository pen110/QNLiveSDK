//
//  QNChat.h
//  QNLiveSDK
//
//  Created by 潘欣 on 2022/5/11.
// 加入聊天室，chatid，

#import <Foundation/Foundation.h>
#import "BaseMessageModel.h"
NS_ASSUME_NONNULL_BEGIN

@class QNChat;
@protocol QNChatDelegate <NSObject>

@optional
/// 接收到新消息
/// @param messageModel 消息
-(void)qnChat:(QNChat *)chat onNewMessageRecive:(BaseMessageModel *)messageModel;

///// 直播状态更新
///// @param statue 直播类型
- (void)getUpdateRoomLiveStatus:(NSString *)statue;

/// 是否被禁言
/// @param isUserForbidden 是否被禁言 1 禁言某个人，2，解开禁言某个人，3，全体禁言，4，解开全体禁言
-(void)qnChat:(QNChat *)chat isUserForbidden:(int)isUserForbidden;

/// 是否被踢出房间
/// @param isUserKickOut 是否被踢出房间
-(void)qnChat:(QNChat *)chat  isUserKickOut:(BOOL)isUserKickOut;

/// 直播间观看信息例如：点赞数，观看人数等 （直播中每分钟调用一次）
/// @param chat chat
/// @param likeInfo 信息model
- (void)qnChat:(QNChat *)chat likeInfo:(attModel *)likeInfo;

//商品列表
- (void)qnChatWithGooods;

@end

@interface QNChat : NSObject
/// 聊天代理
@property (nonatomic,weak) id<QNChatDelegate>chatDelegate;

/// 用户是否被禁言
//@property(nonatomic,assign) BOOL isUserForbidden;

/// 用户是否被踢出房间
//@property(nonatomic,assign) BOOL isUserKickOut;
@property(nonatomic,assign) BOOL isFirst;
/// 初始化聊天室
/// @param callback callback description
- (void)initClientcallback:(void (^)(BOOL success, NSError * _Nullable error))callback;

/// 获取历史信息
/// @param count 每页显示多少条信息，默认一次取100条
/// @param msgId 限制起始查询结果为该消息之前的消息，需要与 sourceTime 同时使用，为防止某时刻有重复消息，最早一条的信息id
/// @param sendTime 限制起始查询结果为小于该时间之前的消息，不传则为当前时间 ，最早一条的信息发送时间
/// @param callback 回调数据
-(void)getHistoryMessage:(int )count messageId:(NSString *)msgId sendTimestamp:(int64_t)sendTime callback:(void (^)(NSArray<BaseMessageModel*> *message, NSError * _Nullable error))callback;

/// 发送文字消息
/// @param text 文字
/// @param callback 回调
-(void)sendTextMessage:(NSString *)text callback:(void (^)(BOOL, NSError * _Nullable))callback;

/// 发送图片消息
/// @param image 图片
/// @param callback 回调
-(void)sendImageMessage:(UIImage *)image callback:(void (^)(BOOL, NSError * _Nullable))callback;


@end

NS_ASSUME_NONNULL_END
