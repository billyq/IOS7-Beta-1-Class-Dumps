/* AXSettingsVoiceAssetManager.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@protocol AXSettingsVoiceAssetManagerDelegate;

__attribute__((visibility("hidden")))
@interface AXSettingsVoiceAssetManager : XXUnknownSuperclass {
@private
	id<AXSettingsVoiceAssetManagerDelegate> _delegate;
}
@property(assign, nonatomic) id<AXSettingsVoiceAssetManagerDelegate> delegate;
-(void)requestVoiceLanguageLanguageDownloadInProgress;
-(void)requestVoiceLanguageDownloadProgress:(id)progress;
-(void)requestVoiceLanguageIsDownloadingPaused:(id)paused;
-(void)requestVoiceLanguageIsDownloading:(id)downloading;
-(void)requestVoiceLanguageIsCompact:(id)compact;
-(void)stopDownloading:(id)downloading;
-(void)deleteDownload:(id)download;
-(void)startDownloading:(id)downloading;
-(id)init;
@end