/* CloudTab.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSDictionary, NSURL;

__attribute__((visibility("hidden")))
@interface CloudTab : XXUnknownSuperclass {
	BOOL _isShowingReader;
	NSString* _title;
	NSURL* _URL;
	NSDictionary* _readerScrollPositionDictionary;
}
@property(copy, nonatomic) NSDictionary* readerScrollPositionDictionary;
@property(assign, nonatomic) BOOL isShowingReader;
@property(copy, nonatomic) NSURL* URL;
@property(copy, nonatomic) NSString* title;
-(id)description;
-(void)dealloc;
-(id)_dictionaryRepresentation;
-(id)_initWithDictionary:(id)dictionary;
@end
