//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@protocol SCKZoneModifying;

@protocol SCKZoneCommand <NSObject, NSSecureCoding>
- (void)executeWithZone:(id <SCKZoneModifying>)arg1;

@optional
- (BOOL)shouldDeferUpload;
@end

