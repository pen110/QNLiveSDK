//
//  CourseModel.h
//  QNLiveSDK
//
//  Created by super on 2021/9/2.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
@class SeckillData;

@interface LiveMenusENModel : NSObject

/// 菜单ID
@property (nonatomic,strong) NSString *ID;

/// 菜单名称
@property (nonatomic,strong) NSString *name;

/// 菜单类型
@property (nonatomic,strong) NSString *type;

/// 是否开启
@property (nonatomic,assign) BOOL isShow;

/// 菜单内容
@property (nonatomic,strong) NSString *content;

/// 排序
@property (nonatomic,assign) int menuOrder;

/// 唯一标识
@property (nonatomic,strong) NSString *code;

@end




@interface LiveMenusModel : NSObject

/// 菜单ID
@property (nonatomic,strong) NSString *ID;

/// 菜单名称
@property (nonatomic,strong) NSString *name;

/// 菜单类型
@property (nonatomic,strong) NSString *type;

/// 是否开启
@property (nonatomic,assign) BOOL isShow;

/// 菜单内容
@property (nonatomic,strong) NSString *content;

/// 排序
@property (nonatomic,assign) int menuOrder;

/// 唯一标识
@property (nonatomic,strong) NSString *code;
@end


@interface HeadVideoModel : NSObject

/// 视频url
@property (nonatomic,strong) NSString *head_video_url;

/// 是否转码成功
@property (nonatomic,assign) BOOL isShow;

/// 是否开启
@property (nonatomic,assign) BOOL transcoding;

@end

@interface ForLanguageModel : NSObject

/// 是否开启
@property (nonatomic,assign) BOOL isShow;

/// 双线路拉流地址
@property (nonatomic,strong) NSString *url_hls;

/// 回放视频地址
@property (nonatomic,strong) NSString *m3u8_url;

/// 自定义回放视频地址
@property (nonatomic,strong) NSString *record_url;


@end

@interface NoticeDataModel : NSObject
@property (nonatomic,strong) NSString *content;
@property (nonatomic,assign) int noticeId;
@property (nonatomic,assign) int type;
@end

//主播信息
@interface QNHostUserInfo : NSObject
@property (nonatomic,strong) NSString *nickname;
@property (nonatomic,strong) NSString *headImageUrl;
@property (nonatomic,strong) NSString *phone;
@property (nonatomic,strong) NSString *department;
@property (nonatomic,strong) NSString *type;
@property (nonatomic,strong) NSString *name;
@property (nonatomic,strong) NSString *company;
@property (nonatomic,strong) NSString *position;
@property (nonatomic,strong) NSString *city;
@property (nonatomic,strong) NSString *address;
@property (nonatomic,strong) NSString *job_num;
@property (nonatomic,strong) NSString *email;
@property (nonatomic,strong) NSString *owner_id;
@property (nonatomic,strong) NSString *intro;
@property (nonatomic,strong) NSString *third_user_id;
@end

@interface CourseModel : NSObject

/// 是否开启弹幕
@property (nonatomic,assign) BOOL barrage;

/// 更新时间
@property (nonatomic,strong) NSString *create_time;

/// 邀请卡图片
@property (nonatomic,strong) NSString *third_image;

/// 是否可以匿名登录
@property (nonatomic,assign) BOOL anonymous_login;

/// 英文菜单
@property (nonatomic,strong) NSArray<LiveMenusENModel*> *live_menus_en;

/// 是否允许观看回放
@property (nonatomic,assign) BOOL record_access;

/// 直播id
@property (nonatomic,strong) NSString *ID;

@property (nonatomic,strong) NSString *url_rtmp;
/// 直播拉流地址
@property (nonatomic,strong) NSString *url_hls;

/// 是否开启英文观看
@property (nonatomic,assign) BOOL is_open_english;


@property (nonatomic,strong)QNHostUserInfo *userinfo;

/// 直播名称
@property (nonatomic,strong) NSString *title;

/// 直播开始时间
@property (nonatomic,strong) NSString *start_time;

///分享图片地址
@property (nonatomic,strong) NSString *share_card;

@property (nonatomic,strong) NSString *share_url;

/// 横屏竖屏 1竖屏 2 横屏
@property (nonatomic,assign) int play_mode;
//公告
@property (nonatomic,strong)NoticeDataModel *notice_data;
/// 直播中文菜单
@property (nonatomic,strong) NSArray<LiveMenusModel*> *live_menus;


// 课程简介
@property (nonatomic,strong) NSString *descriptions;

/// 是否公开
@property (nonatomic,assign) BOOL isOpen;

