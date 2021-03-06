/* SBPlaceholderIcon.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBIcon.h"


__attribute__((visibility("hidden")))
@interface SBPlaceholderIcon : SBIcon {
	id _nodeIdentifier;
	SBIcon* _icon;
}
+(id)emptyPlaceholder;
+(void)setGrabbedIcon:(id)icon;
+(id)grabbedIconPlaceholder;
+(id)placeholderForIcon:(id)icon;
+(id)placeholderNodeIdentifierForIcon:(id)icon;
-(BOOL)isPlaceholderForIcon:(id)icon;
-(BOOL)isEmptyPlaceholder;
-(BOOL)isGrabbedIconPlaceholder;
-(BOOL)isPlaceholder;
-(BOOL)shouldCacheImageForFormat:(int)format;
-(id)generateIconImage:(int)image;
-(id)automationID;
-(BOOL)matchesRepresentation:(id)representation;
-(id)representation;
-(id)nodeIdentifier;
-(void)dealloc;
-(id)_initWithNodeIdentifier:(id)nodeIdentifier icon:(id)icon;
@end
