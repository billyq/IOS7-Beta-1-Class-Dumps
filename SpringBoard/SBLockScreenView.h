/* SBLockScreenView.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBAlertView.h"
#import "SpringBoard-Structs.h"
#import "SBGlintyStringViewDelegate.h"
#import "UIScrollViewDelegate.h"

@class _UIBackdropView, SBUILockScreenDateView, SBGlintyStringView, UILabel, SBLockOverlayStyleProperties, SBAdaptiveColorInfo, SBAdaptiveColorProvider, UIView, SBLockScreenTimerView, SBLockScreenScrollView, UIScrollView, SBChevronView, UIColor, NSMutableSet, NSMutableArray, SBLockScreenBounceAnimator;
@protocol SBUIPasscodeLockView, SBLockScreenViewDelegate, SBColorAdaptable;

__attribute__((visibility("hidden")))
@interface SBLockScreenView : SBAlertView <UIScrollViewDelegate, SBGlintyStringViewDelegate> {
	SBLockOverlayStyleProperties* _contentUnderlayOverride;
	NSMutableSet* _contentUnderlayRequesters;
	NSMutableArray* _contentOverlays;
	UIView* _passcodeOverlayView;
	UIView* _wallpaperClippingView;
	_UIBackdropView* _wallpaperBlurView;
	UIView* _foregroundView;
	SBLockScreenScrollView* _foregroundScrollView;
	UIView* _foregroundLockView;
	UIView* _foregroundLockUnderlayView;
	UIView* _foregroundLockContentView;
	UIView* _foregroundLockContentOverlaysView;
	UIView* _foregroundLockHUDView;
	SBUILockScreenDateView* _dateView;
	UILabel* _legalView;
	SBLockScreenTimerView* _timerView;
	SBGlintyStringView* _slideToUnlockView;
	UILabel* _slideToUnlockMaskView;
	SBChevronView* _topGrabberView;
	SBChevronView* _bottomGrabberView;
	UIView<SBColorAdaptable>* _cameraGrabberView;
	UIView<SBUIPasscodeLockView>* _passcodeView;
	UIView* _batteryChargingView;
	UIView* _modalAlertView;
	UIView* _notificationView;
	UIView* _pluginView;
	UIView* _personalHotspotView;
	UIView* _emergencyCallView;
	UIView* _mediaControlsView;
	NSMutableSet* _foregroundHiddenRequesters;
	NSMutableSet* _foregroundLockContentHiddenRequesters;
	NSMutableSet* _foregroundLockContentOverlaysHiddenRequesters;
	NSMutableSet* _foregroundLockHUDHiddenRequesters;
	NSMutableSet* _slideToUnlockHiddenRequesters;
	NSMutableSet* _modalAlertHiddenRequesters;
	NSMutableSet* _notificationsHiddenRequesters;
	NSMutableSet* _passcodeHiddenRequesters;
	NSMutableSet* _topGrabberHiddenRequesters;
	NSMutableSet* _bottomGrabberHiddenRequesters;
	NSMutableSet* _cameraGrabberHiddenRequesters;
	NSMutableSet* _legalTextHiddenRequesters;
	NSMutableSet* _personalHotspotHiddenRequesters;
	NSMutableSet* _mediaControlsHiddenRequesters;
	float _foregroundTranslationY;
	SBLockScreenBounceAnimator* _bounceAnimator;
	NSMutableArray* _scrollCompletionBlocks;
	int _currentPage;
	CGPoint _staringContentOffset;
	BOOL _pluginBelowForeground;
	BOOL _setGrabberOrigins;
	float _topGrabberOriginalOriginY;
	float _bottomGrabberOriginalOriginY;
	float _defaultBlurRadius;
	float _defaultUnderlayMaxAlpha;
	UIColor* _defaultUnderlayColor;
	UIView* _whiteUnderlayView;
	SBAdaptiveColorProvider* _adaptiveColorProvider;
	BOOL _shouldKnockoutDateView;
	BOOL _shouldKnockoutSlideToUnlockView;
	id<SBLockScreenViewDelegate> _delegate;
	SBAdaptiveColorInfo* _bottomColorInfo;
	SBAdaptiveColorInfo* _topColorInfo;
	double _lastSlideToUnlockAnimationStartTime;
}
@property(readonly, assign, nonatomic) UIView* foregroundView;
@property(retain, nonatomic) SBChevronView* bottomGrabberView;
@property(retain, nonatomic) SBChevronView* topGrabberView;
@property(readonly, assign, nonatomic) UIScrollView* scrollView;
@property(readonly, assign, nonatomic) double lastSlideToUnlockAnimationStartTime;
@property(retain, nonatomic) SBAdaptiveColorInfo* topColorInfo;
@property(retain, nonatomic) SBAdaptiveColorInfo* bottomColorInfo;
@property(assign, nonatomic) BOOL shouldKnockoutSlideToUnlockView;
@property(assign, nonatomic) BOOL shouldKnockoutDateView;
@property(retain, nonatomic) UIView* mediaControlsView;
@property(retain, nonatomic) UIView* personalHotspotView;
@property(retain, nonatomic) UIView* batteryChargingView;
@property(retain, nonatomic) UIView<SBColorAdaptable>* cameraGrabberView;
@property(retain, nonatomic) UIView<SBUIPasscodeLockView>* passcodeView;
@property(retain, nonatomic) UIView* notificationView;
@property(retain, nonatomic) UIView* modalAlertView;
@property(retain, nonatomic) SBLockScreenTimerView* timerView;
@property(retain, nonatomic) UILabel* legalView;
@property(retain, nonatomic) SBUILockScreenDateView* dateView;
@property(assign) id<SBLockScreenViewDelegate> delegate;
-(void)glintyAnimationDidStop;
-(void)glintyAnimationDidStart;
-(void)didMoveToWindow;
-(void)willMoveToWindow:(id)window;
-(void)scrollViewWillEndDragging:(id)scrollView withVelocity:(CGPoint)velocity targetContentOffset:(inout CGPoint*)offset;
-(void)scrollViewDidEndScrollingAnimation:(id)scrollView;
-(void)scrollViewDidEndDragging:(id)scrollView willDecelerate:(BOOL)decelerate;
-(void)scrollViewDidScroll:(id)scrollView;
-(void)scrollViewDidEndDecelerating:(id)scrollView;
-(void)scrollViewWillBeginDragging:(id)scrollView;
-(void)_preventScrollingOnGrabberView:(id)view;
-(void)_scrollingDidFinish;
-(float)_percentScrolled;
-(float)_percentScrolledForOffset:(float)offset;
-(void)_updateOverlaysForScroll:(float)scroll;
-(void)resetContentOffsetToCurrentPage;
-(void)scrollToPage:(int)page animated:(BOOL)animated completion:(id)completion;
-(void)scrollToPage:(int)page animated:(BOOL)animated;
-(void)_scrollBy:(float)by;
-(BOOL)_isValidPage:(unsigned)page;
-(void)_setCurrentPage:(int)page;
-(int)currentPage;
-(void)_setScrollingEnabled:(BOOL)enabled;
-(UIEdgeInsets)_notificationViewInsets;
-(float)_mediaControlsHeight;
-(float)_mediaControlsY;
-(float)_timeBaselineY;
-(float)_slideToUnlockInset;
-(void)_layoutPluginView;
-(void)_layoutChargingView;
-(void)_layoutEmergencyCallView;
-(void)_layoutPasscodeView;
-(void)_layoutOverlayViews;
-(void)_layoutScrollView;
-(void)_layoutModalAlertView;
-(void)_layoutNotificationView;
-(void)_adjustTopAndBottomGrabbersForPercentScrolled:(float)percentScrolled;
-(float)_bottomGrabberYOriginForPercentScrolled:(float)percentScrolled;
-(float)_topGrabberYOriginForPercentScrolled:(float)percentScrolled;
-(void)_layoutGrabberView:(id)view atTop:(BOOL)top percentScrolled:(float)scrolled;
-(void)_layoutGrabberView:(id)view atTop:(BOOL)top;
-(void)_layoutCameraGrabberView;
-(void)_layoutSlideToUnlockView;
-(void)_layoutPersonalHotspotView;
-(float)_personalHotspotHeight;
-(float)_personalHotspotYOrigin;
-(void)_layoutTimerView;
-(void)_layoutLegalView;
-(void)_layoutMediaControlsView;
-(void)_layoutDateView;
-(void)_layoutLockHUDView;
-(void)_layoutLockContentView;
-(void)_layoutLockView;
-(void)_layoutWallpaperView;
-(void)_layoutForegroundView;
-(void)layoutSubviews;
-(void)_setLockContentUnderlayOverride:(id)override;
-(void)_removeLockContentUnderlayWithRequester:(id)requester;
-(void)_addLockContentUnderlayWithRequester:(id)requester;
-(BOOL)_hasLockContentUnderlayRequester:(id)requester;
-(void)_evaluateOverlaysForChange;
-(void)_setWallpaperBlurRadius:(float)radius;
-(void)_removeLockContentOverlay:(id)overlay;
-(void)_addLockContentOverlay:(id)overlay;
-(BOOL)_lockContentOverlaysShouldBeHidden;
-(void)_passcodePropertiesChanged;
-(BOOL)_shouldAnimatePropertyWithKey:(id)key;
-(id)_defaultSlideToUnlockText;
-(id)_newScrollView;
-(void)_addBounceAnimator;
-(void)_addGrabberViews;
-(void)_updateLegibility;
-(void)_addBackTopGrabberView:(id)view;
-(void)_addViews;
-(BOOL)isCurrentPageTransparent;
-(void)setCustomSlideToUnlockText:(id)unlockText;
-(void)setMediaControlsHidden:(BOOL)hidden forRequester:(id)requester;
-(void)setPersonalHotspotHidden:(BOOL)hidden forRequester:(id)requester;
-(void)setTopBottomGrabbersHidden:(BOOL)hidden forRequester:(id)requester;
-(void)setBottomGrabberHidden:(BOOL)hidden forRequester:(id)requester;
-(void)setTopGrabberHidden:(BOOL)hidden forRequester:(id)requester;
-(void)setPasscodeHidden:(BOOL)hidden forRequester:(id)requester;
-(void)setNotificationsHidden:(BOOL)hidden forRequester:(id)requester;
-(void)setModalAlertHidden:(BOOL)hidden forRequester:(id)requester;
-(void)setSlideToUnlockHidden:(BOOL)unlockHidden forRequester:(id)requester;
-(void)setLegalTextHidden:(BOOL)hidden forRequester:(id)requester;
-(void)setCameraGrabberHidden:(BOOL)hidden forRequester:(id)requester;
-(void)setLockHUDHidden:(BOOL)hidden forRequester:(id)requester;
-(void)setLockContentOverlaysHidden:(BOOL)hidden forRequester:(id)requester;
-(void)setLockContentHidden:(BOOL)hidden forRequester:(id)requester;
-(void)setForegroundHidden:(BOOL)hidden forRequester:(id)requester;
-(void)slideForegroundVerticallyBy:(float)by;
-(void)stopAnimating;
-(void)startAnimating;
-(void)setPluginView:(id)view presentationStyle:(unsigned)style;
-(void)setEmergencyCallView:(id)view withDuration:(double)duration completion:(id)completion;
-(BOOL)hasTransparentUnderlay;
-(id)description;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end