// leancloudId
@property (nonatomic,strong) NSString *chat_room_id;

/// 是否开启数据美化 
@property (nonatomic,assign) BOOL is_dummy_pv;

/// 暖场视频
@property (nonatomic,strong) HeadVideoModel *head_video;

/// 是否开启了购物车
@property (nonatomic,assign) BOOL has_product;

/// 双线路推流
@property (nonatomic,strong) ForLanguageModel *foreign_language_watch;

/// 邀请卡图片
@property (nonatomic,strong) NSString *code;

/// 封面图
@property (nonatomic,strong) NSString *image;

// 白板roomToken（netless）
@property (nonatomic,strong) NSString *white_board_roomToken;

/// 直播类型 1=推流直播, 2=单人网页直播，3=连麦直播 4=定时推流视频
@property (nonatomic,assign) int stream_url_type;

/// 是否打开抽奖
@property (nonatomic,assign) BOOL is_open_lottery;
/// 抽奖报名
@property (nonatomic,assign) BOOL apply_lottery;

/// 是否可以聊天
@property (nonatomic,assign) BOOL isProhibit;

/// 1是直播，2直播生成的回放，3是录播
@property (nonatomic,assign) int type;

/// 是否开启跑马灯
@property (nonatomic,assign) BOOL marquee;

/// 企业id
@property (nonatomic,strong) NSString *enterprise_id;

///
@property (nonatomic,assign) int stream_type;

/// 是否开启企业卡片
@property (nonatomic,assign) BOOL enterprise_card;

/// 回放地址
@property (nonatomic,strong) NSString *m3u8_url;

/// 付费观看 付费金额
@property (nonatomic,strong) NSString *amount;

/// 直播间状态
@property (nonatomic,assign) int active;

/// 是否有问卷、考试、投票
@property (nonatomic,assign) BOOL qev_exists;

// 是否开启水印
@property (nonatomic,assign) BOOL watermark;

/// 互动白板uuid
@property (nonatomic,strong) NSString *white_board_uuid;

/// 观看模式 whitelist（白名单） password（密码观看） paid（付费观看） none（公开观看）
@property (nonatomic,strong) NSString *limitType;

/// 是否开启了报名表单
@property (nonatomic,assign) BOOL apply_form;

// 来源
@property (nonatomic,strong) NSArray *menus;

/// 是否开启付费密码观看
@property (nonatomic,assign) BOOL codeStatus;

/// 结束时间
@property (nonatomic,strong) NSString *end_time;

/// 直播回放的截止日期
@property (nonatomic,strong) NSString *record_endDate;


@property (nonatomic,strong) SeckillData *seckill_data;

@end


@interface SeckillData : NSObject
@property (nonatomic,strong) NSString *seckill_id;
@property (nonatomic,assign) BOOL seckill_status;
@property (nonatomic,strong) NSString *seckill_time;
@end


@interface LotteryListModel : NSObject
/// 奖品id
@property (nonatomic,strong) NSString *ID;
// 奖品名称
@property (nonatomic,strong) NSString *name;
// 奖品数量
@property (nonatomic,assign) int number;
// 是否开奖 true-表示已经开奖 false-表示未开奖
@property (nonatomic,assign) bool isUse;
// 奖品封面图
@property (nonatomic,strong) NSString *image;
@property (nonatomic,strong) NSString *receive_instruction;
// 开奖方式 1-手动 2-自动
@property (nonatomic,assign) int run_type;
// 自动开奖时间
@property (nonatomic,assign) int run_time;
// 抽奖范围 1-抽奖码抽奖 2-名单抽奖
@property (nonatomic,assign) int run_scope;
// 发放奖品方式 1-默认 2-快递寄送 3-线上发放(需要对接)
@property (nonatomic,assign) int grant_prize_way;
@property (nonatomic,assign) int sortNo;
// 当前用户是否中奖 true-表示中奖 false-表示未中奖
@property (nonatomic,assign) bool is_winner;
@end


@interface LotteryInfoModel : NSObject
@property(nonatomic,strong)NSArray<LotteryListModel*> *prize_list;
// 是否已经报过名 true-表示已经报过名 false-表示未报名
@property(nonatomic,assign)bool is_apply;
// 是否允许查看中奖名单 true-表示允许查看 false-表示不允许查看
@property(nonatomic,assign)bool showWinners;
// 是否还有抽奖 true-有 false-没有
@property(nonatomic,assign)bool is_all_draw;

@end

@interface LotteryAddressModel : NSObject
@property(nonatomic,strong)NSString *prize_id;
@property(nonatomic,strong)NSString *key_name;
@property(nonatomic,strong)NSString *code;
@property(nonatomic,strong)NSString *hint;
@end

