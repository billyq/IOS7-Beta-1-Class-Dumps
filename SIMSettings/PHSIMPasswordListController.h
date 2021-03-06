/* PHSIMPasswordListController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "PHSIMPINUnlockViewControllerDelegate.h"
#import "PHSIMPINChangeViewControllerDelegate.h"

@class PHSIMPINChangeViewController, PHSIMPINUnlockViewController, UINavigationController;

@interface PHSIMPasswordListController : XXUnknownSuperclass <PHSIMPINUnlockViewControllerDelegate, PHSIMPINChangeViewControllerDelegate> {
	UINavigationController* _unlockPINNavigationController;
	PHSIMPINUnlockViewController* _unlockPINViewController;
	UINavigationController* _changePINNavigationController;
	PHSIMPINChangeViewController* _changePINViewController;
}
@property(retain) PHSIMPINChangeViewController* changePINViewController;
@property(retain) UINavigationController* changePINNavigationController;
@property(retain) PHSIMPINUnlockViewController* unlockPINViewController;
@property(retain) UINavigationController* unlockPINNavigationController;
-(id)setCellLoading:(BOOL)loading atIndex:(unsigned)index;
-(id)setCellEnabled:(BOOL)enabled atIndex:(unsigned)index;
-(id)setControlEnabled:(BOOL)enabled atIndex:(unsigned)index;
-(void)PHSIMPINChangeViewControllerFailedWithZeroAttemptsRemaining:(id)zeroAttemptsRemaining;
-(void)PHSIMPINChangeViewControllerCanceled:(id)canceled;
-(void)PHSIMPINChangeViewControllerFinishedSuccessfully:(id)successfully;
-(void)SIMPINUnlockViewControllerFailedWithZeroAttemptsRemaining:(id)zeroAttemptsRemaining;
-(void)SIMPINUnlockViewControllerCanceled:(id)canceled;
-(void)SIMPINUnlockViewController:(id)controller finishedSuccessfullyWithSIMLocked:(BOOL)simlocked;
-(void)_dismissChangeController;
-(void)_dismissUnlockController;
-(void)updateCellStates;
-(void)viewWillAppear:(BOOL)view;
-(void)_applicationSuspended:(id)suspended;
-(void)_simReady:(id)ready;
-(void)_simLockChanged:(id)changed;
-(void)changePIN:(id)pin;
-(void)setIsSIMLocked:(id)locked specifier:(id)specifier;
-(id)isSIMLocked:(id)locked;
-(id)specifiers;
-(void)dealloc;
-(id)init;
@end
