//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEOMapTransitPoint-Protocol.h>

@class GEOMapRequest;

@protocol GEOMapTransitStop <GEOMapTransitPoint>
@property(readonly, nonatomic) NSUInteger hallID;
- (GEOMapRequest *)findLinksOut:(void (^)(id <GEOMapTransitLink>))arg1 completionHandler:(void (^)(GEOMapRequest *))arg2;
- (GEOMapRequest *)findLinksIn:(void (^)(id <GEOMapTransitLink>))arg1 completionHandler:(void (^)(GEOMapRequest *))arg2;
- (GEOMapRequest *)findHall:(void (^)(id <GEOMapTransitHall>))arg1 completionHandler:(void (^)(GEOMapRequest *))arg2;
@end
