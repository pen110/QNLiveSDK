//
//  QNApplyFormModel.h
//  QNLiveSDK
//
//  Created by 潘欣 on 2022/7/13.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface QNApplyFormModel : NSObject
@property (nonatomic,strong) NSString *code;
@property (nonatomic,strong) NSString *hint;
@property (nonatomic,assign) BOOL is_must;
@property (nonatomic,strong) NSString *name;
@property (nonatomic,strong) NSString *options;
@property (nonatomic,strong) NSString *type;
@property (nonatomic,strong) NSString *liveId;
@end

NS_ASSUME_NONNULL_END
