/* BrowserMailComposeViewController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "BrowserPanel.h"
#import "UINavigationControllerDelegate.h"


__attribute__((visibility("hidden")))
@interface BrowserMailComposeViewController : XXUnknownSuperclass <BrowserPanel, UINavigationControllerDelegate> {
}
-(BOOL)shouldHideOnSuspend;
-(BOOL)shouldShowButtonBar;
-(BOOL)ignoresPrivateBrowsingStyle;
-(int)pausesPages;
-(int)panelType;
-(void)applicationDidResume;
-(void)viewDidDisappear:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)navigationController:(id)controller didShowViewController:(id)controller2 animated:(BOOL)animated;
-(id)initWithURL:(id)url mailComposeDelegate:(id)delegate;
@end
