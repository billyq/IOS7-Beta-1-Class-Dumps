/* _CollectingInvocationTrampoline.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@protocol NSFastEnumeration;

__attribute__((visibility("hidden")))
@interface _CollectingInvocationTrampoline : XXUnknownSuperclass {
	id _first;
	id<NSFastEnumeration> _collection;
	BOOL _allMustMatch;
}
-(void)forwardInvocation:(id)invocation;
-(BOOL)respondsToSelector:(SEL)selector;
-(id)methodSignatureForSelector:(SEL)selector;
-(void)dealloc;
-(id)initWithCollection:(id)collection allMustMatch:(BOOL)match;
@end
