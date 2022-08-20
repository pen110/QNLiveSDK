//
//  PLPlayerView.h
//  NiuPlayer
//  Created by 潘欣 on 2022/5/31.
//


#import <UIKit/UIKit.h>
#import "PlayerModel.h"
#import <PLPlayerKit/PLPlayerKit.h>
@class PLPlayerView;
@protocol PLPlayerViewDelegate <NSObject>

- (void)playerViewEnterFullScreen:(PLPlayerView *)playerView;

- (void)playerViewExitFullScreen:(PLPlayerView *)playerView;

- (void)playerViewWillPlay:(PLPlayerView *)playerView;

//告知代理对象播放器状态变更
- (void)playerView:(PLPlayerView *)playerView withStatusDidChange:(PLPlayerStatus)state;
//告知代理对象播放器因错误停止播放
- (void)playerView:(PLPlayerView *)playerView stoppedWithError:(NSError *)error;

@end

@interface PLPlayerView : UIView

@property (nonatomic, weak) id<PLPlayerViewDelegate> delegate;

@property (nonatomic, strong)PlayerModel *model;

- (void)play;

- (void)stop;

- (void)pause;

- (void)resume;

- (void)configureVideo:(BOOL)enableRender;
@end


typedef enum : NSUInteger {
    PLPlayerRatioDefault,
    PLPlayerRatioFullScreen,
    PLPlayerRatio16x9,
    PLPlayerRatio4x3,
} PLPlayerRatio;


@class PLControlView;
@protocol PLControlViewDelegate <NSObject>

- (void)controlViewClose:(PLControlView *)controlView;

- (void)controlView:(PLControlView *)controlView speedChange:(CGFloat)speed;

- (void)controlView:(PLControlView *)controlView ratioChange:(PLPlayerRatio)ratio;

- (void)controlView:(PLControlView *)controlView backgroundPlayChange:(BOOL)isBackgroundPlay;

- (void)controlViewMirror:(PLControlView *)controlView;

- (void)controlViewRotate:(PLControlView *)controlView;

- (BOOL)controlViewCache:(PLControlView *)controlView;

@end

@interface PLControlView : UIView

@property (nonatomic, weak) id<PLControlViewDelegate> delegate;

@property (nonatomic, strong) UIScrollView *scrollView;
@property (nonatomic, strong) UISegmentedControl *speedControl;
@property (nonatomic, strong) UISegmentedControl *ratioControl;
@property (nonatomic, strong) UILabel *speedValueLabel;
@property (nonatomic, strong) UILabel *speedTitleLabel;

@property (nonatomic, strong) UIButton *playBackgroundButton;
@property (nonatomic, strong) UIButton *mirrorButton;
@property (nonatomic, strong) UIButton *rotateButton;
@property (nonatomic, strong) UIButton *cacheButton;

- (void)resetStatus;
@end
