/* CrosshairLevelView.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "Compass-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface CrosshairLevelView : XXUnknownSuperclass {
	float _levelCircleBoundingRadius;
	CGPoint _currentCenter;
	CGPoint _compassCenter;
	float _grayCircleRadius;
	CGPoint _currentOffset;
}
-(void)setCrosshairOffset:(CGSize)offset;
-(void)drawRect:(CGRect)rect;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end
