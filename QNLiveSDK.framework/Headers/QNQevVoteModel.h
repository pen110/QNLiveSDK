//
//  QNQevVoteModel.h
//  QNLiveSDK
//
//  Created by 潘欣 on 2022/7/20.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
@class QNOptionsModel;
@class QNShortAnswer;
@class OptionContentModel;
@interface QNQevVoteModel : NSObject
@property (nonatomic,assign) int active;
@property (nonatomic,assign) int course;
@property (nonatomic,strong) NSString *ID;
@property (nonatomic,assign) int isShow;
@property (nonatomic,strong)NSArray<QNOptionsModel *>*options;
@property (nonatomic,strong)NSArray<QNShortAnswer *>*shortAnswer;
@property (nonatomic,strong) NSString *type;
@end

@interface QNOptionsModel : NSObject
@property (nonatomic,assign) int active;
@property (nonatomic,strong) NSString *ID;
@property (nonatomic,assign) int isMust;
@property (nonatomic,strong) NSString *limitAmount;
@property (nonatomic,assign) int qev;
@property (nonatomic,assign) int score;
@property (nonatomic,strong) NSString *sortNo;
@property (nonatomic,strong) NSString *title;
@property (nonatomic,strong) NSString *type;
@property (nonatomic,strong)NSArray<OptionContentModel *>*optionContent;

//保存选择的内容，可选
@property (nonatomic,strong)NSMutableArray *array;

@property (nonatomic,strong)NSMutableDictionary *dicts;
@end


@interface OptionContentModel : NSObject
@property (nonatomic,assign) int active;
@property (nonatomic,assign) int attrOption;
@property (nonatomic,strong) NSString *ID;
@property (nonatomic,assign) int isRight;
@property (nonatomic,strong) NSString *sortNo;
@property (nonatomic,strong) NSString *type;
@property (nonatomic,strong) NSString *title;
@property (nonatomic, assign) BOOL isSelect;

@property (nonatomic,strong)NSArray *answerArray;
@end


@interface QNShortAnswer : NSObject
@property (nonatomic,assign) int active;
@property (nonatomic,strong) NSString *ID;
@property (nonatomic,assign) int isMust;
@property (nonatomic,assign) int qev;
@property (nonatomic,strong) NSString *sortNo;
@property (nonatomic,strong) NSString *title;
@property (nonatomic,strong) NSString *type;
@property (nonatomic,strong) NSString *answerContent;

@property (nonatomic,strong)NSMutableDictionary *answerDict;
@end

NS_ASSUME_NONNULL_END
