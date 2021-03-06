/* FocusedTruncationRenderer.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "MobileMail-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "NSLayoutManagerDelegate.h"

@class NSTextStorage, NSLayoutManager, NSTextContainer, NSAttributedString;

__attribute__((visibility("hidden")))
@interface FocusedTruncationRenderer : XXUnknownSuperclass <NSLayoutManagerDelegate> {
	NSTextStorage* _textStorage;
	NSLayoutManager* _layoutManager;
	NSTextContainer* _textContainer;
	NSRange _focusRange;
	NSRange _truncationRange;
	bool _forceTailTruncationRange;
}
@property(assign, nonatomic) NSRange focusRange;
@property(copy, nonatomic) NSAttributedString* contents;
-(void).cxx_destruct;
-(unsigned)layoutManager:(id)manager shouldGenerateGlyphs:(const unsigned short*)glyphs properties:(const int*)properties characterIndexes:(const unsigned*)indexes font:(id)font forGlyphRange:(NSRange)glyphRange;
-(void)drawInRect:(CGRect)rect;
@end
