//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class WBSSiteMetadataRequest, WBSSiteMetadataResponse;
@protocol WBSSiteMetadataProviderDelegate;

@protocol WBSSiteMetadataProvider <NSObject>
@property(nonatomic) __weak id <WBSSiteMetadataProviderDelegate> providerDelegate;
- (void)prepareResponseForRequest:(WBSSiteMetadataRequest *)arg1 allowDelayedResponse:(BOOL)arg2;
- (WBSSiteMetadataResponse *)responseForRequest:(WBSSiteMetadataRequest *)arg1 willProvideUpdates:(BOOL )arg2;
- (BOOL)canHandleRequest:(WBSSiteMetadataRequest *)arg1;

@optional
@property(readonly, nonatomic) BOOL providesFavicons;
- (void)purgeUnneededCacheEntries;
- (void)savePendingChangesBeforeTermination;
- (void)emptyCaches;
- (void)stopWatchingUpdatesForRequest:(WBSSiteMetadataRequest *)arg1;
@end

