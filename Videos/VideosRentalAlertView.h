/* VideosRentalAlertView.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface VideosRentalAlertView : XXUnknownSuperclass {
	int _alertReason;
}
@property(assign, nonatomic) int alertReason;
+(id)_willExpireSoonAlert;
+(id)_initialPlaybackAlertWithTimeRemaining:(double)timeRemaining;
+(id)_generalErrorAlert;
+(id)alertViewForRental:(id)rental;
@end