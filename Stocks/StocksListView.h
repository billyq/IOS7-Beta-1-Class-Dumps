/* StocksListView.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "UITableViewDelegate.h"
#import "UITableViewDataSource.h"
#import "Stocks-Structs.h"

@class UITableView, Stock, NSMutableArray;

__attribute__((visibility("hidden")))
@interface StocksListView : XXUnknownSuperclass <UITableViewDelegate, UITableViewDataSource> {
	UITableView* _stocksTable;
	Stock* _selectedStockForSnapshot;
	Stock* _selectedStock;
	Stock* _lastSelectedStock;
	BOOL _syncInProgress;
	CGPoint _contentOffset;
	CGPoint _selectedStockOrigin;
	NSMutableArray* _visibleStocks;
	CGPoint _visibleStocksOrigin;
	int _rowDataType;
}
@property(assign, nonatomic) int rowDataType;
@property(retain, nonatomic) Stock* selectedStock;
-(void).cxx_destruct;
-(void)scrollViewDidEndScrollingAnimation:(id)scrollView;
-(void)scrollViewDidEndDragging:(id)scrollView willDecelerate:(BOOL)decelerate;
-(void)scrollViewDidEndDecelerating:(id)scrollView;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(void)_stockShortNameDidChange:(id)_stockShortName;
-(void)_stocksDidChange;
-(void)_stocksWillSync;
-(id)_visbleStocksWithStock:(id)stock atVisiblePosition:(unsigned)visiblePosition;
-(void)_stocksDidUpdate;
-(void)listTapped:(id)tapped;
-(id)tableView;
-(id)tableView:(id)view willSelectRowAtIndexPath:(id)indexPath;
-(id)lastSelectedStock;
-(void)layoutVisibleCells;
-(void)scrollViewDidScroll:(id)scrollView;
-(void)layoutSubviews;
-(void)restoreScrollPoint:(float)point;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
-(float)requiredRowCount;
@end
