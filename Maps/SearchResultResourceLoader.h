/* SearchResultResourceLoader.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "NSURLConnectionDelegate.h"

@class ACAccountStore, ACAccountCredential, NSMapTable, OAURLRequestSigner;

__attribute__((visibility("hidden")))
@interface SearchResultResourceLoader : XXUnknownSuperclass <NSURLConnectionDelegate> {
	NSMapTable* _requestsForURLs;
	NSMapTable* _connectionsForURLs;
	NSMapTable* _dataForConnections;
	BOOL _hasCheckedYelpAccountCredentials;
	ACAccountStore* _accountStore;
	ACAccountCredential* _yelpAccountCredentials;
	OAURLRequestSigner* _signer;
}
@property(readonly, assign, nonatomic) ACAccountCredential* yelpAccountCredentials;
@property(readonly, assign, nonatomic) OAURLRequestSigner* signer;
@property(readonly, assign, nonatomic) BOOL canPersonalizeYelpDetails;
+(id)sharedInstance;
-(void)accountStoreDidChange:(id)accountStore;
-(id)accountStore;
-(void)connection:(id)connection didFailWithError:(id)error;
-(void)connectionDidFinishLoading:(id)connection;
-(void)connection:(id)connection didReceiveData:(id)data;
-(void)handleConnection:(id)connection withData:(id)data error:(id)error;
-(void)cancelRequestsForSearchResult:(id)searchResult;
-(void)sendReviewsRequest:(id)request handler:(id)handler;
-(void)sendDealRequest:(id)request handler:(id)handler;
-(void)sendSnapshotRequest:(id)request handler:(id)handler;
-(id)snapshotCreator;
-(void)sendImageRequest:(id)request handler:(id)handler;
-(void)sendURLRequest:(id)request;
-(void)dealloc;
-(id)init;
@end
