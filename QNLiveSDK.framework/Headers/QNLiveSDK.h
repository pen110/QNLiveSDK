//
//  QNLiveSDK.h
//  QNLiveSDK
//
//  Created by 潘欣 on 2022/6/16.
//

#import <Foundation/Foundation.h>

//! Project version number for QNLiveSDK.
FOUNDATION_EXPORT double QNLiveSDKVersionNumber;

//! Project version string for QNLiveSDK.
FOUNDATION_EXPORT const unsigned char QNLiveSDKVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <QNLiveSDK/PublicHeader.h>

//主要管理类
#import <QNLiveSDK/QNLiveSDKManager.h>
//常用Model
#import <QNLiveSDK/PlayerModel.h>
#import <QNLiveSDK/BaseMessageModel.h>
#import <QNLiveSDK/CourseModel.h>
//企业信息model
#import <QNLiveSDK/EnterpriseModel.h>
//实时消息model
#import <QNLiveSDK/MessageModel.h>
//直播间model
#import <QNLiveSDK/QNLiveRoomModel.h>
//聊天室
#import <QNLiveSDK/QNChat.h>
//直播间
#import <QNLiveSDK/QNLiveRoom.h>
//商品
#import <QNLiveSDK/QNProduct.h>
//抽奖
#import <QNLiveSDK/QNLottery.h>
//签到
#import <QNLiveSDK/QNUserSign.h>
//观看限制
#import <QNLiveSDK/QNWatchLimit.h>
//提交表单
#import <QNLiveSDK/QNApplyFormModel.h>
//个人信息
#import <QNLiveSDK/UserInfoModel.h>
//秒杀
#import <QNLiveSDK/SecKillModel.h>
//投票问卷
#import <QNLiveSDK/QNVotes.h>
//投票问卷model
#import <QNLiveSDK/QNQevVoteModel.h>
//查看答案的model
#import <QNLiveSDK/QNAnswerModel.h>
//在线人数
#import <QNLiveSDK/QNOnLineNumModel.h>
