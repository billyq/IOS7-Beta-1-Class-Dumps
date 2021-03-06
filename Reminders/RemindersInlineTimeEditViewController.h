/* RemindersInlineTimeEditViewController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "RemindersInlineEditSubviewController.h"

@class UIDatePicker, NSDateComponents, UIBarButtonItem;

__attribute__((visibility("hidden")))
@interface RemindersInlineTimeEditViewController : RemindersInlineEditSubviewController {
	NSDateComponents* _date;
	UIBarButtonItem* _laterTodayItem;
	UIBarButtonItem* _tomorrowItem;
	UIBarButtonItem* _nextWeekItem;
	UIDatePicker* _datePicker;
}
-(void).cxx_destruct;
-(void)_nextWeekTapped:(id)tapped;
-(void)_tomorrowTapped:(id)tapped;
-(void)_laterTodayTapped:(id)tapped;
-(void)_setToDateTime:(id)dateTime;
-(void)_dayChanged:(id)changed;
-(id)nextWeekDate;
-(id)tomorrowDate;
-(id)laterTodayDate;
-(id)roundedDateForDate:(id)date;
-(void)updateButtons;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)loadView;
-(float)widthForButtonWithTitle:(id)title atFontSize:(float)fontSize;
-(float)findToolbarFontSizeThatFits:(id)fits;
-(float)desiredHeight;
-(void)clearValue;
-(BOOL)pushChangesIntoReminder;
-(void)updateFromReminder;
@end
