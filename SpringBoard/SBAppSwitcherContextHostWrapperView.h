/* SBAppSwitcherContextHostWrapperView.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SpringBoard-Structs.h"

@class SBWindowContextHostManager, UIView;

__attribute__((visibility("hidden")))
@interface SBAppSwitcherContextHostWrapperView : XXUnknownSuperclass {
	SBWindowContextHostManager* _contextHostManager;
	UIView* _contextHostView;
}
-(void)layoutSubviews;
-(void)didMoveToSuperview;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame application:(id)application;
-(id)initWithFrame:(CGRect)frame;
@end