//
//  UserInfoModel.h
//  QNLiveSDK
//
//  Created by 潘欣 on 2022/7/14.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
@class Userinfo;
@interface UserInfoModel : NSObject
@property (nonatomic,assign) int applyinfo;
@property (nonatomic,assign) int channel_enterprise_id;
@property (nonatomic,assign) int channel_user;
@property (nonatomic,assign) int ID;
@property (nonatomic,strong) NSString *openid;
@property (nonatomic,strong) NSString *unionid;

@property (nonatomic,strong) Userinfo *userinfo;
//2 phone 手机号
//3 name 姓名
//4 job_num 工号
//5 email 邮箱
//6 city 城市
//7 enterprise 企业
@property (nonatomic,assign) int limitCondition;
@property (nonatomic,strong) NSString *limitName;
@end

@interface Userinfo : NSObject
@property (nonatomic,strong) NSString *address;
@property (nonatomic,strong) NSString *city;
@property (nonatomic,strong) NSString *company;
@property (nonatomic,strong) NSString *department;
@property (nonatomic,strong) NSString *email;
@property (nonatomic,strong) NSString *headImageUrl;
@property (nonatomic,strong) NSString *intro;
@property (nonatomic,strong) NSString *job_num;
@property (nonatomic,strong) NSString *name;
@property (nonatomic,strong) NSString *nickname;
@property (nonatomic,strong) NSString *owner_id;
@property (nonatomic,strong) NSString *phone;
@property (nonatomic,strong) NSString *position;
//# 1－管理员, 2-超管, 3-讲师, 4-直播助手 5-普通用户 6-匿名用户 7-子账号
@property (nonatomic,assign) int type;
@end

NS_ASSUME_NONNULL_END
