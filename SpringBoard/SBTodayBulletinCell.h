/* SBTodayBulletinCell.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SpringBoard-Structs.h"

@class NSString, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface SBTodayBulletinCell : XXUnknownSuperclass {
	UILabel* _label;
	UIImageView* _iconImageView;
}
@property(copy, nonatomic) NSString* labelText;
@property(assign, nonatomic) CGRect textRect;
+(id)defaultFontColor;
+(id)defaultFont;
-(void)layoutSubviews;
-(void)setIcon:(id)icon;
-(void)dealloc;
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier;
@end