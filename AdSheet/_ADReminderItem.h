/* _ADReminderItem.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "ADJavaScriptObject.h"

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface _ADReminderItem : ADJavaScriptObject {
	NSString* _title;
	NSString* _notes;
	NSString* _location;
	BOOL _hasCoordinates;
	double _degreesLatitude;
	double _degreesLongitude;
	NSDate* _dueDate;
}
-(id)EKReminderInEventStore:(id)eventStore;
-(id)initWithDictionary:(id)dictionary;
-(void)dealloc;
@end