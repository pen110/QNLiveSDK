//
//  BaseMessageModel.h
//  QNLiveSDK
//
//  Created by super on 2021/9/10.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
@class ReferenceInfo;
@interface BaseMessageModel : NSObject
//用户昵称
@property(nonatomic,strong) NSString* nickName;
//用户id
@property(nonatomic,strong) NSString* userId;
//用户头像
@property(nonatomic,strong) NSString* avatar;
//消息id
@property(nonatomic,strong) NSString* messageId;
//聊天室id
@property(nonatomic,strong) NSString* conversationId;
//消息类型
@property(nonatomic,assign) int messageType;
//文本消息
@property(nonatomic,strong) NSString* text;
//图片消息
@property(nonatomic,strong) NSString* imageUrl;
@property(nonatomic,strong) UIImage* image;
//发送时间
@property(nonatomic,assign) int64_t sendTime;
@property(nonatomic,strong)UIColor *color;
//引用
@property(nonatomic,strong) NSString* msg;
@property(nonatomic,strong) ReferenceInfo *referenceInfo;
@property(nonatomic,strong) NSString *type;

@property(nonatomic,strong) NSString *third_user_id;//第三方id

/**1－管理员, 2-超管, 3-讲师, 4-直播助手 5-普通用户 6-匿名用户 7-子账号*/
@property(nonatomic,assign) int user_type;
@end

NS_ASSUME_NONNULL_END

