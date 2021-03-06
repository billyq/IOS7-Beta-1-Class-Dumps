/* ASTGestureRecorderFingerPathCollection.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, NSMutableDictionary;
@protocol ASTGestureRecorderFingerPathCollectionDelegate;

@interface ASTGestureRecorderFingerPathCollection : XXUnknownSuperclass {
@private
	id<ASTGestureRecorderFingerPathCollectionDelegate> _delegate;
	unsigned _maximumFingerPathsCount;
	unsigned _referenceTimesArrayIndex;
	NSMutableArray* _fingerPaths;
	NSMutableArray* _pointsArrays;
	NSMutableDictionary* _touchPathIndicesToFingerPathIndices;
	NSMutableArray* _timesArrays;
}
@property(retain, nonatomic) NSMutableArray* timesArrays;
@property(retain, nonatomic) NSMutableDictionary* touchPathIndicesToFingerPathIndices;
@property(retain, nonatomic) NSMutableArray* pointsArrays;
@property(retain, nonatomic) NSMutableArray* fingerPaths;
@property(readonly, assign, nonatomic) NSMutableArray* referenceTimesArray;
@property(assign, nonatomic) unsigned referenceTimesArrayIndex;
@property(readonly, assign, nonatomic) unsigned timestampsCount;
@property(assign, nonatomic) unsigned maximumFingerPathsCount;
@property(readonly, assign, nonatomic) unsigned fingerPathsCount;
@property(assign, nonatomic) id<ASTGestureRecorderFingerPathCollectionDelegate> delegate;
-(void)_didUpdateFingerPathAtIndex:(unsigned)index;
-(void)_didInsertFingerPathAtIndex:(unsigned)index;
-(void)_referenceTimesArrayIndexNeedsRefresh;
-(void)reset;
-(void)appendFingerPathsFromFingerPathCollection:(id)fingerPathCollection;
-(void)appendPointsForTouches:(id)touches referenceView:(id)view time:(double)time;
-(id)propertyListRepresentationWithName:(id)name;
-(double)timestampAtIndex:(unsigned)index;
-(id)fingerPathAtIndex:(unsigned)index upToPositionForTimestampAtIndex:(unsigned)index2;
-(id)fingerPathAtIndex:(unsigned)index;
-(void)dealloc;
-(id)initWithMaximumFingerPathsCount:(unsigned)maximumFingerPathsCount;
-(id)init;
@end
