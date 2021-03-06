/* QuickLookBannerController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "QuickLookBannerViewDelegate.h"
#import "UIDocumentInteractionControllerDelegate.h"
#import "UIDocumentInteractionControllerDelegatePrivate.h"
#import "MobileSafari-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class TabDocument, QuickLookBannerView, UIDocumentInteractionController;

__attribute__((visibility("hidden")))
@interface QuickLookBannerController : XXUnknownSuperclass <QuickLookBannerViewDelegate, UIDocumentInteractionControllerDelegate, UIDocumentInteractionControllerDelegatePrivate> {
	QuickLookBannerView* _quickLookBannerView;
	UIDocumentInteractionController* _documentInteractionController;
	TabDocument* _tabDocument;
	BOOL _isShowingQuickLookOpenInMenu;
}
@property(retain, nonatomic) UIDocumentInteractionController* documentInteractionController;
@property(readonly, assign, nonatomic) QuickLookBannerView* bannerView;
-(id)documentProxyForPreview:(id)preview name:(id)name UTI:(id)uti;
-(id)documentInteractionControllerURLOfDirectoryForUnzippedDocument:(id)unzippedDocument;
-(void)documentInteractionController:(id)controller willBeginSendingToApplication:(id)application;
-(void)documentInteractionControllerDidDismissOpenInMenu:(id)documentInteractionController;
-(void)documentInteractionControllerWillPresentOpenInMenu:(id)documentInteractionController;
-(void)openInOtherApplications:(id)otherApplications;
-(void)openInApplication:(id)application;
-(id)_urlForQuickLookDocument;
-(void)_savePDFDocumentToFileIfNeeded;
-(void)showBannerView;
-(void)hideBannerView;
-(void)_removeBannerViewTimer;
-(void)_addOrRestartBannerViewTimer;
-(void)dealloc;
-(id)initWithTabDocument:(id)tabDocument;
@end
