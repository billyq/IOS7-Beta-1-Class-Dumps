/* SLFacebookRegistrationBuddy.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SLFacebookRegistrationInfoPromptDelegate.h"

@class SLFacebookRegistrationInfo, NSMutableArray, PSListController, PSSetupController;
@protocol SLFacebookRegistrationBuddyDelegate;

@interface SLFacebookRegistrationBuddy : XXUnknownSuperclass <SLFacebookRegistrationInfoPromptDelegate> {
	SLFacebookRegistrationInfo* _registrationInfo;
	NSMutableArray* _registrationInfoPrompts;
	int _currentPromptIndex;
	PSListController* _presentingViewController;
	PSSetupController* _setupController;
	id<SLFacebookRegistrationBuddyDelegate> _delegate;
}
-(void).cxx_destruct;
-(BOOL)_isCorrectableError:(int)error;
-(id)_alertForError:(int)error;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(void)registrationInfoPrompt:(id)prompt didUpdateRegistrationInfo:(id)info;
-(void)registrationInfoPromptDidCancel:(id)registrationInfoPrompt;
-(void)_returnToPromptOfClass:(Class)aClass;
-(void)_presentNextPrompt;
-(void)start;
-(id)initWithDelegate:(id)delegate;
@end
