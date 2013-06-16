/* _MailboxContentViewCellLayoutValues.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UIFont;

__attribute__((visibility("hidden")))
@interface _MailboxContentViewCellLayoutValues : XXUnknownSuperclass {
	UIFont* _addressFont;
	UIFont* _dateFont;
	UIFont* _subjectFont;
	UIFont* _summaryFont;
	UIFont* _mailboxFont;
	float _rowHeight;
	float _topPadding;
	float _leading;
	float _addressCapHeight;
	float _dateCapHeight;
	float _subjectCapHeight;
	float _summaryCapHeight;
	float _bottomPadding;
}
@property(readonly, assign, nonatomic) float bottomPadding;
@property(readonly, assign, nonatomic) float summaryCapHeight;
@property(readonly, assign, nonatomic) float subjectCapHeight;
@property(readonly, assign, nonatomic) float dateCapHeight;
@property(readonly, assign, nonatomic) float addressCapHeight;
@property(readonly, assign, nonatomic) float topPadding;
@property(readonly, assign, nonatomic) float leading;
@property(readonly, assign, nonatomic) float defaultRowHeight;
@property(readonly, assign, nonatomic) UIFont* mailboxFont;
@property(readonly, assign, nonatomic) UIFont* summaryFont;
@property(readonly, assign, nonatomic) UIFont* subjectFont;
@property(readonly, assign, nonatomic) UIFont* dateFont;
@property(readonly, assign, nonatomic) UIFont* addressFont;
+(id)sharedInstance;
-(void)invalidate;
-(void)dealloc;
@end