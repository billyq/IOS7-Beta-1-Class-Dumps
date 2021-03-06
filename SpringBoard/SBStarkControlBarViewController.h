/* SBStarkControlBarViewController.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SpringBoard-Structs.h"
#import "UIStatusBarStyleDelegate.h"

@class SBStarkFakeIconOperationController, NSMutableSet, SBStarkScreenFocusController, UIStatusBar, UIViewController;
@protocol SBStarkLauncher, SBStarkControlBarDelegate;

__attribute__((visibility("hidden")))
@interface SBStarkControlBarViewController : XXUnknownSuperclass <UIStatusBarStyleDelegate> {
	id<SBStarkControlBarDelegate> _delegate;
	double _autoHideDelay;
	NSMutableSet* _launcherHideReasons;
	UIViewController<SBStarkLauncher>* _launcherViewController;
	UIStatusBar* _statusBarView;
	id<UIStatusBarStyleDelegate> _statusBarStyleDelegate;
	NSMutableSet* _statusBarHideReasons;
	int _requestedStyle;
	SBStarkScreenFocusController* _focusController;
	SBStarkFakeIconOperationController* _fakeIconOperationController;
}
@property(retain, nonatomic) SBStarkFakeIconOperationController* fakeIconOperationController;
@property(retain, nonatomic) SBStarkScreenFocusController* focusController;
@property(assign, nonatomic) id<UIStatusBarStyleDelegate> statusBarStyleDelegate;
@property(assign, nonatomic) double autoHideDelay;
@property(readonly, assign, nonatomic) CGPoint highestVisiblePoint;
@property(assign, nonatomic) id<SBStarkControlBarDelegate> delegate;
-(void)statusBar:(id)bar didTriggerButtonType:(int)type withAction:(int)action;
-(void)statusBar:(id)bar didAnimateFromHeight:(float)height toHeight:(float)height3 animation:(int)animation;
-(void)statusBar:(id)bar willAnimateFromHeight:(float)height toHeight:(float)height3 duration:(double)duration animation:(int)animation;
-(int)statusBar:(id)bar styleForRequestedStyle:(int)requestedStyle overrides:(int)overrides;
-(BOOL)_isStatusBarHidden;
-(void)_autoHideTriggered;
-(void)_resetAutoHideTimer;
-(CGRect)_launcherViewFrameForVisibility:(BOOL)visibility;
-(void)_setLauncherHidden:(BOOL)hidden forReason:(id)reason withAnimationFactory:(id)animationFactory fallbackToDefaultAnimationFactory:(BOOL)defaultAnimationFactory;
-(BOOL)_isLauncherHidden;
-(void)viewDidLayoutSubviews;
-(void)loadView;
-(void)updateStatusBarWithRequestedStyle:(int)requestedStyle animationFactory:(id)factory;
-(void)setStatusBarHidden:(BOOL)hidden forReason:(id)reason withAnimationFactory:(id)animationFactory;
-(void)setLauncherHidden:(BOOL)hidden forReason:(id)reason withAnimationFactory:(id)animationFactory;
-(void)setLauncherHidden:(BOOL)hidden forReason:(id)reason animated:(BOOL)animated;
-(void)dealloc;
-(id)initWithInterfaceType:(int)interfaceType;
@end
