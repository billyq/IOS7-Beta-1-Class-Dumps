/* QueryCompletionTableViewCell.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SearchCompletionTableViewCell.h"

@class MKSearchCompletion;

__attribute__((visibility("hidden")))
@interface QueryCompletionTableViewCell : SearchCompletionTableViewCell {
	MKSearchCompletion* _completion;
}
@property(retain, nonatomic) MKSearchCompletion* completion;
+(Class)layoutClass;
-(void)dealloc;
-(id)initWithReuseIdentifier:(id)reuseIdentifier;
@end