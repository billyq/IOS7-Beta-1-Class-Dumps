/* StarkRouteGeniusLikelyRoutesProvider.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, NSMapTable, MNTracePlayer, StarkLikelyRoutesManager;

__attribute__((visibility("hidden")))
@interface StarkRouteGeniusLikelyRoutesProvider : XXUnknownSuperclass {
	StarkLikelyRoutesManager* _likelyRoutesManager;
	NSMapTable* _changeHandlers;
	BOOL _started;
	MNTracePlayer* _tracePlayer;
	NSArray* _likelyRoutes;
}
@property(copy, nonatomic) NSArray* likelyRoutes;
-(void)removeObserver:(id)observer;
-(void)addObserver:(id)observer changeHandler:(id)handler;
-(void)_invokeChangeHandlers;
-(void)stop;
-(void)start;
-(void)dealloc;
-(id)initWithOptionalTracePlayer:(id)optionalTracePlayer;
@end
