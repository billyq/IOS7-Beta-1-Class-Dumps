/* MusicMiniPlayerView.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "MusicMiniPlayerActionsViewControllerDelegate.h"
#import "MusicMiniPlayerMusicTransportControlsTarget.h"
#import "MPPlaybackControlsDelegate.h"
#import "MusicMiniPlayerRadioAdTransportControlsTarget.h"
#import "MusicMiniPlayerRadioTransportControlsTarget.h"
#import "Music-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class MPAVController, MPAVItem, MusicMiniPlayerPlaybackControlsView;
@protocol MusicMiniPlayerViewDelegate;

__attribute__((visibility("hidden")))
@interface MusicMiniPlayerView : XXUnknownSuperclass <MPPlaybackControlsDelegate, MusicMiniPlayerActionsViewControllerDelegate, MusicMiniPlayerMusicTransportControlsTarget, MusicMiniPlayerRadioAdTransportControlsTarget, MusicMiniPlayerRadioTransportControlsTarget> {
	MusicMiniPlayerPlaybackControlsView* _playbackControlsView;
	id<MusicMiniPlayerViewDelegate> _delegate;
}
@property(assign, nonatomic, getter=isShowingCreateLoadingIndicator) BOOL showingCreateLoadingIndicator;
@property(retain, nonatomic) MPAVController* player;
@property(retain, nonatomic) MPAVItem* item;
@property(assign, nonatomic) int style;
@property(assign, nonatomic) __weak id<MusicMiniPlayerViewDelegate> delegate;
+(float)minimumHeight;
-(void).cxx_destruct;
-(void)setStyle:(int)style animated:(BOOL)animated;
-(void)setItem:(id)item animated:(BOOL)animated;
-(BOOL)transportControls:(id)controls tappedButtonPart:(unsigned long long)part;
-(void)transportControls:(id)controls requestsStationVisibility:(id)visibility;
-(void)transportControlsTappedAdArtworkButton:(id)button;
-(void)transportControlsTappedNowPlayingButton:(id)button;
-(void)musicMiniPlayerActionsViewController:(id)controller didSelectAction:(int)action;
-(CGSize)sizeThatFits:(CGSize)fits;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(void)didMoveToSuperview;
-(id)initWithFrame:(CGRect)frame;
@end