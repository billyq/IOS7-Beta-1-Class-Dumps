/* MFMailComposeRemoteService.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */



@protocol MFMailComposeRemoteService
-(void)autosaveWithReply:(id)reply;
-(void)framesForAttachmentsWithIdentifiers:(id)identifiers withReply:(id)reply;
-(void)setContentVisible:(BOOL)visible;
-(void)commitCompositionValuesWithReply:(id)reply;
-(void)addAttachmentData:(id)data mimeType:(id)type fileName:(id)name identifier:(id)identifier;
-(void)setUICustomizationData:(id)data;
-(void)setCompositionValues:(id)values;
@end
