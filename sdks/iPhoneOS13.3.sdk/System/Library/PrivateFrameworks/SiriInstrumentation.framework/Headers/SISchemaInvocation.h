//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, SISchemaViewContainer;

@interface SISchemaInvocation : PBCodable
{
    int _invocationAction;
    int _invocationSource;
    SISchemaViewContainer *_viewContainer;
}

@property(retain, nonatomic) SISchemaViewContainer *viewContainer; // @synthesize viewContainer=_viewContainer;
@property(nonatomic) int invocationSource; // @synthesize invocationSource=_invocationSource;
@property(nonatomic) int invocationAction; // @synthesize invocationAction=_invocationAction;
// - (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;

@end
