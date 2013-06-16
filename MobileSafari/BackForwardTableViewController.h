/* BackForwardTableViewController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "PopoverSizingTableViewController.h"

@class NSArray;
@protocol BackForwardTableViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface BackForwardTableViewController : PopoverSizingTableViewController {
	BOOL _reversesListOrder;
	id<BackForwardTableViewControllerDelegate> _delegate;
	NSArray* _backForwardList;
}
@property(assign, nonatomic) BOOL reversesListOrder;
@property(copy, nonatomic) NSArray* backForwardList;
@property(assign, nonatomic) id<BackForwardTableViewControllerDelegate> delegate;
-(void)dealloc;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)indexForIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
@end