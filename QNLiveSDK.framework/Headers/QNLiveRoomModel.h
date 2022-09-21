//
//  QNLiveRoomModel.h
//  QNLiveSDK
//
//  Created by 潘欣 on 2022/6/10.
//

#import <Foundation/Foundation.h>
//#import "CourseModel.h"
NS_ASSUME_NONNULL_BEGIN

@interface QNLiveRoomModel : NSObject
/** 1是直播，2直播生成的回放，3是录播，*/
@property (nonatomic,assign) int isRecorde;

//# 1-正在直播 2-未开始 3-主播不在 4-已结束
@property (nonatomic,assign) int live_status;

/// 是否允许观看回放
@property (nonatomic,assign) BOOL record_access;

/** 直播间标题 */
@property (nonatomic,copy) NSString *title;

/** 开始时间 */
@property (nonatomic,copy) NSString *start_time;
/** 封面图 */
@property (nonatomic,copy) NSString *cover;

/** 真实直播浏览量 */
@property (nonatomic,assign) NSInteger pv_count;

/** 美化后直播浏览量 */
@property (nonatomic,assign) NSInteger dummy_pv_count;

/** 点赞数 */
@property (nonatomic,assign) NSInteger like_count;
@property (nonatomic,assign) NSInteger sign_course;

/** 美化后点赞数 */
@property (nonatomic,assign) NSInteger dummy_like_count;

/** 是否被禁言 */
@property (nonatomic,assign) BOOL is_forbidden;

/**全体禁言*/
@property (nonatomic,assign) BOOL isProhibit;

/** 是否被踢出直播间 */
@property (nonatomic,assign) BOOL is_kickout;

/// 是否开启了购物车
@property (nonatomic,assign) BOOL has_product;

/// 横屏竖屏 1竖屏 2 横屏
@property (nonatomic,assign) int play_mode;
///是否打开抽奖
@property (nonatomic,assign) BOOL is_open_lottery;

//秒杀
@property (nonatomic,strong) NSString *seckill_id;
@property (nonatomic,assign) BOOL seckill_status;
@property (nonatomic,strong) NSString *seckill_time;

//更多内容
@property (nonatomic,strong) NSArray<LiveMenusModel*> *live_menus;

/// 是否开启付费密码观看
@property (nonatomic,assign) BOOL codeStatus;

/// 观看模式 whitelist（白名单） password（密码观看） paid（付费观看） none（公开观看）
@property (nonatomic,strong) NSString *limitType;

//公告
@property (nonatomic,strong)NoticeDataModel *notice_data;

///分享图片地址
@property (nonatomic,strong) NSString *share_card;

@property (nonatomic,strong) NSString *share_url;

//主播信息
@property (nonatomic,strong) QNHostUserInfo *userInfo;
@end

NS_ASSUME_NONNULL_END
