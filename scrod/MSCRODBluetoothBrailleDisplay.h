/* MSCRODBluetoothBrailleDisplay.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface MSCRODBluetoothBrailleDisplay : XXUnknownSuperclass {
	NSMutableDictionary* _bluetoothConnectedDevices;
	BOOL _isReconnectionEnabled;
	BOOL _isDriverLoading;
	BOOL _isDriverDisconnected;
}
+(id)_displayWithIOElement:(id)ioelement driverIdentifier:(id)identifier modelIdentifier:(id)identifier3 mainSize:(id)size statusSize:(id)size5 delegate:(id)delegate reconnectionEnabled:(BOOL)enabled;
+(id)displayWithIOElement:(id)ioelement cachedInfo:(id)info delegate:(id)delegate reconnectionEnabled:(BOOL)enabled;
+(id)displayWithIOElement:(id)ioelement driverIdentifier:(id)identifier delegate:(id)delegate reconnectionEnabled:(BOOL)enabled;
+(id)displayWithIOElement:(id)ioelement driverIdentifier:(id)identifier delegate:(id)delegate;
-(id)configuration;
-(void)resetReconnectionTimer;
-(void)_delayedDeviceUpdatedNotification:(id)notification;
-(void)deviceUpdatedNotification:(id)notification;
-(void)_delayedRemoveDeviceNotification:(id)notification;
-(void)removeDeviceNotification:(id)notification;
-(void)_delayedAddDeviceNotification:(id)notification;
-(void)addDeviceNotification:(id)notification;
-(void)_stopWatchingForDevices;
-(void)_startWatchingForDevices;
-(void)_reloadDriver;
-(void)_unloadHandler;
-(void)_setupDriverSupport;
-(void)_runThread;
-(void)invalidate;
-(void)_delayedDisplayLoad;
-(id)_initWithDriver:(id)driver driverIdentifier:(id)identifier modelIdentifier:(id)identifier3 ioElement:(id)element mainSize:(int)size statusSize:(int)size6 delegate:(id)delegate reconnectionEnabled:(BOOL)enabled;
-(id)_initWithDriver:(id)driver driverIdentifier:(id)identifier ioElement:(id)element delegate:(id)delegate;
@end
