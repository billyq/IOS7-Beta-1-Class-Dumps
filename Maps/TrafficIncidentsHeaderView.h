/* TrafficIncidentsHeaderView.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "Maps-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UILabel, UIImageView, UIColor, NSString;

__attribute__((visibility("hidden")))
@interface TrafficIncidentsHeaderView : XXUnknownSuperclass {
	NSString* _title;
	NSString* _location;
	int _type;
	UILabel* _titleLabel;
	UILabel* _locationLabel;
	UIImageView* _iconView;
	UIColor* _textColor;
	float _iconAlpha;
}
@property(retain, nonatomic) UIImageView* iconView;
@property(retain, nonatomic) UILabel* locationLabel;
@property(retain, nonatomic) UILabel* titleLabel;
@property(assign, nonatomic) float iconAlpha;
@property(retain, nonatomic) UIColor* textColor;
@property(assign, nonatomic) int type;
@property(retain, nonatomic) NSString* location;
@property(retain, nonatomic) NSString* title;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)frame;
-(void)_contentSizeDidChange:(id)_contentSize;
-(void)dealloc;
@end
