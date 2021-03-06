/* StockInfoView.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "Stocks-Structs.h"

@class UILabel, StockMetadataGridView, LoadingLabel, Stock;

__attribute__((visibility("hidden")))
@interface StockInfoView : XXUnknownSuperclass {
	Stock* _stock;
	UILabel* _titleLabel;
	LoadingLabel* _loadingLabel;
	StockMetadataGridView* _gridView;
	BOOL _pauseUpdates;
}
@property(retain, nonatomic) Stock* stock;
-(void).cxx_destruct;
-(void)dealloc;
-(void)_stockWillBeRemoved:(id)_stock;
-(void)setUpdatesPaused:(BOOL)paused;
-(void)_metadataDidUpdate;
-(void)_redrawGridView;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)frame;
@end
