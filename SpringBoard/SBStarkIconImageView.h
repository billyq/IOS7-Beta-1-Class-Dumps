/* SBStarkIconImageView.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SpringBoard-Structs.h"

@class NSArray, UIImage, UIImageView, UIView;

__attribute__((visibility("hidden")))
@interface SBStarkIconImageView : XXUnknownSuperclass {
	UIImageView* _imageView;
	UIImage* _image;
	float _brightness;
	int _outerStripes;
	int _innerStripes;
	BOOL _needsStripeUpdating;
	NSArray* _outerStripesViews;
	NSArray* _innerStripesViews;
	UIView* _brightnessView;
}
@property(assign, nonatomic) int innerStripes;
@property(assign, nonatomic) int outerStripes;
@property(assign, nonatomic) float brightness;
@property(retain, nonatomic) UIImage* image;
-(id)_viewsForEdges:(int)edges ofWidth:(float)width inFrame:(CGRect)frame withBGColor:(id)bgcolor outRect:(CGRect*)rect;
-(void)_updateStripesIfNeeded;
-(void)layoutSubviews;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end