/* VoiceOverBluetoothManager.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "AccessibilitySettings-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface VoiceOverBluetoothManager : XXUnknownSuperclass {
@private
	BTLocalDeviceImplRef _localDevice;
	BTSessionImplRef _session;
	int _available;
	unsigned _authorizedServices;
	BOOL _audioConnected;
	BOOL _scanningEnabled;
	BTDiscoveryAgentImplRef _discoveryAgent;
	BTPairingAgentImplRef _pairingAgent;
	NSMutableDictionary* _btAddrDict;
	NSMutableDictionary* _btDeviceDict;
}
@property(assign, nonatomic) unsigned authorizedServices;
+(int)lastInitError;
+(id)sharedInstance;
-(unsigned)authorizedServicesForDevice:(id)device;
-(BOOL)isServiceSupported:(unsigned)supported;
-(void)setAudioConnected:(BOOL)connected;
-(BOOL)audioConnected;
-(void)_connectabilityChanged;
-(void)_connectedStatusChanged;
-(BOOL)connected;
-(BOOL)_onlySensorsConnected;
-(id)connectingDevices;
-(void)setConnectable:(BOOL)connectable;
-(BOOL)connectable;
-(void)connectDevice:(id)device;
-(void)connectDevice:(id)device withServices:(unsigned)services;
-(void)acceptSSP:(int)ssp forDevice:(id)device;
-(void)setPincode:(id)pincode forDevice:(id)device;
-(id)pairedDevices;
-(void)unpairDevice:(id)device;
-(void)cancelPairing;
-(void)setDevicePairingEnabled:(BOOL)enabled;
-(BOOL)devicePairingEnabled;
-(void)setDiscoverable:(BOOL)discoverable;
-(BOOL)isDiscoverable;
-(void)_discoveryStateChanged;
-(void)_restartScan;
-(void)setDeviceScanningEnabled:(BOOL)enabled;
-(BOOL)deviceScanningEnabled;
-(id)deviceForAddressString:(id)addressString;
-(void)resetDeviceScanning;
-(BOOL)wasDeviceDiscovered:(id)discovered;
-(void)_removeDevice:(id)device;
-(id)addDeviceIfNeeded:(BTDeviceImplRef)needed;
-(BOOL)isAnyoneScanning;
-(BOOL)setEnabled:(BOOL)enabled;
-(BOOL)enabled;
-(void)_powerChanged;
-(BOOL)setPowered:(BOOL)powered;
-(BOOL)powered;
-(int)powerState;
-(void)postNotificationName:(id)name object:(id)object error:(id)error;
-(void)postNotificationName:(id)name object:(id)object;
-(void)postNotification:(id)notification;
-(void)_postNotification:(id)notification;
-(void)_postNotificationWithArray:(id)array;
-(void)dealloc;
-(void)_cleanup:(BOOL)cleanup;
-(BOOL)_setup:(BTSessionImplRef)setup;
-(BOOL)_attach:(id)attach;
-(id)init;
-(BOOL)available;
@end
