/* SBTTYPromptAlert.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBAlert.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface SBTTYPromptAlert : SBAlert {
	NSString* _number;
	int _uid;
}
+(BOOL)dialNumberPromptingIfNecessary:(id)necessary addressBookUID:(int)uid urlAddition:(id)addition;
+(void)displayForNumber:(id)number addressBookUID:(int)uid;
-(void)activate;
-(BOOL)hasTranslucentBackground;
-(int)addressBookUID;
-(id)number;
-(id)alertDisplayViewWithSize:(CGSize)size;
-(void)dealloc;
-(id)initWithNumber:(id)number addressBookUID:(int)uid;
@end
