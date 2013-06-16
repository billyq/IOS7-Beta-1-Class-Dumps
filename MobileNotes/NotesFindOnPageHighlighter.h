/* NotesFindOnPageHighlighter.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "MobileNotes-Structs.h"
#import "UIWebFindOnPageHighlighter.h"

@class NSString, UIWebDocumentView, UIScrollView, UIView, NSArray, NSMutableArray;
@protocol UIWebFindOnPageHighlighterDelegate;

__attribute__((visibility("hidden")))
@interface NotesFindOnPageHighlighter : XXUnknownSuperclass <UIWebFindOnPageHighlighter> {
	NSMutableArray* _highlightBubbleViews;
	NSArray* _pdfHighlightViews;
	UIView* _highlightHostView;
	UIWebDocumentView* _documentView;
	UIScrollView* _scrollView;
	NSString* _searchText;
	id<UIWebFindOnPageHighlighterDelegate> _delegate;
	unsigned _numberOfMatches;
	unsigned _highlightedMatchIndex;
}
@property(readonly, assign, nonatomic) unsigned highlightedMatchIndex;
@property(readonly, assign, nonatomic) unsigned numberOfMatches;
@property(assign, nonatomic) id<UIWebFindOnPageHighlighterDelegate> delegate;
@property(readonly, assign, nonatomic) NSString* searchText;
+(BOOL)expandedRectsWouldIntersect:(id)intersect;
-(void).cxx_destruct;
-(void)clearSelection;
-(void)highlightPreviousMatch;
-(void)highlightNextMatch;
-(void)_highlightFindOnPageMatch:(BOOL)match;
-(void)_updateHighlightedMatchIndex:(BOOL)index;
-(void)setSearchText:(id)text matchLimit:(unsigned)limit;
-(unsigned)findOnPageOptions;
-(BOOL)_highlightSelection;
-(BOOL)updateHighlightBubbleWobble:(BOOL)wobble;
-(void)setSelectionRect:(CGRect)rect textRects:(id)rects contentViews:(id)views wobble:(BOOL)wobble;
-(void)setSelectionRect:(CGRect)rect textRects:(id)rects contentImage:(CGImageRef)image wobble:(BOOL)wobble;
-(void)_setSelectionRect:(CGRect)rect textRects:(id)rects contentImage:(CGImageRef)image contentViews:(id)views wobble:(BOOL)wobble;
-(void)_clearHighlightViews;
-(void)fadeOutFinished;
-(void)_clearHighlightViews:(BOOL)views;
-(void)_addContentViewAtIndex:(unsigned)index withRect:(CGRect)rect;
-(void)dealloc;
-(id)initWithDocumentView:(id)documentView inScrollView:(id)scrollView;
@end