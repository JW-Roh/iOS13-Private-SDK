//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class ICStorePlatformMetadata, NSArray, NSDate, NSNumber, NSString;

@protocol ICStorePlatformResponse <NSCopying, NSObject>
@property(readonly, copy, nonatomic) NSString *storefrontIdentifier;
@property(readonly, copy, nonatomic) NSDate *expirationDate;
@property(readonly, copy, nonatomic) NSNumber *enqueuerAccountIdentifier;
@property(readonly, copy, nonatomic) NSNumber *accountIdentifier;
@property(readonly, copy, nonatomic) NSArray *allItems;
- (ICStorePlatformMetadata *)itemForIdentifier:(NSString *)arg1;
- (void)enumerateItemsUsingBlock:(void (^)(ICStorePlatformMetadata *, BOOL ))arg1;
@end

