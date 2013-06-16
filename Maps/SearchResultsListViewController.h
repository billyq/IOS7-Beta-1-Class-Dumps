/* SearchResultsListViewController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "ListViewSearchResultCellAccessoryDelegate.h"
#import "Maps-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, UIView, SearchResult;
@protocol SearchResultsListViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SearchResultsListViewController : XXUnknownSuperclass <ListViewSearchResultCellAccessoryDelegate> {
	NSArray* _searchResults;
	id<SearchResultsListViewControllerDelegate> _delegate;
	CGRect _enclosingPopoverFrame;
	UIView* _tableFooterView;
	SearchResult* _defaultSearchResult;
}
@property(retain, nonatomic) NSArray* searchResults;
@property(readonly, assign, nonatomic) CGRect enclosingPopoverFrameInWorldView;
@property(retain, nonatomic) SearchResult* defaultSearchResult;
@property(assign, nonatomic) id<SearchResultsListViewControllerDelegate> delegate;
-(void)listViewSearchCell:(id)cell pressedInfoButton:(id)button;
-(void)updateAttributionFooter;
-(void)orientationDidChange;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)view;
-(void)viewDidDisappear:(BOOL)view;
-(void)selectSearchResult:(id)result animated:(BOOL)animated scrollPosition:(int)position;
-(void)tableView:(id)view willDisplayCell:(id)cell forRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(BOOL)_isSingleLocationList;
-(void)reloadData;
-(id)tableFooterView;
-(unsigned)supportedInterfaceOrientations;
-(void)dealloc;
-(id)initWithStyle:(int)style;
@end