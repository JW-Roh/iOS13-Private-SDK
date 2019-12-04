//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class AWDHomeKitPredicate, NSMutableArray;

@interface AWDHomeKitEventTrigger : PBCodable <NSCopying>
{
    int _activationState;
    int _activationType;
    NSMutableArray *_events;
    AWDHomeKitPredicate *_predicate;
    _Bool _containsRecurrences;
    _Bool _executeOnce;
    struct {
        unsigned int activationState:1;
        unsigned int activationType:1;
        unsigned int containsRecurrences:1;
        unsigned int executeOnce:1;
    } _has;
}

+ (Class)eventsType;
@property(retain, nonatomic) AWDHomeKitPredicate *predicate; // @synthesize predicate=_predicate;
@property(nonatomic) _Bool containsRecurrences; // @synthesize containsRecurrences=_containsRecurrences;
@property(nonatomic) _Bool executeOnce; // @synthesize executeOnce=_executeOnce;
@property(retain, nonatomic) NSMutableArray *events; // @synthesize events=_events;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsActivationType:(id)arg1;
- (id)activationTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasActivationType;
@property(nonatomic) int activationType; // @synthesize activationType=_activationType;
- (int)StringAsActivationState:(id)arg1;
- (id)activationStateAsString:(int)arg1;
@property(nonatomic) _Bool hasActivationState;
@property(nonatomic) int activationState; // @synthesize activationState=_activationState;
@property(readonly, nonatomic) _Bool hasPredicate;
@property(nonatomic) _Bool hasContainsRecurrences;
@property(nonatomic) _Bool hasExecuteOnce;
- (id)eventsAtIndex:(unsigned long long)arg1;
- (unsigned long long)eventsCount;
- (void)addEvents:(id)arg1;
- (void)clearEvents;

@end