@interface FillInfoModel : NSObject
@property(nonatomic,strong)NSString *content;
@property(nonatomic,strong)NSString *name;
@end

@interface WinnerListModel : NSObject
@property(nonatomic,strong)NSString *prize_name;
@property(nonatomic,strong)NSString *name;
@property(nonatomic,strong)NSString *phone;
@property(nonatomic,assign)bool is_winner;


@end

@interface InviteListModel : NSObject
@property(nonatomic,strong) NSString *nickname;
@property(nonatomic,strong) NSString *shareUserId;
@property(nonatomic,strong) NSString *image;
@property(nonatomic,strong) NSString *third_user_id;
@property(nonatomic,assign) int invite_count;
@property(nonatomic,assign) NSInteger index;
@end

@interface GoodsProductModel : NSObject
@property(nonatomic,strong) NSString *app_id;
@property(nonatomic,strong) NSString *app_turn_url;
@property(nonatomic,strong) NSString *createDate;
@property(nonatomic,strong) NSString *goodsUrl;
@property(nonatomic,strong) NSString *ID;
@property(nonatomic,strong) NSString *image;
@property(nonatomic,assign) int jump_type;
@property(nonatomic,strong) NSString *name;
@property(nonatomic,strong) NSString *original_id;
@property(nonatomic,strong) NSString *page_path;
@property(nonatomic,strong) NSString *price;
@property(nonatomic,strong) NSString *price_end;
@property(nonatomic,strong) NSString *price_type;
@property(nonatomic,strong) NSString *subtitle;
@property(nonatomic,strong) NSString* product_label;
@property(nonatomic,strong) NSString* the_produce_id;
@end

@interface GoodsListModel : NSObject
@property(nonatomic,strong) NSString *ID;
@property(nonatomic,strong) GoodsProductModel *product;
@property(nonatomic,assign) NSInteger sort_no;
@property(nonatomic,assign) BOOL isShow;
@end

@interface SubjectModel : NSObject
@property(nonatomic,strong) NSString* content;
@property(nonatomic,strong) NSString* ID;
@property(nonatomic,assign) BOOL is_right;
@property(nonatomic,assign) BOOL isSelect;
@property(nonatomic,strong) NSString* quiz;
@end

@interface SubjectInfoModel : NSObject
@property(nonatomic,strong) NSString* name;
@property(nonatomic,strong) NSString* ID;
@property(nonatomic,strong) NSString* code;
@property(nonatomic,strong) NSString* quiz;
@property(nonatomic,strong) NSString* content;
@end

@interface AnswerSubjectModel : NSObject
@property(nonatomic,strong) NSString* all_count;
@property(nonatomic,strong) NSString* award_way;
@property(nonatomic,strong) NSArray<SubjectInfoModel*>* collect_info;
@property(nonatomic,strong) NSString* course_id;
@property(nonatomic,strong) NSString* createDate;
@property(nonatomic,strong) NSString* cue_word;
@property(nonatomic,strong) NSString* ID;
@property(nonatomic,assign) BOOL isHasSave;
@property(nonatomic,assign) BOOL isSend;
@property(nonatomic,assign) BOOL isShowCopy;
@property(nonatomic,strong) NSArray<SubjectModel*> *quiz_option;
@property(nonatomic,assign) long sendTime;
@property(nonatomic,assign) long sentOutDate;
@property(nonatomic,assign) int status;
@property(nonatomic,assign) int sumbitType;
@property(nonatomic,assign) long time;
@property(nonatomic,strong) NSString* title;
@property(nonatomic,assign) int type;
@property(nonatomic,strong) NSString* updateDate;
@end

@interface SubjectResultModel : NSObject
@property(nonatomic,assign) int ranking;
@property(nonatomic,strong) NSString* use_time;
@property(nonatomic,assign) BOOL isCorrect;
@property(nonatomic,strong) NSArray<SubjectInfoModel*>* collect_info;
@property(nonatomic,strong) NSString* tips;
@property(nonatomic,strong) NSString* ID;
@end

@interface TopicListModel : NSObject
@property(nonatomic,strong) NSString* nickname;
@property(nonatomic,strong) NSString* percent;
@property(nonatomic,assign) int right_count;
@property(nonatomic,assign) int ranking;
@property(nonatomic,strong) NSString* total_use_time;
@property(nonatomic,strong) NSString* use_time;
@property(nonatomic,strong) NSString* userId;

@end


NS_ASSUME_NONNULL_END
