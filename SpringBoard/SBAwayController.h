/* SBAwayController.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBSlidingAlertDisplayDelegate.h"
#import "SpringBoard-Structs.h"
#import "SBLockScreenViewControllerBase.h"

@class UIImageView, NSObject, NSDictionary, SBShowcaseController, SBPasscodeLockDisableAssertion, SBApplication, UIView, NSMutableDictionary, SBAwayBulletinListController, NSString, NSMutableArray, NSDate, SBAlertItem, SBUIController, SBAwayView, _UIDynamicValueAnimation, PLCameraPageController;
@protocol OS_dispatch_queue, SBDeviceLockViewOwner;

__attribute__((visibility("hidden")))
@interface SBAwayController : SBLockScreenViewControllerBase <SBSlidingAlertDisplayDelegate> {
	SBUIController* _uiController;
	SBShowcaseController* _showcaseController;
	SBAwayView* _awayView;
	unsigned _isActive : 1;
	unsigned _isDimmed : 1;
	unsigned _isDimming : 1;
	unsigned _orderedOutDimmed : 1;
	unsigned _frontDimmed : 1;
	unsigned _makingEmergencyCall : 1;
	unsigned _showOverheatUI : 1;
	unsigned _performingAutoUnlock : 1;
	unsigned _validPhotoCountCheck : 1;
	unsigned _showcaseAnimating : 1;
	unsigned _animatingDeactivation : 1;
	NSDictionary* _nowPlayingInfo;
	SBApplication* _nowPlayingApp;
	id<SBDeviceLockViewOwner> _deviceUnlockDisplay;
	BOOL _chargingViewHasFadedOut;
	NSMutableArray* _pendingAlertItems;
	NSMutableArray* _pendingSuperModalAlertItems;
	SBAlertItem* _currentAlertItem;
	SBAwayBulletinListController* _savedBulletinController;
	NSMutableDictionary* _awayViewPluginControllers;
	NSString* _alwaysFullscreenAwayPluginName;
	NSMutableArray* _lockScreenBundlesToDisableAfterUnlock;
	BOOL _cameraModeActive;
	BOOL _cameraVisible;
	BOOL _animatingCameraIn;
	_UIDynamicValueAnimation* _dynamicCameraAnimation;
	BOOL _cancelCameraAnimation;
	PLCameraPageController* _cameraViewController;
	UIImageView* _cameraDefaultImageView;
	UIView* _cameraBackgroundView;
	UIView* _cameraContainerView;
	UIView* _cameraSlidingContainerView;
	UIView* _cameraFakeStatusBar;
	UIView* _cameraShadowView;
	NSDate* _lastCameraSessionID;
	BOOL _exitedCameraForAlert;
	BOOL _restartCameraAfterCall;
	BOOL _disableGracePeriodForCamera;
	SBPasscodeLockDisableAssertion* _disableGracePeriodForCameraAssertion;
	NSObject<OS_dispatch_queue>* _prewarmQueue;
	id _savedWindowDelegate;
	int _gracePeriodWhenLocked;
	BOOL _keepBulletinsUnreadOnUnlock;
	BOOL _sbFinishedLaunching;
}
@property(retain, nonatomic) SBShowcaseController* showcaseController;
@property(assign, nonatomic) BOOL chargingViewHasFadedOut;
+(void)registerForAlerts;
-(void)willAnimateToggleDeviceLockWithStyle:(int)style toVisibility:(BOOL)visibility withDuration:(double)duration;
-(void)showcase:(id)showcase didTransferOwnershipToOwner:(id)owner;
-(void)assumeShowcaseOwnership:(id)ownership;
-(void)showcaseWantsToBeDismissed:(id)beDismissed animated:(BOOL)animated;
-(void)showcase:(id)showcase updateRevealMode:(int)mode withBlock:(id)block;
-(BOOL)presentShowcaseViewController:(id)controller revealMode:(int)mode completion:(id)completion;
-(void)_adjustViewHierarchyForShowcase:(id)showcase revealAmount:(float)amount;
-(float)showcaseWindowLevel:(id)level;
-(void)_sendToDeviceLockOwnerAnimateToEmergencyCall;
-(BOOL)_sendToDeviceLockOwnerShouldUseTransparentStatusBar;
-(BOOL)_sendToDeviceLockOwnerIsDisplayingErrorStatus;
-(void)_sendToDeviceLockOwnerDeviceUnlockFailed;
-(void)_sendToDeviceLockOwnerDeviceUnlockSucceeded;
-(void)_sendToDeviceLockOwnerSetShowingDeviceLock:(BOOL)deviceLockOwnerSetShowingDeviceLock animated:(BOOL)animated;
-(void)_sendToDeviceLockOwnerSetShowingDeviceLock:(BOOL)deviceLockOwnerSetShowingDeviceLock;
-(void)updateLockSlider;
-(void)stopLockSliderAnimations;
-(void)startLockSliderAnimations;
-(void)updateInterfaceIfNecessary;
-(void)unlockAlwaysFullscreenAwayView;
-(void)enableAlwaysFullscreenAwayPlugin;
-(BOOL)isAlwaysFullscreenAwayPluginEnabled;
-(void)setAlwaysFullscreenAwayPluginName:(id)name;
-(BOOL)handleHeadsetButtonPressed:(BOOL)pressed;
-(BOOL)handleVolumeDownButtonPressed;
-(BOOL)handleVolumeUpButtonPressed;
-(BOOL)handleLockButtonPressed;
-(void)handleSlideshowHardwareButton;
-(void)hardwareKeyboardAvailabilityChanged;
-(BOOL)handleMenuButtonHeld;
-(BOOL)handleMenuButtonDoubleTap;
-(BOOL)handleMenuButtonTap;
-(CGRect)defaultContentRegionForPluginController:(id)pluginController withOrientation:(int)orientation;
-(BOOL)awayPluginControllerShouldAnimateOthersResumption;
-(void)pluginFullscreenNotification:(id)notification;
-(void)disablePluginContainerNotification:(id)notification;
-(void)_awayViewFinishedAnimatingOut:(id)anOut;
-(void)_disablePluginControllersForUnlock;
-(void)_disablePluginControllersForLock;
-(void)pluginVisiblityStateChanged:(id)changed;
-(void)disableLockScreenBundleWithName:(id)name deactivationContext:(id)context;
-(void)disableLockScreenBundleWithName:(id)name;
-(void)enableLockScreenBundleWithName:(id)name;
-(void)enableLockScreenBundleWithName:(id)name activationContext:(id)context;
-(id)nameOfPluginController:(id)pluginController;
-(id)interfaceControllingAwayPluginController;
-(id)activeAwayPluginController;
-(id)highestPriorityAwayPluginController;
-(BOOL)isAwayPluginViewVisible;
-(void)toggleShowsIMEIandICCID:(id)iccid;
-(BOOL)toggleMediaControls;
-(void)hideMediaControls;
-(BOOL)isShowingMediaControls;
-(void)_batteryStatusChanged;
-(BOOL)shouldShowInCallUI;
-(void)updateInCallUI:(id)callUI;
-(void)updateCardItem:(id)item;
-(void)deactivateCardItem:(id)item;
-(void)activateCardItem:(id)item animated:(BOOL)animated;
-(void)deactivateAlertItem:(id)item;
-(BOOL)wantsToHandleAlert:(id)handleAlert;
-(BOOL)activateAlertItem:(id)item;
-(void)noteAlertSheetWasReplaced:(id)replaced withAlertSheet:(id)alertSheet;
-(void)pendOrDeactivateCurrentAlertItem;
-(id)currentAlertItem;
-(void)didAnimateLockKeypadOut;
-(void)didAnimateLockKeypadIn;
-(BOOL)isMakingEmergencyCall;
-(void)emergencyCallWasRemoved;
-(void)emergencyCallWasDisplayed;
-(void)makeEmergencyCall;
-(void)handleRequestedAlbumArt:(id)art;
-(void)_nowPlayingStateChanged:(id)changed;
-(void)_nowPlayingAppChanged:(id)changed;
-(void)updateAwayViewNowPlayingInfo;
-(void)updateNowPlayingInfo:(id)info app:(id)app;
-(void)didFinishAnimatingOut;
-(int)statusBarStyleOverridesToCancel;
-(int)statusBarStyle;
-(int)effectiveStatusBarStyle;
-(BOOL)allowsStackingOfAlert:(id)alert;
-(void)removeFromView;
-(void)deactivate;
-(void)animateDeactivation;
-(void)activate;
-(void)undimScreen:(BOOL)screen;
-(void)undimScreen;
-(int)interfaceOrientationForActivation;
-(void)dimScreen:(BOOL)screen;
-(BOOL)handleExternalKeyDownEvent;
-(BOOL)lockScreenBulletinControllerIsActive;
-(id)currentUnlockActionContext;
-(BOOL)lockScreenIsShowingBulletins;
-(void)setShowingOverheatUI:(BOOL)ui;
-(BOOL)isShowingOverheatUI;
-(void)prepareToEnterLostMode;
-(id)activeLockScreenPluginController;
-(BOOL)isLockScreenPluginViewVisible;
-(BOOL)hasActiveUIAccessories;
-(BOOL)isInScreenOffMode;
-(void)setInScreenOffMode:(BOOL)screenOffMode;
-(void)restartViewRelatedTimers;
-(void)clearViewRelatedTimers;
-(BOOL)isShowingNewBulletin;
-(BOOL)canRelockForAutoDimTimer;
-(BOOL)wantsScreenToAutoDim;
-(id)activationBlockAnimated:(BOOL)animated;
-(void)noteStartingPhoneCallWhileUILocked;
-(void)launchEmergencyDialer;
-(void)finishUIUnlockFromSource:(int)source;
-(BOOL)canBeDeactivatedForUIUnlockFromSource:(int)source;
-(void)prepareForUIUnlock;
-(BOOL)wantsPasscodeLockForUIUnlockFromSource:(int)source withOptions:(id)options;
-(BOOL)isPasscodeLockVisible;
-(void)setPasscodeLockVisible:(BOOL)visible animated:(BOOL)animated withUnlockSource:(int)unlockSource andOptions:(id)options;
-(void)setPasscodeLockVisible:(BOOL)visible animated:(BOOL)animated completion:(id)completion;
-(void)relock:(id)relock;
-(void)_prepareToLockUI;
-(void)finishedDimmingScreen;
-(BOOL)isDimmed;
-(BOOL)attemptDeviceUnlockWithPassword:(id)password lockViewOwner:(id)owner;
-(id)restoreFromSavedBulletinController;
-(BOOL)awayBulletinControllerIsActive;
-(id)activeOrPendingBulletinController;
-(void)cleanupFromPhoneCallIfNeeded;
-(void)prepareToReturnToCameraFromCall;
-(BOOL)shouldReturnToCameraAfterCall;
-(void)cancelReturnToCameraAfterCall;
-(void)noteStartingPhoneCallWhileLocked;
-(void)_finishedUnlockAttemptWithStatus:(BOOL)status;
-(BOOL)isLockedAndInactive;
-(BOOL)isLockedAndUndimmed;
-(BOOL)_isAccessoryActive;
-(id)activationBlockWithAnimation:(int)animation;
-(void)printLockLog;
-(BOOL)shouldAnimateOtherDisplaysResumption;
-(BOOL)shouldAnimateOtherDisplaysSuspension;
-(void)frontLockedAnimationFinished;
-(BOOL)willAllowOtherLockBarsToUnlock;
-(void)lockBarStoppedTracking:(id)tracking;
-(void)lockBarStartedTracking:(id)tracking;
-(BOOL)shouldShowSlideshowButton;
-(BOOL)hasPhotosDevicesAttached;
-(BOOL)deviceHasPhotos;
-(void)_photoLibraryChanged;
-(void)_awayInCallControllerDidToggleShowingInCallInfo:(id)_awayInCallController;
-(BOOL)shouldShowLockStatusBarTime;
-(void)noteResetRestoreStateChanged:(id)changed;
-(void)screensaverDidFadeToBlack:(id)screensaver finished:(id)finished context:(void*)context;
-(void)showTestBulletin;
-(void)_deviceBlockedChanged:(id)changed;
-(id)allPendingAlertItems;
-(void)_handleDeviceLockStateChangeNotification:(id)notification;
-(void)_pendAlertItem:(id)item;
-(void)setShowOverheatUI:(BOOL)ui;
-(BOOL)showOverheatUI;
-(void)reactivatePendingAlertItems:(BOOL)items;
-(void)reactivatePendingAlertItemsWithBulletinController:(id)bulletinController forUnlock:(BOOL)unlock;
-(BOOL)shouldPendAlertItemsWhileActive;
-(void)_reactivateSuperModalAlertsIfNecessary;
-(BOOL)hasSuperModalAlertItems;
-(id)dequeueAllPendingSuperModalAlertItems;
-(void)_releaseAwayView;
-(void)_blockingViewHit:(id)hit;
-(void)_dismissShowcase;
-(void)_dismissShowcaseImmediately;
-(void)_finishDismissShowcase;
-(BOOL)expectsFaceContact;
-(BOOL)_activateShowcase:(id)showcase revealMode:(int)mode;
-(void)takePicture;
-(BOOL)cameraIsInPreviewMode;
-(BOOL)cameraIsVisible;
-(BOOL)cameraIsActive;
-(void)tearDownCameraUIImmediately;
-(void)_restoreWindowOrientationAndDelegate;
-(void)_setCameraAsWindowDelegate;
-(void)dismissCameraAnimated:(BOOL)animated;
-(void)_tearDownCameraPreview;
-(void)_removeCameraPreviewViews;
-(void)_activateCameraAfterCall;
-(void)activateCamera;
-(void)setDisableGracePeriodForCamera:(BOOL)camera;
-(void)activateCameraWithNewSessionID:(BOOL)newSessionID afterCall:(BOOL)call;
-(void)_createCameraViewControllerWithOldSessionID;
-(void)_createCameraViewControllerWithNewSessionID;
-(void)_createCameraViewControllerWithNewSessionID:(BOOL)newSessionID andStartPreview:(BOOL)preview;
-(void)animationDidStop:(id)animation finished:(BOOL)finished;
-(void)handleCameraTapGesture:(id)gesture;
-(void)handleCameraPanGesture:(id)gesture;
-(void)_handleCameraPanGestureEndedWithVelocity:(float)velocity;
-(id)_newDynamicAnimationForCameraStart:(BOOL)cameraStart targetValue:(double)value withInitialVelocity:(double)initialVelocity;
-(void)_translateSlidingViewByY:(float)y;
-(void)_setupCameraSlideDownAnimation;
-(void)_cleanupFromCameraPanGesture;
-(void)_cleanupFromCameraPanGestureAndCancelPrewarm:(BOOL)cameraPanGestureAndCancelPrewarm;
-(void)_setupCameraSlideUpAnimation;
-(id)awayViewSnapshot;
-(void)removeAwayViewFakeStatusBar;
-(id)awayViewFakeStatusBar;
-(void)_cancelCameraPrewarm;
-(void)_prewarmCamera;
-(void)alertDisplayWillBecomeVisible;
-(id)alertDisplayViewWithSize:(CGSize)size;
-(id)awayView;
-(void)loadView;
-(BOOL)undimsDisplay;
-(float)finalAlpha;
-(BOOL)showsSpringBoardStatusBar;
-(id)init;
@end
