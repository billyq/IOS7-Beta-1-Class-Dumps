/* RemindersListPickerModel.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "Reminders-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, EKEventStore, EKCalendar;
@protocol RemindersListPickerModelDelegate;

__attribute__((visibility("hidden")))
@interface RemindersListPickerModel : XXUnknownSuperclass {
	unsigned _isOverridingSourceInfos : 1;
	unsigned _scheduledSelected : 1;
	EKCalendar* _selectedCalendar;
	EKEventStore* _eventStore;
	NSArray* _calendarSourceInfos;
	CFArrayRef _sourceIndicesForViewing;
	CFArrayRef _sourceIndicesForEditing;
	id<RemindersListPickerModelDelegate> _delegate;
}
@property(assign, nonatomic) id<RemindersListPickerModelDelegate> delegate;
-(void).cxx_destruct;
-(id)dictionaryForAnimationToEditing:(BOOL)editing;
-(id)deleteCalendarAtIndexPath:(id)indexPath whenEditing:(BOOL)editing;
-(void)didAddCalendarToSection:(int)section whenEditing:(BOOL)editing;
-(BOOL)canDeleteRowAtIndexPath:(id)indexPath whenEditing:(BOOL)editing;
-(BOOL)_canDeleteCalendar:(id)calendar inSourceInfo:(id)sourceInfo;
-(id)selectedIndexPathWhenEditing:(BOOL)editing;
-(id)calendarForIndexPath:(id)indexPath whenEditing:(BOOL)editing;
-(int)indexInSourceInfoForCalendarAtIndexPath:(id)indexPath whenEditing:(BOOL)editing;
-(id)indexPathForCalendar:(id)calendar whenEditing:(BOOL)editing;
-(BOOL)isCalendarRowAtIndexPath:(id)indexPath whenEditing:(BOOL)editing;
-(BOOL)isEllipsisRowAtIndexPath:(id)indexPath whenEditing:(BOOL)editing;
-(BOOL)isScheduledRowAtIndexPath:(id)indexPath;
-(int)numberOfRowsInSection:(int)section whenEditing:(BOOL)editing;
-(int)numberOfSectionsWhenEditing:(BOOL)sectionsWhenEditing;
-(id)sourceInfoForSection:(int)section whenEditing:(BOOL)editing;
-(int)sourceInfoIndexForSection:(int)section whenEditing:(BOOL)editing;
-(int)visibleIndexForSection:(int)section whenEditing:(BOOL)editing;
-(int)sectionForSourceInfo:(id)sourceInfo whenEditing:(BOOL)editing;
-(int)sectionForVisibleIndex:(int)visibleIndex whenEditing:(BOOL)editing;
-(BOOL)hasSpecialCardSection;
-(void)reloadCalendars;
-(BOOL)isEmpty;
-(void)selectScheduled;
-(BOOL)scheduledSelected;
-(id)selectedCalendar;
-(void)selectCalendar:(id)calendar;
-(void)selectFirstAvailableCalendar;
-(id)eventStore;
-(void)dealloc;
-(id)initWithEventStore:(id)eventStore orCalendarSourceInfos:(id)infos;
@end