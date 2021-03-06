/* MPHNowPlayingPlaybackControlsView.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "Music-Structs.h"
#import "UIActionSheetDelegate.h"
#import "MPDetailSliderDelegate.h"

@class UIImageView, UIButton, UIActionSheet, SKUICircleProgressIndicator, UILabel, MPUMarqueeView, MPVolumeSlider, MPHNowPlayingTransportControls;
@protocol MPHNowPlayingPlaybackControlsViewDelegate, MPTransportControlsTarget;

__attribute__((visibility("hidden")))
@interface MPHNowPlayingPlaybackControlsView : XXUnknownSuperclass <MPDetailSliderDelegate, UIActionSheetDelegate> {
	UIActionSheet* _createActionSheet;
	SKUICircleProgressIndicator* _createActivityIndicatorView;
	UIButton* _createButton;
	int _createButtonActions[4];
	UILabel* _detailLabel;
	MPUMarqueeView* _detailMarqueeView;
	UIImageView* _explicitImageView;
	MPHNowPlayingTransportControls* _transportControls;
	UILabel* _titleLabel;
	MPUMarqueeView* _titleMarqueeView;
	MPVolumeSlider* _volumeSlider;
	BOOL _usesMiniProgressControl;
}
@property(assign, nonatomic) BOOL usesMiniProgressControl;
@property(assign, nonatomic, getter=isShowingCreateLoadingIndicator) BOOL showingCreateLoadingIndicator;
@property(assign, nonatomic, getter=isMarqueeEnabled) BOOL marqueeEnabled;
@property(assign, nonatomic) __weak id<MPHNowPlayingPlaybackControlsViewDelegate, MPTransportControlsTarget> delegate;
-(void).cxx_destruct;
-(void)_updateTitles;
-(void)_updateForItemDidChangeAnimated:(BOOL)_updateForItem;
-(BOOL)_isCreateAvailable;
-(void)_playbackContentsDidChangeNotification:(id)_playbackContents;
-(void)_itemTitlesDidChangeNotification:(id)_itemTitles;
-(void)_defaultsDidChangeNotification;
-(void)_createAction:(id)action;
-(void)actionSheet:(id)sheet clickedButtonAtIndex:(int)index;
-(void)setUsesMiniProgressControl:(BOOL)control animated:(BOOL)animated;
-(void)crossedTimeMakerWithEvent:(id)event;
-(id)shuffleButtonImage;
-(BOOL)shouldOverrideProgressTimeLabelStyle;
-(void)setPlayer:(id)player;
-(void)setItem:(id)item;
-(id)repeatButtonImage;
-(void)reloadView;
-(id)playbackSpeedTitleForPlaybackSpeed:(unsigned)playbackSpeed;
-(id)playbackSpeedButtonImageForPlaybackSpeed:(unsigned)playbackSpeed;
-(id)newProgressIndicator;
-(id)newButtonForPart:(unsigned long long)part;
-(BOOL)detailScrubbingHidesControls;
-(int)buttonType;
-(Class)buttonClass;
-(void)layoutSubviews;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end
