//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>




@class NSArray, NSDate, NSDictionary, NSNumber, NSString, NSURLSession;

@interface NSPConfiguration : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_waldoHost;
    _Bool _ignoreInvalidCerts;
    NSNumber *_version;
    NSNumber *_timestamp;
    NSNumber *_enabled;
    NSDate *_resurrectionDate;
    NSArray *_appRules;
    NSNumber *_waldoEnabled;
    NSNumber *_waldoPort;
    NSString *_waldoPath;
    NSNumber *_waldoRequestTimeout;
    NSString *_waldoLeafOID;
    NSNumber *_waldoRevocationFailClosed;
    NSURLSession *_waldoSession;
    NSDictionary *_edgeSets;
    NSNumber *_persistMetrics;
    long long _diskVersion;
    NSPConfiguration *_defaults;
}

+ (_Bool)supportsSecureCoding;
+ (id)defaultConfiguration;
@property(retain) NSPConfiguration *defaults; // @synthesize defaults=_defaults;
@property(readonly) long long diskVersion; // @synthesize diskVersion=_diskVersion;
@property(copy) NSNumber *persistMetrics; // @synthesize persistMetrics=_persistMetrics;
@property(retain) NSDictionary *edgeSets; // @synthesize edgeSets=_edgeSets;
@property _Bool ignoreInvalidCerts; // @synthesize ignoreInvalidCerts=_ignoreInvalidCerts;
@property(retain) NSURLSession *waldoSession; // @synthesize waldoSession=_waldoSession;
@property(copy) NSNumber *waldoRevocationFailClosed; // @synthesize waldoRevocationFailClosed=_waldoRevocationFailClosed;
@property(copy) NSString *waldoLeafOID; // @synthesize waldoLeafOID=_waldoLeafOID;
@property(copy) NSNumber *waldoRequestTimeout; // @synthesize waldoRequestTimeout=_waldoRequestTimeout;
@property(copy) NSString *waldoPath; // @synthesize waldoPath=_waldoPath;
@property(copy) NSNumber *waldoPort; // @synthesize waldoPort=_waldoPort;
@property(copy) NSNumber *waldoEnabled; // @synthesize waldoEnabled=_waldoEnabled;
@property(copy) NSArray *appRules; // @synthesize appRules=_appRules;
@property(copy) NSDate *resurrectionDate; // @synthesize resurrectionDate=_resurrectionDate;
@property(copy) NSNumber *enabled; // @synthesize enabled=_enabled;
@property(readonly) NSNumber *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly) NSNumber *version; // @synthesize version=_version;
- (void)incrementSessionCountersOnFirstLaunch;
- (_Bool)resetStaleEdgeSets;
@property(copy) NSString *waldoHost;
@property(readonly) _Bool isDead;
- (id)getCurrentKeyBagForAppRule:(id)arg1;
- (id)getEdgeSetForAppRule:(id)arg1;
- (id)getEdgeSetForSigningIdentifier:(id)arg1;
- (id)createWaldoURLWithDomain:(id)arg1 timestamp:(id)arg2;
@property(readonly) NSDate *dayPassExpirationDate;
- (void)teardown;
- (_Bool)evaluateEnableRatios;
@property(readonly) NSDate *earliestEnableCheckDate;
- (void)setup;
- (void)updateNetworkAgents;
- (id)copyAgentResultsForAppRule:(id)arg1;
- (void)enumerateEdgeSetsWithBlock:(id /* block */)arg1;
- (id)initFromTLVs:(id)arg1;
- (id)copyTLVData;
- (void)removeFromKeychain;
- (void)saveToKeychain;
- (id)initFromKeychain;
- (id)initWithTimestamp:(id)arg1 fromDictionary:(id)arg2 waldoSource:(long long)arg3;
- (void)merge:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)loadBuiltinAppRulesFromDisk;

@end
