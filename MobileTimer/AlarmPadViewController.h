/* AlarmPadViewController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "UIGestureRecognizerDelegate.h"
#import "AlarmDelegate.h"
#import "AlarmActiveDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "EditAlarmViewControllerDelegate.h"
#import "StateManagement.h"
#import "MobileTimer-Structs.h"
#import "UIPopoverControllerDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class AlarmCollectionEditController, EditAlarmViewController, UILongPressGestureRecognizer, Alarm, CADisplayLink, UIPopoverController;

__attribute__((visibility("hidden")))
@interface AlarmPadViewController : XXUnknownSuperclass <UICollectionViewDataSource, UICollectionViewDelegate, UIPopoverControllerDelegate, UIGestureRecognizerDelegate, EditAlarmViewControllerDelegate, AlarmDelegate, AlarmActiveDelegate, StateManagement> {
	UIPopoverController* _addOrEditPopover;
	EditAlarmViewController* _addController;
	AlarmCollectionEditController* _editListController;
	CGRect _previousAlarmsViewport;
	UILongPressGestureRecognizer* _alarmDragRecognizer;
	Alarm* _draggingAlarm;
	CADisplayLink* _dragScrollDisplayLink;
	BOOL _dragScrollingUp;
	double _dragScrollTimestamp;
}
-(id)defaultPNGName;
-(void)saveState;
-(void)reloadState;
-(void)activeChangedForAlarm:(id)alarm active:(BOOL)active;
-(void)alarmDidUpdate:(id)alarm;
-(void)didDeleteAlarm:(id)alarm;
-(void)didEditAlarm:(id)alarm;
-(void)dismissAddView:(id)view;
-(void)cleanUpPopover;
-(void)commitAddOrEditOperation;
-(void)popoverControllerDidDismissPopover:(id)popoverController;
-(BOOL)popoverControllerShouldDismissPopover:(id)popoverController;
-(void)scrollAlarmSchedule:(id)schedule;
-(void)endAlarmDragAndSave:(BOOL)save;
-(void)updateAlarmDrag;
-(void)beginAlarmDrag;
-(void)handleAlarmDrag:(id)drag;
-(BOOL)gestureRecognizerShouldBegin:(id)gestureRecognizer;
-(void)collectionView:(id)view didDeselectItemAtIndexPath:(id)indexPath;
-(BOOL)collectionView:(id)view shouldDeselectItemAtIndexPath:(id)indexPath;
-(void)collectionView:(id)view didSelectItemAtIndexPath:(id)indexPath;
-(id)collectionView:(id)view cellForItemAtIndexPath:(id)indexPath;
-(int)collectionView:(id)view numberOfItemsInSection:(int)section;
-(int)numberOfSectionsInCollectionView:(id)collectionView;
-(void)viewDidLayoutSubviews;
-(void)viewDidUnload;
-(void)loadView;
-(void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(void)selectAlarm:(id)alarm scroll:(BOOL)scroll;
-(id)selectedAlarm;
-(id)contentView;
-(void)didSuspend;
-(void)showEditView;
-(void)showAddView;
-(void)refreshButtonStates;
-(void)dealloc;
-(id)init;
@end
