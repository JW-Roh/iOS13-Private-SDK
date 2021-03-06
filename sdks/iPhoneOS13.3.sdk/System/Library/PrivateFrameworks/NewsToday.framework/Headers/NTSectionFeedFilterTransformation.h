//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsToday/NTFeedTransforming-Protocol.h>

@protocol NTFeedTransforming;

@interface NTSectionFeedFilterTransformation : NSObject <NTFeedTransforming>
{
    NSUInteger _embedsLimit;
    id <NTFeedTransforming> _underlyingTransformation;
}

@property(readonly, nonatomic) id <NTFeedTransforming> underlyingTransformation; // @synthesize underlyingTransformation=_underlyingTransformation;
@property(readonly, nonatomic) NSUInteger embedsLimit; // @synthesize embedsLimit=_embedsLimit;
// - (void).cxx_destruct;
- (id)transformFeedItems:(id)arg1;
- (id)initWithTodayData:(id)arg1 configurationManager:(id)arg2 readArticlesFilterMethod:(int)arg3 seenArticlesFilterMethod:(int)arg4 minimumTimeSinceFirstSeenToFilter:(double)arg5 supplementalFeedFilterOptions:(long long)arg6 embedsLimit:(NSUInteger)arg7 otherArticleIDs:(id)arg8 otherClusterIDs:(id)arg9 filterDate:(id)arg10;
- (id)init;

@end

