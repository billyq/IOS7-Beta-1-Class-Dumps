/* ContinuousReadingItem.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSURL, WBSAutomaticReadingListItem, WebBookmark;

__attribute__((visibility("hidden")))
@interface ContinuousReadingItem : XXUnknownSuperclass {
	NSString* _title;
	NSString* _previewText;
	WebBookmark* _readingListBookmark;
	WBSAutomaticReadingListItem* _automaticReadingListItem;
}
@property(readonly, assign, nonatomic) WBSAutomaticReadingListItem* automaticReadingListItem;
@property(retain, nonatomic) WebBookmark* readingListBookmark;
@property(readonly, assign, nonatomic) NSURL* URL;
@property(copy, nonatomic) NSString* previewText;
@property(readonly, assign, nonatomic) NSString* subtitle;
@property(copy, nonatomic) NSString* title;
@property(readonly, assign, nonatomic) int type;
+(id)itemWithAutomaticReadingListItem:(id)automaticReadingListItem;
+(id)itemWithReadingListItem:(id)readingListItem;
-(id)_initWithAutomaticReadingListItem:(id)automaticReadingListItem;
-(id)_initWithReadingListItem:(id)readingListItem;
-(id)_siteNameForReadingListItem;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(void)dealloc;
@end
