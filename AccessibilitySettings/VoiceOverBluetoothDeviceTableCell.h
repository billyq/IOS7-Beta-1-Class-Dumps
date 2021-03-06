/* VoiceOverBluetoothDeviceTableCell.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UIActivityIndicatorView;

__attribute__((visibility("hidden")))
@interface VoiceOverBluetoothDeviceTableCell : XXUnknownSuperclass {
@private
	UIActivityIndicatorView* _spinner;
	int _state;
}
+(id)selectedCheckedImage;
+(id)checkedImage;
+(id)spacerImage;
-(id)accessibilityTableViewCellText;
-(void)_updateCheckMarkIcon;
-(void)refreshCellContentsWithSpecifier:(id)specifier;
-(void)layoutSubviews;
-(void)setDeviceStatePaired:(BOOL)paired andConnected:(BOOL)connected;
-(void)setDeviceState:(int)state;
-(void)setChecked:(BOOL)checked;
-(void)dealloc;
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier specifier:(id)specifier;
@end
