/* SBAwayBulletinFloatingCell.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBAwayBulletinCell.h"
#import "SpringBoard-Structs.h"


__attribute__((visibility("hidden")))
@interface SBAwayBulletinFloatingCell : SBAwayBulletinCell {
	BOOL _hideIcon;
}
+(Class)contentViewClass;
+(BOOL)_shouldLayoutButtonsBelowForContentWidth:(float)contentWidth buttonLabels:(id)labels;
+(float)_paddedHeightForButton:(id)button;
+(float)_cellContentExtraPadding;
+(float)_cellContentTopPadding;
+(float)_cellContentRightPadding;
+(float)_cellContentLeftPadding;
+(float)_cellIconLeftPadding;
+(float)_buttonHorizontalPadding;
+(float)_buttonVerticalPadding;
+(float)_buttonVerticalInset;
+(float)_buttonHorizontalInset;
+(id)_buttonFont;
+(id)_buttonBackgroundImage;
+(id)_snoozeButtonBackgroundImage;
+(float)rowHeightForSubtitle:(id)subtitle message:(id)message maxLines:(unsigned)lines attachmentText:(id)text imageSize:(CGSize)size rowWidth:(float)width;
+(float)_rowHeightForContentHeight:(float)contentHeight;
+(float)_contentWidthForRowWidth:(float)rowWidth leaveRoomForIcon:(BOOL)icon;
-(BOOL)_shouldUseCancelButtonImageForIndex:(int)index;
-(BOOL)_shouldUseSnoozeButtonImageForIndex:(int)index;
-(BOOL)_createsLockBarEarly;
-(void)layoutSubviews;
-(CGRect)_contentRect;
-(BOOL)_drawsSeparator;
-(id)_lockBar;
-(void)setUnlockActionContext:(id)context;
-(void)setAttachmentImage:(id)image;
-(BOOL)_hasBackgroundColor;
-(void)_createContentView;
-(void)_getButtonWidth:(float*)width inset:(float*)inset;
-(float)_cellContentLeftPadding;
@end
