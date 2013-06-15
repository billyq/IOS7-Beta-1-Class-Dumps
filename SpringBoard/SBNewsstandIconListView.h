/* SBNewsstandIconListView.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBFolderIconListView.h"
#import "SpringBoard-Structs.h"


__attribute__((visibility("hidden")))
@interface SBNewsstandIconListView : SBFolderIconListView {
	float _iconVPaddingPortrait;
	float _topIconInsetPortrait;
	float _iconVPaddingLandscape;
	float _topIconInsetLandscape;
}
+(unsigned)maxVisibleIconRowsInterfaceOrientation:(int)orientation;
+(unsigned)iconColumnsForInterfaceOrientation:(int)interfaceOrientation;
+(int)rotationAnchor;
-(void)_updateVisibleIconsFromRow:(unsigned)row toRow:(unsigned)row2 includeIcon:(id)icon layoutIfNeeded:(BOOL)needed;
-(float)verticalIconPadding;
-(float)sideIconInset;
-(float)bottomIconInset;
-(float)topIconInset;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
-(Class)baseIconViewClass;
@end