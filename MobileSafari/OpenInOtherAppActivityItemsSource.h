/* OpenInOtherAppActivityItemsSource.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "UIActivityItemsSource.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSURL;

__attribute__((visibility("hidden")))
@interface OpenInOtherAppActivityItemsSource : XXUnknownSuperclass <UIActivityItemsSource> {
	NSURL* _fileURL;
}
-(id)activityViewController:(id)controller itemsForActivityType:(id)activityType;
-(id)activityViewControllerPlaceholderItems:(id)items;
-(void)dealloc;
-(id)initWithFilePath:(id)filePath;
@end