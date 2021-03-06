/* RouteStepCell.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "Maps-Structs.h"
#import "SnapshotResponderProtocol.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class MNRoute, MKMapSnapshot, MKMapSnapshotter, UIImage, UIColor, MNRouteStep;

__attribute__((visibility("hidden")))
@interface RouteStepCell : XXUnknownSuperclass <SnapshotResponderProtocol> {
	MNRoute* _route;
	unsigned _stepIndex;
	CGRect _frame;
	int _page;
	BOOL _hasSnapshot;
	MKMapSnapshot* _snapshot;
	MKMapSnapshotter* _snapshotter;
	UIColor* _routeCenterPrintColor;
	UIColor* _routeOutlinePrintColor;
	UIColor* _blueTextColor;
}
@property(readonly, assign, nonatomic) BOOL hasSnapshot;
@property(readonly, assign, nonatomic) UIImage* snapshotImage;
@property(assign, nonatomic) float y;
@property(assign, nonatomic) int page;
@property(assign, nonatomic) CGRect frame;
@property(assign, nonatomic) unsigned stepIndex;
@property(readonly, assign, nonatomic) MNRouteStep* routeStep;
@property(retain, nonatomic) MNRoute* route;
+(id)cellWithRoute:(id)route stepIndex:(unsigned)index;
-(void)dealloc;
-(void)releaseSnapshotCreator;
-(id)snapshotBlock;
-(void)drawInRect:(CGRect)rect;
-(float)_textLayoutHeightForLines:(id)lines;
-(void)_drawRouteLineInRect:(CGRect)rect zoomLevel:(float)level;
-(XXStruct_gLbvpC)_intersectLineWithPoint1:(XXStruct_gLbvpC)point1 point2:(XXStruct_gLbvpC)a2 withRect:(XXStruct_Yvvv9D)rect;
-(BOOL)_lineSegmentsIntersectLineAPoint1:(XXStruct_gLbvpC)a1 lineAPoint2:(XXStruct_gLbvpC)a2 lineBPoint1:(XXStruct_gLbvpC)a13 lineBPoint2:(XXStruct_gLbvpC)a24 outIntersectionPoint:(XXStruct_gLbvpC*)point;
-(void)_drawPinInRect:(CGRect)rect zoomLevel:(float)level;
-(id)initWithRoute:(id)route stepIndex:(unsigned)index;
@end
