//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class CADRouteHypothesis, NSString;

@protocol CADCalendarToolInterface 
- (void)CADPostSyntheticRouteHypothesis:(CADRouteHypothesis *)arg1 forEventWithExternalURL:(NSString *)arg2 reply:(void (^)(int))arg3;
- (void)CADPurgeChangeTrackingReply:(void (^)(int))arg1;
@end
