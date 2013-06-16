/* MUPlaceCardURLProvider.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "UIActivityItemSource.h"
#import "UIActivityItemSocialSource.h"
#import "MUSearchResultActivityProvider.h"
#import "Maps-Structs.h"


__attribute__((visibility("hidden")))
@interface MUPlaceCardURLProvider : MUSearchResultActivityProvider <UIActivityItemSource, UIActivityItemSocialSource> {
}
-(int)activityViewController:(id)controller attachmentULRTypeForActivityType:(id)activityType;
-(id)_thumbnailWithSize:(CGSize)size;
-(id)activityViewController:(id)controller thumbnailForActivityType:(id)activityType;
-(id)activityViewController:(id)controller thumbnailImageForActivityType:(id)activityType;
-(id)activityViewController:(id)controller subjectForActivityType:(id)activityType;
-(id)activityViewController:(id)controller itemForActivityType:(id)activityType;
-(id)activityViewControllerPlaceholderItem:(id)item;
@end