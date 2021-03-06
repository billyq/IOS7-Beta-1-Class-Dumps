/* SBLockScreenBounceAnimator.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "UIDynamicAnimatorDelegate.h"
#import "_UISettingsKeyObserver.h"
#import "UIGestureRecognizerDelegate.h"

@class SBBouncingSystem, SBBounceSettings, SBBounceBehavior, SBBouncingItem, UIView, UIDynamicAnimator;

__attribute__((visibility("hidden")))
@interface SBLockScreenBounceAnimator : XXUnknownSuperclass <UIDynamicAnimatorDelegate, _UISettingsKeyObserver, UIGestureRecognizerDelegate> {
	BOOL _isAnimating;
	UIView* _view;
	SBBouncingSystem* _system;
	UIDynamicAnimator* _animator;
	SBBouncingItem* _item;
	SBBounceBehavior* _behavior;
	id _prepareBlock;
	id _translateBlock;
	id _canceledBlock;
	id _completedBlock;
	SBBounceSettings* _settings;
}
@property(retain, nonatomic) SBBounceSettings* settings;
@property(copy) id completedBlock;
@property(copy) id canceledBlock;
@property(copy) id translateBlock;
@property(copy) id prepareBlock;
-(BOOL)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
-(void)dynamicAnimatorDidPause:(id)dynamicAnimator;
-(void)settings:(id)settings changedValueForKey:(id)key;
-(void)_updateSettings;
-(void)_createAnimator;
-(void)_removeAnimator;
-(void)_resetAnimator;
-(void)_beginAnimating;
-(void)_handlePanGesture:(id)gesture;
-(void)_handleTapGesture:(id)gesture;
-(void)_addPanRecognizer;
-(void)_addTapRecognizer;
-(void)cancelAnimation;
-(BOOL)isAnimating;
-(void)dealloc;
-(id)initWithView:(id)view allowPan:(BOOL)pan;
@end
