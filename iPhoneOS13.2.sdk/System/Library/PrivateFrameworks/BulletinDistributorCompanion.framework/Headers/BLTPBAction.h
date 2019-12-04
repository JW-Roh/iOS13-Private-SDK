//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class BLTPBAppearance, NSData, NSString;

@interface BLTPBAction : PBCodable <NSCopying>
{
    int _activationMode;
    BLTPBAppearance *_appearance;
    int _behavior;
    NSData *_behaviorParameters;
    NSData *_behaviorParametersNulls;
    NSString *_identifier;
    NSString *_launchURL;
    struct {
        unsigned int behavior:1;
    } _has;
}

@property(retain, nonatomic) NSData *behaviorParametersNulls; // @synthesize behaviorParametersNulls=_behaviorParametersNulls;
@property(retain, nonatomic) NSData *behaviorParameters; // @synthesize behaviorParameters=_behaviorParameters;
@property(nonatomic) int behavior; // @synthesize behavior=_behavior;
@property(retain, nonatomic) NSString *launchURL; // @synthesize launchURL=_launchURL;
@property(nonatomic) int activationMode; // @synthesize activationMode=_activationMode;
@property(retain, nonatomic) BLTPBAppearance *appearance; // @synthesize appearance=_appearance;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasBehaviorParametersNulls;
@property(readonly, nonatomic) _Bool hasBehaviorParameters;
@property(nonatomic) _Bool hasBehavior;
@property(readonly, nonatomic) _Bool hasLaunchURL;
@property(readonly, nonatomic) _Bool hasIdentifier;

@end
