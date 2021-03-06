/* MNSignStyle.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "Maps-Structs.h"

@class UIImage, UIColor, NSString;

__attribute__((visibility("hidden")))
@interface MNSignStyle : XXUnknownSuperclass {
	NSString* _backgroundImageName;
	NSString* _tallBackgroundImageName;
	NSString* _squareImageName;
	UIColor* _foregroundColor;
	UIColor* _accentColor;
	UIColor* _dividerColor;
}
@property(readonly, assign, nonatomic) float secondarySignBottomBorderHeight;
@property(readonly, assign, nonatomic) float secondarySignTopBorderHeight;
@property(readonly, assign, nonatomic) float secondarySignShieldAreaMargin;
@property(readonly, assign, nonatomic) float secondarySignManeuverAreaMargin;
@property(readonly, assign, nonatomic) float secondarySignManeuverAreaWidth;
@property(readonly, assign, nonatomic) float secondarySignRightContentInset;
@property(readonly, assign, nonatomic) float secondarySignLeftContentInset;
@property(readonly, assign, nonatomic) float secondarySignYOverlapAmount;
@property(readonly, assign, nonatomic) float secondarySignWidthScale;
@property(readonly, assign, nonatomic) UIImage* squareSignImage;
@property(readonly, assign, nonatomic) int desiredFraming;
@property(readonly, assign, nonatomic) UIColor* dividerColor;
@property(readonly, assign, nonatomic) UIColor* accentColor;
@property(readonly, assign, nonatomic) UIColor* bannerTextColor;
@property(readonly, assign, nonatomic) UIColor* foregroundColor;
@property(readonly, assign, nonatomic) UIColor* backgroundColor;
@property(readonly, assign, nonatomic) NSString* recalculatingFontName;
@property(readonly, assign, nonatomic) BOOL capitalizeInstructions;
@property(readonly, assign, nonatomic) NSString* instructionsFontName;
@property(readonly, assign, nonatomic) NSString* distanceFontName;
+(id)signStyleForBasicColor:(int)basicColor;
+(XXStruct_psi9$D)arrowMetricsForStyle:(int)style;
-(float)secondarySignHeightForVariant:(int)variant;
-(UIEdgeInsets)borderInsetsForSize:(CGSize)size;
-(id)borderImageForSize:(CGSize)size;
-(float)innerBorderRadiusForSize:(CGSize)size;
-(float)outerBorderRadiusForSize:(CGSize)size;
-(id)outerBackgroundImageForSize:(CGSize)size;
-(id)innerBackgroundImageForSize:(CGSize)size;
-(BOOL)isDimmed;
-(BOOL)wantCentering;
-(BOOL)wantBlur;
-(float)shieldAreaMargin;
-(float)internalMargin;
-(float)coloredAreaInset;
-(float)minimumWidthForVariant:(int)variant;
-(float)maximumWidthForVariant:(int)variant forScreenWidth:(float)screenWidth;
-(float)sideMarginForVariant:(int)variant;
-(float)topMarginForVariant:(int)variant isCombinedSign:(BOOL)sign;
-(float)absentSideAreaWidth;
-(float)shieldAreaWidthForVariant:(int)variant;
-(float)maneuverAreaWidthForVariant:(int)variant;
-(float)reroutingLabelHeightForVariant:(int)variant;
-(float)distanceLabelHeightForVariant:(int)variant;
-(float)labelBottomMarginForVariant:(int)variant;
-(float)reroutingOnlyLabelYOffsetForVariant:(int)variant;
-(float)instructionsLabelYOffsetForVariant:(int)variant;
-(float)distanceLabelYOffsetForVariant:(int)variant;
-(float)recalculatingFontSizeForVariant:(int)variant;
-(float)instructionsFontSizeForVariant:(int)variant;
-(float)distanceNumericFontSizeForVariant:(int)variant;
-(float)distanceFontSizeForVariant:(int)variant;
-(void)dealloc;
-(id)initWithBackgroundImageName:(id)backgroundImageName tallBackgroundImageName:(id)name foregroundColor:(id)color accentColor:(id)color4 dividerColor:(id)color5 squareSignImageName:(id)name6;
@end
