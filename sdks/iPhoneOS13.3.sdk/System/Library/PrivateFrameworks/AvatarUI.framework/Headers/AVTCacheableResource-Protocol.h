//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSString;
@protocol AVTCacheableResourceChangeToken, AVTCacheableResourceScope;

@protocol AVTCacheableResource <NSObject>
- (BOOL)requiresEncryption;
- (NSUInteger)costForScope:(id <AVTCacheableResourceScope>)arg1;
- (NSString *)volatileIdentifierForScope:(id <AVTCacheableResourceScope>)arg1;

@optional
- (id <AVTCacheableResourceChangeToken>)tokenForObservingChangesWithHandler:(void (^)(void))arg1;
- (NSString *)persistentIdentifierForScope:(id <AVTCacheableResourceScope>)arg1;
@end

