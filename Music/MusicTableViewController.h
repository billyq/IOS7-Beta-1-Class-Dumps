/* MusicTableViewController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "MPHSearchViewControllerDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "Music-Structs.h"

@class UISearchDisplayController, MPHSearchViewController, NSObject, MPUDarkSearchBar;
@protocol MusicTableViewControllerDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MusicTableViewController : XXUnknownSuperclass <MPHSearchViewControllerDelegate> {
	NSObject<OS_dispatch_queue>* _footerQueue;
	BOOL _isVisible;
	MPUDarkSearchBar* _searchBar;
	UISearchDisplayController* _searchDisplayController;
	MPHSearchViewController* _searchViewController;
	id<MusicTableViewControllerDelegate> _delegate;
}
@property(assign, nonatomic) __weak id<MusicTableViewControllerDelegate> delegate;
@property(readonly, assign, nonatomic) CGSize contentSize;
+(BOOL)_supportsSearch;
+(BOOL)_shouldPopWhenEmpty;
+(Class)_tableViewClass;
-(void).cxx_destruct;
-(void)_updateVisibleHeadersState;
-(void)_updateVisibleCellsPlaybackState;
-(void)_updateNavigationPrompt;
-(id)_searchDisplayController;
-(id)_searchBar;
-(void)_tableViewController_defaultMediaLibraryDidChangeNotification:(id)_tableViewController_defaultMediaLibrary;
-(void)_tableViewController_itemDidChangeNotification:(id)_tableViewController_item;
-(id)_createTableViewBackgroundView;
-(void)tableViewDidFinishReload:(id)tableView;
-(void)tableView:(id)view willDisplayHeaderView:(id)view2 forSection:(int)section;
-(id)tableView:(id)view viewForHeaderInSection:(int)section;
-(float)tableView:(id)view heightForHeaderInSection:(int)section;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(void)scrollViewDidScroll:(id)scrollView;
-(void)searchViewControllerWillEndSearch:(id)searchViewController;
-(void)searchViewControllerWillBeginSearch:(id)searchViewController;
-(id)_createTableView;
-(void)reloadData;
-(BOOL)MPU_beginPlaybackForVisibleContent;
-(BOOL)music_hasContent;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidDisappear:(BOOL)view;
-(void)dealloc;
-(id)initWithDataSource:(id)dataSource cellConfigurationClass:(Class)aClass;
@end