//
//  QNAnswerModel.h
//  QNLiveSDK
//
//  Created by 潘欣 on 2022/7/22.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
@class AnswerResult;
@class OpContentModel;
@interface QNAnswerModel : NSObject
//总分数
@property (nonatomic,strong)NSString *totle_score;
@property (nonatomic,strong)NSArray<AnswerResult *> *result;


//问卷
@property (nonatomic,assign)int is_answer;
@property (nonatomic,assign)int types;
@end


@interface AnswerResult : NSObject
//注意判断类型！answer 单选，多选，是数组，问答是字符串
@property (nonatomic,strong)id answer;
@property (nonatomic,strong)NSString *sortNo;


//问卷
@property (nonatomic,assign)int counts;
@property (nonatomic,strong)NSArray <OpContentModel *>*optionContent;
@end


@interface OpContentModel : NSObject
@property (nonatomic,assign)int counts;
@property (nonatomic,assign)int is_person_answer;
@property (nonatomic,strong)NSString *sortNo;
@end
NS_ASSUME_NONNULL_END
