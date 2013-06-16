/* GKGamesCompareOverviewDataSource.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "GameCentre-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class GKPlayer, NSMutableIndexSet;

__attribute__((visibility("hidden")))
@interface GKGamesCompareOverviewDataSource : XXUnknownSuperclass {
	GKPlayer* _player;
	NSMutableIndexSet* _loadedPages;
}
@property(retain, nonatomic) NSMutableIndexSet* loadedPages;
@property(retain, nonatomic) GKPlayer* player;
+(id)gamesCompareOverviewDataSourceWithPlayer:(id)player;
-(unsigned)pageForItemIndex:(unsigned)itemIndex;
-(NSRange)itemRangeForPageRange:(NSRange)pageRange;
-(unsigned)pageSize;
-(unsigned)indexForIndexPath:(id)indexPath;
-(void)configureCell:(id)cell withItem:(id)item;
-(void)loadDetailsForItemsInPages:(NSRange)pages handler:(id)handler;
-(void)underlyingDataSourceLoadedWithGroup:(id)group;
-(id)collectionView:(id)view viewForSupplementaryElementOfKind:(id)kind atIndexPath:(id)indexPath;
-(id)collectionView:(id)view cellForItemAtIndexPath:(id)indexPath;
-(void)collectionViewWillBecomeActive:(id)collectionView;
-(void)configureDataSource;
-(void)configureCollectionView:(id)view;
-(void)dealloc;
-(id)initWithPlayer:(id)player;
@end