//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSArray, NSString, PLXPCObject;

@protocol PLAssetsdPhotoKitServiceProtocol 
- (void)clearSaveTokens:(NSArray *)arg1;
- (void)requestUUIDWithCustomUUID:(NSString *)arg1 reply:(void (^)(NSString *, NSString *, NSError *))arg2;
- (void)applyChangesRequest:(PLXPCObject *)arg1 reply:(void (^)(_Bool, NSError *))arg2;
@end
