/* HourlyScrollerBeltDelegate.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol HourlyScrollerBeltDelegate <NSObject>
-(void)didEndScrolling;
-(void)didBeginScrolling;
-(unsigned)sunsetTime;
-(unsigned)sunriseTime;
-(BOOL)isDay;
-(BOOL)isCelsius;
-(id)hourlyForecasts;
-(int)numberOfHours;
-(int)currentCondition;
-(int)currentHourIndex;
-(id)currentTemperature;
@end
