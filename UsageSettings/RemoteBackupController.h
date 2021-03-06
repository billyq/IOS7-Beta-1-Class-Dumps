/* RemoteBackupController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "DelayedPushDelegate.h"
#import "NSURLConnectionDelegate.h"

@class PreferencesRemoteUIDelegate, DeviceIdentificationView, SpinnerBezel, NSURL, NSString, UIAlertView;

__attribute__((visibility("hidden")))
@interface RemoteBackupController : XXUnknownSuperclass <NSURLConnectionDelegate, DelayedPushDelegate> {
	DeviceIdentificationView* _deviceIdentificationView;
	NSString* _deviceName;
	NSString* _deviceIdentifier;
	NSString* _backupSizeString;
	NSString* _lastBackupDateString;
	NSURL* _deletionURL;
	NSURL* _deviceImageURL;
	SpinnerBezel* _deletionBezel;
	PreferencesRemoteUIDelegate* _remoteDelegate;
	UIAlertView* _remoteBackupAlertView;
}
@property(retain, nonatomic) PreferencesRemoteUIDelegate* remoteDelegate;
@property(retain, nonatomic) NSURL* deviceImageURL;
@property(retain, nonatomic) NSURL* deletionURL;
@property(retain, nonatomic) NSString* lastBackupDateString;
@property(retain, nonatomic) NSString* backupSizeString;
@property(retain, nonatomic) NSString* deviceIdentifier;
@property(retain, nonatomic) NSString* deviceName;
+(id)specifier;
-(void)connection:(id)connection didReceiveResponse:(id)response;
-(void)connection:(id)connection didFailWithError:(id)error;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(void)loadFailed:(id)failed;
-(void)loadFinished:(id)finished;
-(void)loadStarted:(id)started;
-(void)deleteBackupConfirmed;
-(void)endDeletionBezel;
-(void)startDeletionBezel;
-(void)confirmDelete:(id)aDelete;
-(id)specifiers;
-(BOOL)needsToShowToolbarInPrefsAppRoot;
-(void)loadView;
-(void)loadPropertyValuesFromDictionary:(id)dictionary;
-(void)dealloc;
@end
