/* VideoTestViewController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "iPodOutViewController.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class VideoTestView;

__attribute__((visibility("hidden")))
@interface VideoTestViewController : XXUnknownSuperclass <iPodOutViewController> {
	VideoTestView* testView;
}
@property(retain, nonatomic) VideoTestView* testView;
-(void).cxx_destruct;
-(void)selectAction:(BOOL)action;
-(void)counterClockwiseRotationAction:(BOOL)action;
-(void)clockwiseRotationAction:(BOOL)action;
-(void)rightAction:(BOOL)action;
-(void)leftAction:(BOOL)action;
-(void)downAction:(BOOL)action;
-(void)upAction:(BOOL)action;
-(id)viewControllerForCurrentRow;
-(int)restoreWithPathComponent:(id)pathComponent;
-(void)writeCurrentPositionIntoNavigationPathComponent:(id)component;
-(void)loadView;
-(id)init;
@end