//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface C2MPDeviceInfo : PBCodable <NSCopying>
{
    NSMutableArray *_internalTestConfigs;
    NSString *_processName;
    NSString *_processUuid;
    NSString *_processVersion;
    NSString *_productBuild;
    NSString *_productName;
    NSString *_productType;
    NSString *_productVersion;
    NSString *_userDefaultTestName;
    BOOL _isAppleInternal;
    struct {
        unsigned int isAppleInternal:1;
    } _has;
}

+ (Class)internalTestConfigType;
@property(retain, nonatomic) NSMutableArray *internalTestConfigs; // @synthesize internalTestConfigs=_internalTestConfigs;
@property(retain, nonatomic) NSString *userDefaultTestName; // @synthesize userDefaultTestName=_userDefaultTestName;
@property(retain, nonatomic) NSString *processUuid; // @synthesize processUuid=_processUuid;
@property(retain, nonatomic) NSString *processVersion; // @synthesize processVersion=_processVersion;
@property(retain, nonatomic) NSString *processName; // @synthesize processName=_processName;
@property(nonatomic) BOOL isAppleInternal; // @synthesize isAppleInternal=_isAppleInternal;
@property(retain, nonatomic) NSString *productBuild; // @synthesize productBuild=_productBuild;
@property(retain, nonatomic) NSString *productVersion; // @synthesize productVersion=_productVersion;
@property(retain, nonatomic) NSString *productType; // @synthesize productType=_productType;
@property(retain, nonatomic) NSString *productName; // @synthesize productName=_productName;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)internalTestConfigAtIndex:(NSUInteger)arg1;
- (NSUInteger)internalTestConfigsCount;
- (void)addInternalTestConfig:(id)arg1;
- (void)clearInternalTestConfigs;
@property(readonly, nonatomic) BOOL hasUserDefaultTestName;
@property(readonly, nonatomic) BOOL hasProcessUuid;
@property(readonly, nonatomic) BOOL hasProcessVersion;
@property(readonly, nonatomic) BOOL hasProcessName;
@property(nonatomic) BOOL hasIsAppleInternal;
@property(readonly, nonatomic) BOOL hasProductBuild;
@property(readonly, nonatomic) BOOL hasProductVersion;
@property(readonly, nonatomic) BOOL hasProductType;
@property(readonly, nonatomic) BOOL hasProductName;

@end

