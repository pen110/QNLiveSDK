//
//  QNKickOutListModel.h
//  QNLiveSDK
//
//  Created by 潘欣 on 2022/10/25.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface QNKickOutListModel : NSObject
@property(nonatomic,strong) NSString *ID;
@property(nonatomic,strong) NSString *nickname;
@property(nonatomic,strong) NSString *userId;
@property(nonatomic,strong) NSString *userImage;
@end

NS_ASSUME_NONNULL_END
