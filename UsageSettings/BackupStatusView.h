/* BackupStatusView.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "PSHeaderFooterView.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIProgressView, UILabel, UIActivityIndicatorView, NSString, NSMutableSet, NSError;

__attribute__((visibility("hidden")))
@interface BackupStatusView : XXUnknownSuperclass <PSHeaderFooterView> {
	UIActivityIndicatorView* _spinner;
	UIProgressView* _progressBar;
	UILabel* _statusLabel;
	UILabel* _timeRemainingLabel;
	UILabel* _backupIssueLabel;
	UILabel* _lastBackupLabel;
	float _backupProgress;
	int _animatingToState;
	BOOL _animatedToEnabled;
	NSMutableSet* _visibleSubviews;
	NSError* _backupError;
	NSString* _footerText;
}
@property(assign, nonatomic) float backupProgress;
@property(retain, nonatomic) NSString* footerText;
@property(retain, nonatomic) NSError* backupError;
-(void)updateViewsForBackupState:(int)backupState restoreState:(int)state enabled:(BOOL)enabled;
-(float)progress;
-(void)setBackupProgress:(float)progress timeIntervalRemaining:(double)remaining;
-(void)layoutSubviews;
-(void)_layoutSubviews;
-(void)sizeToFit;
-(float)preferredHeightForWidth:(float)width inTableView:(id)tableView;
-(void)_sizeToFitWidth:(float)fitWidth inTableView:(id)tableView;
-(void)setLastBackupText:(id)text;
-(void)didMoveToSuperview;
-(void)dealloc;
-(id)initWithSpecifier:(id)specifier;
@end