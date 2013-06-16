/* BuddySimpleTCController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "Setup-Structs.h"
#import "BuddyTableViewController.h"

@class UIToolbar, UIWebView, NSString, UITableViewCell;

__attribute__((visibility("hidden")))
@interface BuddySimpleTCController : BuddyTableViewController {
	id _delegate;
	UITableViewCell* _blankCell;
	float _lastLayoutWidth;
	float _fullscreenCellHeight;
	UIToolbar* _toolbar;
	UIWebView* _webView;
	NSString* _tcString;
}
-(void)setDelegate:(id)delegate;
-(void)disagree:(id)disagree;
-(void)agree:(id)agree;
-(void)viewDidLayoutSubviews;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(id)titleString;
-(id)tcContent;
-(void)dealloc;
-(id)init;
@end