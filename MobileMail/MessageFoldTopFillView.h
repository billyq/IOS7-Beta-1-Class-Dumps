/* MessageFoldTopFillView.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "MobileMail-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIScrollView, UIView;

__attribute__((visibility("hidden")))
@interface MessageFoldTopFillView : XXUnknownSuperclass {
	UIView* _backgroundView;
	UIView* _topInnerShadowView;
	UIView* _bottomInnerShadowView;
	unsigned _fillMode;
	UIScrollView* _scrollView;
}
@property(retain, nonatomic) UIScrollView* scrollView;
-(void)setFillMode:(unsigned)mode;
-(void)createBackgroundLayersIfNecessary;
-(void)layoutSubviews;
-(void)setFrame:(CGRect)frame;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end
