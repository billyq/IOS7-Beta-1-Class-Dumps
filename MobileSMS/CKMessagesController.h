/* CKMessagesController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "UISplitViewControllerDelegate.h"
#import "MFMailComposeViewControllerDelegate.h"
#import "UIActionSheetDelegate.h"
#import <Foundation/NSMutableIndexSet.h>
#import "CKTranscriptComposeDelegate.h"
#import "UINavigationControllerDelegate.h"
#import "UIAlertViewDelegate.h"

@class UIViewController, UINavigationController, CKConversationListController, CKTranscriptController, UIView, UISplitViewController, MFMailComposeViewController, CKConversation, NSMutableArray, NSObject, NSSet;
@protocol OS_dispatch_group, NSCoding;

__attribute__((visibility("hidden")))
@interface CKMessagesController : NSMutableIndexSet <UISplitViewControllerDelegate, MFMailComposeViewControllerDelegate, UIActionSheetDelegate, CKTranscriptComposeDelegate, UINavigationControllerDelegate, UIAlertViewDelegate> {
	UIViewController* _rightController;
	UINavigationController* _blankNavController;
	UINavigationController* _primaryNavigationController;
	CKConversationListController* _conversationListController;
	CKTranscriptController* _transcriptController;
	UIView* _transcriptDimmingView;
	UISplitViewController* _messagesSplitViewController;
	MFMailComposeViewController* _mailComposeController;
	UIViewController* _mainController;
	CKConversation* _currentConversation;
	NSMutableArray* _conversationCache;
	BOOL _ignoreConversationsBecomingStale;
	BOOL _transcriptDimmed;
	NSObject<OS_dispatch_group>* _modalPresentationGroup;
	id _alertViewHandler;
}
@property(copy, nonatomic) id alertViewHandler;
@property(readonly, assign, nonatomic, getter=isTranscriptDimmed) BOOL transcriptDimmed;
@property(readonly, assign, nonatomic) BOOL isShowingConversationListController;
@property(retain, nonatomic) CKConversation* currentConversation;
@property(readonly, assign, nonatomic) NSSet* alertSuppressionContexts;
@property(retain, nonatomic) UINavigationController* primaryNavigationController;
@property(retain, nonatomic) CKTranscriptController* transcriptController;
@property(retain, nonatomic) CKConversationListController* conversationListController;
@property(retain, nonatomic) id<NSCoding> autosaveIdentifier;
-(void)alertView:(id)view didDismissWithButtonIndex:(int)buttonIndex;
-(void)mailComposeController:(id)controller didFinishWithResult:(int)result error:(id)error;
-(void)showMailComposeSheetForAddress:(id)address;
-(void)autosaveMailComposition;
-(void)showMailComposeSheetForAutosavedMessage;
-(void)_showMailComposeSheet;
-(void)showForwardedMessageParts:(id)parts;
-(void)showNewMessageCompositionForMessageParts:(id)messageParts;
-(void)_conversationLeft:(id)left;
-(void)_handleConversationBecameStale:(id)stale;
-(void)splitViewController:(id)controller willShowViewController:(id)controller2 invalidatingBarButtonItem:(id)item;
-(void)splitViewController:(id)controller willHideViewController:(id)controller2 withBarButtonItem:(id)barButtonItem forPopoverController:(id)popoverController;
-(void)setTranscriptDimmed:(BOOL)dimmed animated:(BOOL)animated;
-(BOOL)isShowingDirtyModalView;
-(BOOL)isShowingTranscriptWithUnsentText;
-(BOOL)showUnreadFilteredConversations;
-(BOOL)hasUnreadFilteredConversations;
-(void)showConversationList:(BOOL)list;
-(BOOL)resumeToConversation:(id)conversation;
-(void)showConversationAndMessageForSearchURL:(id)searchURL;
-(void)showConversationAndMessageForChatGUID:(id)chatGUID messageGUID:(id)guid animate:(BOOL)animate;
-(void)showConversation:(id)conversation animate:(BOOL)animate;
-(void)showConversation:(id)conversation animate:(BOOL)animate forceToTranscript:(BOOL)transcript;
-(BOOL)isShowingTranscriptController;
-(void)_updateAlertSuppressionContext;
-(void)__updateAlertSuppressionContext;
-(BOOL)_isShowingModalTranscript;
-(BOOL)_isShowingFullscreenController;
-(void)_showTranscriptController:(BOOL)controller;
-(void)_showTranscriptController:(BOOL)controller animated:(BOOL)animated;
-(BOOL)currentCompositionHasContent;
-(BOOL)isComposingMessage;
-(BOOL)isShowingBlankTranscript;
-(void)transcriptController:(id)controller didSelectNewConversation:(id)conversation;
-(BOOL)supportsAttachments;
-(void)transcriptController:(id)controller didSendMessageInConversation:(id)conversation;
-(void)transcriptController:(id)controller willSendComposition:(id)composition inConversation:(id)conversation;
-(void)didCancelComposition:(id)composition;
-(void)resetNewMessageCompositionRecipients;
-(void)cancelNewMessageComposition;
-(void)hideNewMessageCompositionPanel;
-(void)showNewMessageCompositionPanelAnimated:(BOOL)animated;
-(void)showNewMessageCompositionPanelWithRecipients:(id)recipients composition:(id)composition animated:(BOOL)animated;
-(void)_showNewMessageCompositionPanelWithRecipients:(id)recipients composition:(id)composition animated:(BOOL)animated;
-(void)_popToConversationListAndPerformBlockAnimated:(BOOL)conversationListAndPerformBlockAnimated block:(id)block;
-(void)_presentNewMessageCompositionPanel:(id)panel animated:(BOOL)animated;
-(void)showMessagesForAddress:(id)address animate:(BOOL)animate;
-(void)setDefaultPNGConfiguration;
-(void)_addConversationToCache:(id)cache;
-(void)_clearConversationCache;
-(void)_pruneConversationCache;
-(void)_prepareToDumpCachedConversation:(id)dumpCachedConversation;
-(BOOL)_canDumpConversationFromCache:(id)cache;
-(void)_confirmReadReceiptSettings;
-(void)_updateTranscriptDimmingView;
-(void)navigationController:(id)controller didShowViewController:(id)controller2 animated:(BOOL)animated;
-(void)navigationController:(id)controller willShowViewController:(id)controller2 animated:(BOOL)animated;
-(void)viewDidDisappear:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewDidAppear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(id)rotatingHeaderView;
-(BOOL)becomeFirstResponder;
-(void)setEditing:(BOOL)editing animated:(BOOL)animated;
-(void)didReceiveMemoryWarning;
-(void)viewWillLayoutSubviews;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)viewDidUnload;
-(void)loadView;
-(void)parentControllerDidBecomeActive;
-(void)parentControllerDidResume:(BOOL)parentController animating:(BOOL)animating;
-(void)prepareForResume;
-(void)prepareForSuspend;
-(void)performResumeDeferredSetup;
-(void)dealloc;
-(id)init;
@end