//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSString;

@protocol PLClientAuthorization 
@property(readonly, nonatomic) _Bool directDatabaseWriteAuthorized;
@property(readonly, nonatomic) CDStruct_4c969caf clientAuditToken;
@property(readonly, nonatomic) _Bool photoKitEntitled;
@property(readonly, nonatomic) int clientProcessIdentifier;
@property(readonly, nonatomic) NSString *trustedCallerDisplayName;
@property(readonly, nonatomic) NSString *trustedCallerBundleID;
- (_Bool)photoKitEntitledFor:(NSString *)arg1;
@end
