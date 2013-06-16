/* SearchEngineController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "NSURLConnectionDelegate.h"
#import "NSURLDownloadDelegate.h"

@class NSString, NSMutableArray;

__attribute__((visibility("hidden")))
@interface SearchEngineController : XXUnknownSuperclass <NSURLConnectionDelegate, NSURLDownloadDelegate> {
	NSMutableArray* searchEngines;
	unsigned defaultSearchEngineIndex;
	NSString* _countryCode;
	NSString* _languageCode;
	NSString* _carrierCountryCode;
	NSString* _carrierName;
	NSString* _carrierNetworkCode;
}
@property(retain, nonatomic) NSString* carrierNetworkCode;
@property(retain, nonatomic) NSString* carrierName;
@property(retain, nonatomic) NSString* carrierCountryCode;
@property(retain, nonatomic) NSString* languageCode;
@property(retain, nonatomic) NSString* countryCode;
+(id)sharedInstance;
-(void)loadSystemProperties;
-(void)setSearchEngineInfoAsDefault:(id)aDefault;
-(void)loadFallbackSearchEngines;
-(void)addSpecialSearchEngines;
-(id)engineInfoForScriptName:(id)scriptName;
-(id)engineInfoFor:(id)aFor;
-(id)existingEngineInfoFor:(id)aFor;
-(id)defaultSearchEngine;
-(void)setDefaultSearchEngine:(id)engine;
-(void)readDefaultSearchEngine;
-(id)description;
-(void)parseConfigData:(id)data;
-(BOOL)loadLocalConfigPlist:(id)plist;
-(void)downloadRemoteConfigPlist;
-(void)downloadDidFail:(id)download;
-(void)downloadDidFinish:(id)download;
-(BOOL)shouldLoadRemoteConfigPlist;
-(void)loadConfigPlist;
-(void)dealloc;
-(void)reloadSearchEngines;
-(void)populateSearchEngines;
-(id)init;
@end