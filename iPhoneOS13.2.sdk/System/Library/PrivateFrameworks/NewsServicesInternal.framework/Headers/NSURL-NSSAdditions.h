//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@interface NSURL (NSSAdditions)
+ (id)nss_MarketingPageURL;
+ (id)nss_NewsURLWithPathComponents:(id)arg1 internal:(_Bool)arg2;
+ (id)nss_NewsURLForArticleID:(id)arg1 internal:(_Bool)arg2 targetIsVideo:(_Bool)arg3 hardPaywall:(_Bool)arg4;
+ (id)nss_NewsURLForManageNotifications;
+ (id)nss_NewsURLForFavoritesPicker;
+ (id)nss_NewsURLForHistory;
+ (id)nss_NewsURLForSaved;
+ (id)nss_NewsURLForMyMagazines;
+ (id)nss_NewsURLForMagazines;
+ (id)nss_NewsURLForForYou;
+ (id)nss_NewsURLForTagID:(id)arg1;
+ (id)nss_NewsURLForArticleID:(id)arg1 title:(id)arg2;
+ (id)nss_NewsURLForArticleID:(id)arg1 targetIsVideo:(_Bool)arg2;
+ (id)nss_NewsURLForIssueID:(id)arg1;
+ (id)nss_NewsURLForArticleID:(id)arg1;
+ (id)nss_NewsURLForWebLinkURL:(id)arg1;
+ (id)nss_NewsURLForWidgetVideoPlaylist;
- (id)_nss_valueForQueryParameterWithKey:(id)arg1;
- (id)_nss_URLByAppendingQueryItem:(id)arg1;
- (id)nss_campaignID;
- (id)nss_URLWithVideoTarget:(_Bool)arg1;
- (id)nss_URLWithCampaignID:(id)arg1;
- (_Bool)nss_isFollowNewsTagURL;
- (_Bool)nss_isNewsTagURL;
- (_Bool)nss_hasRefreshParameter;
- (_Bool)nss_isNewsArticleVideoURL;
- (_Bool)nss_isNewsArticleURL;
- (_Bool)nss_isNewsWidgetVideoPlaylist;
- (_Bool)nss_isNewsURL;
@end
