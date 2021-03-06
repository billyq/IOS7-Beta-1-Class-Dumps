/* MPHSearchViewController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "Music-Structs.h"
#import "UISearchDisplayDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class UITableView, UIView, NSString, UITapGestureRecognizer, NSArray, UIButton, NSMutableArray, SKUICircleProgressIndicator, UILabel;
@protocol MPHSearchViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface MPHSearchViewController : XXUnknownSuperclass <UISearchDisplayDelegate, UITableViewDataSource, UITableViewDelegate> {
	SKUICircleProgressIndicator* _activityIndicatorView;
	BOOL _canShowContinueSearch;
	UIButton* _continueSearchButton;
	UILabel* _loadingLabel;
	NSMutableArray* _nonEmptySearchDataSources;
	UILabel* _noResultsLabel;
	NSArray* _searchDataSources;
	UIView* _tableViewBackgroundView;
	UIView* _tableViewDimmingView;
	UITapGestureRecognizer* _tapGestureRecognizer;
	id<MPHSearchViewControllerDelegate> _delegate;
	NSString* _searchTerm;
	UITableView* _tableView;
}
@property(readonly, assign, nonatomic) UITableView* tableView;
@property(readonly, assign, nonatomic) NSString* searchTerm;
@property(assign, nonatomic) __weak id<MPHSearchViewControllerDelegate> delegate;
-(void).cxx_destruct;
-(void)_updateVisibleHeadersState;
-(void)_updateResultsForSearchTerm:(id)searchTerm;
-(id)_searchSectionTitleForSearchDataSource:(id)searchDataSource;
-(Class)_searchCellConfigurationClassForSearchDataSource:(id)searchDataSource;
-(void)_reloadData;
-(void)_performDefaultActionForSearchDataSource:(id)searchDataSource entity:(id)entity;
-(id)_newSearchDataSources;
-(BOOL)_isSearchInProgress;
-(void)_storeRestrictionsDidChangeNotification:(id)_storeRestrictions;
-(void)_searchDataSourceDidInvalidateNotification:(id)_searchDataSource;
-(void)_musicDefaultsDidChangeNotification:(id)_musicDefaults;
-(void)_mediaLibraryDidChangeNotification:(id)_mediaLibrary;
-(void)_tapGestureRecognizerAction:(id)action;
-(void)_continueSearchAction:(id)action;
-(void)tableViewDidFinishReload:(id)tableView;
-(void)tableView:(id)view willDisplayHeaderView:(id)view2 forSection:(int)section;
-(void)tableView:(id)view willDisplayCell:(id)cell forRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view viewForHeaderInSection:(int)section;
-(id)tableView:(id)view viewForFooterInSection:(int)section;
-(float)tableView:(id)view heightForHeaderInSection:(int)section;
-(float)tableView:(id)view heightForFooterInSection:(int)section;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)numberOfSectionsInTableView:(id)tableView;
-(void)scrollViewDidScroll:(id)scrollView;
-(void)searchDisplayControllerWillEndSearch:(id)searchDisplayController;
-(void)searchDisplayControllerWillBeginSearch:(id)searchDisplayController;
-(void)searchDisplayController:(id)controller willUnloadSearchResultsTableView:(id)view;
-(BOOL)searchDisplayController:(id)controller shouldReloadTableForSearchString:(id)searchString;
-(void)searchDisplayController:(id)controller didLoadSearchResultsTableView:(id)view;
-(void)searchDisplayControllerDidEndSearch:(id)searchDisplayController;
-(void)dealloc;
-(id)initWithNibName:(id)nibName bundle:(id)bundle;
@end
