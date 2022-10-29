//
//  MessageModel.h
//  YouinLiveDemo
//
//  Created by lprison on 2021/9/5.
//

#import <Foundation/Foundation.h>
#import "CourseModel.h"

NS_ASSUME_NONNULL_BEGIN
//@class ReferenceInfo;
@interface userInfoModel : NSObject
@property(nonatomic,strong) NSString *userId;
@property(nonatomic,strong) NSString *userName;
@property(nonatomic,strong) NSString *avatar;
@property(nonatomic,strong) NSString *youin_user_id;
@property(nonatomic,strong) NSString *qiniu_user_id;
@property(nonatomic,assign) int exprise_time;
@property(nonatomic,assign) int timestamp;
// 子用户token
@property(nonatomic,strong) NSString *token;
@property(nonatomic,assign) BOOL  is_mic_mute;
@property(nonatomic,assign) BOOL  is_camera_mute;
@property(nonatomic,assign) BOOL  hands_up;
@property(nonatomic,assign) int hands_up_time;
@property(nonatomic,assign) int enter_time;
@property(nonatomic,assign) BOOL  is_invited;
@property(nonatomic,assign) int role;
@property(nonatomic,assign) BOOL  interactive;
@end

@interface roomStatusModel : NSObject

/// 主持人信息
@property(nonatomic,strong) userInfoModel *hostUserInfo;

/// 是否在房间中
@property(nonatomic,assign) BOOL  isUseInhome;

/// 是否上麦
@property(nonatomic,assign) BOOL  isUserPublish;

/// 是否是举手模式上麦(否则为自由上麦模式)
@property(nonatomic,assign) BOOL  isRoomHandsUp;

/// 是否全部静音
@property(nonatomic,assign) BOOL  isRoomMuteAll;
@end

@interface attModel : NSObject
@property(nonatomic,strong) NSString *avatar;
@property(nonatomic,assign) int userStatus;
//真实的
@property(nonatomic,assign) int pv_count;
@property(nonatomic,assign) int like_count;

//虚拟的
@property(nonatomic,assign) int dummy_like;
@property(nonatomic,assign) int dummy_pv;

@property(nonatomic,assign) int dummy_like_count;
@property(nonatomic,strong) NSString *ws_type;
@property(nonatomic,strong) NSString *type;
@property(nonatomic,assign) BOOL status;
@property(nonatomic,assign) int count;

/**用户id*/
@property(nonatomic,strong) NSString* userId;
/**用户头像*/
@property(nonatomic,strong) NSString* image;
/**用户昵称*/
@property(nonatomic,strong) NSString* nickname;

/** 奖品id */
@property(nonatomic,strong) NSString *prize_id;
/** 奖品名字 */
@property(nonatomic,strong) NSString *prize_name;
/** 奖品介绍 */
@property(nonatomic,strong) NSString *receive_instruction;

@property(nonatomic,strong) NSString *run_scope;
/** 公告内容 */
@property (nonatomic,copy) NSString *noticeContent;

/**公告id*/
@property (nonatomic,copy) NSString *noticeId;

/**公告类型  noticeType = 1 是单行滚动; = 2 弹窗显示 */
@property (nonatomic,assign) int noticeType;

/** true 和flase 秒杀的状态*/
@property (nonatomic,assign)BOOL seckill_status;

/**秒杀id*/
@property (nonatomic,copy) NSString *seckill_id;

/**秒杀的时间*/
@property (nonatomic,copy) NSString *seckill_time;

@property (nonatomic,copy) NSString *third_user_id;

//用户头像
@property (nonatomic,copy) NSString *user_image;
//礼物名字
@property (nonatomic,copy) NSString *gift_name;
//礼物图片
@property (nonatomic,copy) NSString *gift_image;
//礼物个数
@property(nonatomic,assign) int gift_count;
@end

//引用的消息体
@interface ReferenceInfo : NSObject
@property(nonatomic,strong) NSString *attribute;
@property(nonatomic,strong) NSString *avatar;
@property(nonatomic,strong) NSString *content;
@property(nonatomic,strong) NSString *ID;
@property(nonatomic,strong) NSString *timer;
@property(nonatomic,strong) NSString *type;
@property(nonatomic,strong) NSString *userId;
@property(nonatomic,strong) NSString *userName;
@end


@interface textModel : NSObject
@property(nonatomic,strong) NSString *text;
@property(nonatomic,strong) NSString *type;
/**1－管理员, 2-超管, 3-讲师, 4-直播助手 5-普通用户 6-匿名用户 7-子账号*/
@property(nonatomic,assign) int user_type;
@property(nonatomic,strong) NSString *userId;
@property(nonatomic,assign) BOOL  status;
@property(nonatomic,assign) int value;
@property(nonatomic,strong) NSString *timeStamp;
@property(nonatomic,strong) NSString *prizeId;
@property(nonatomic,strong) NSString *red_id;
@property(nonatomic,strong) NSString *nickname;
@property(nonatomic,strong) NSString *name;
@property(nonatomic,strong) NSString *giftImg;
@property(nonatomic,strong) NSString *userName;
@property(nonatomic,strong) NSString *giftCount;
@property(nonatomic,strong) NSString *giftName;
@property(nonatomic,strong) NSString *position;
@property(nonatomic,assign) int signaling_type;
@property(nonatomic,strong) NSString *user_id;
@property(nonatomic,assign) BOOL  is_allow;
@property(nonatomic,assign) BOOL  is_mic_mute;
@property(nonatomic,assign) BOOL  is_camera_mute;
@property(nonatomic,assign) BOOL  hands_up;
@property(nonatomic,assign) int hands_up_time;
@property(nonatomic,assign) int enter_time;
@property(nonatomic,assign) BOOL  is_invited;
@property(nonatomic,assign) int role;
@property(nonatomic,assign) BOOL  closed_wheat;
@property(nonatomic,assign) int  wheat_mode;
@property(nonatomic,assign) BOOL  interactive;
@property(nonatomic,strong)AnswerSubjectModel *topicInfo;
@property(nonatomic,strong)NSArray<TopicListModel*>*topicList;

//引用发送的消息
@property(nonatomic,strong) NSString *msg;
@property(nonatomic,strong) ReferenceInfo *referenceInfo;

/**是否打开红包*/
@property(nonatomic,assign) int has_red;
@end



@interface fileModel : NSObject
@property(nonatomic,strong) NSString *objId;
@property(nonatomic,strong) NSString *url;
@end

@interface MessageModel : NSObject
@property(nonatomic,strong) NSString *_lctype;
@property(nonatomic,strong) textModel *_lctext;
@property(nonatomic,strong) attModel *_lcattrs;
@property(nonatomic,strong) fileModel *_lcfile;
@end


@interface LiveNoticeModel : NSObject
@property(nonatomic,assign) int ID;
@property(nonatomic,strong) NSString *content;
@property(nonatomic,assign) int type;
@property(nonatomic,strong) NSString *createDate;
@end


NS_ASSUME_NONNULL_END

