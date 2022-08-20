//
//  PlayerModel.h
//  QNLiveSDK
//
//  Created by 潘欣 on 2022/5/31.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface PlayerModel : NSObject
@property (nonatomic,assign) NSInteger type;
@property (nonatomic,strong) NSString *title;
/// 横屏竖屏 1竖屏 2 横屏
@property (nonatomic,assign) int play_mode;
@end

NS_ASSUME_NONNULL_END
