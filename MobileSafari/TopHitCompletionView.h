/* TopHitCompletionView.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "MobileSafari-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSAttributedString;

__attribute__((visibility("hidden")))
@interface TopHitCompletionView : XXUnknownSuperclass {
	NSAttributedString* _attributedText;
	unsigned _startIndex;
	float _offsetToStartIndex;
	BOOL _offsetToStartIndexNeedsUpdate;
}
-(void)dealloc;
-(CGSize)sizeThatFits:(CGSize)fits;
-(void)drawRect:(CGRect)rect;
-(float)offsetToStartIndex;
-(void)setAttributedText:(id)text startIndex:(unsigned)index;
@end
