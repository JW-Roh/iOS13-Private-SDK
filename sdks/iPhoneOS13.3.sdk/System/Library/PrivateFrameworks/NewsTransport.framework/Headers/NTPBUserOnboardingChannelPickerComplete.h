//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSMutableArray;

@interface NTPBUserOnboardingChannelPickerComplete : PBCodable <NSCopying>
{
    NSMutableArray *_channelIds;
    int _channelPickerPresentationReason;
    NSMutableArray *_topicIds;
    int _totalChannelSelections;
    int _totalTopicSelections;
    BOOL _fromPersonalizeNews;
    struct {
        unsigned int channelPickerPresentationReason:1;
        unsigned int totalChannelSelections:1;
        unsigned int totalTopicSelections:1;
        unsigned int fromPersonalizeNews:1;
    } _has;
}

+ (Class)topicIdType;
+ (Class)channelIdType;
@property(nonatomic) BOOL fromPersonalizeNews; // @synthesize fromPersonalizeNews=_fromPersonalizeNews;
@property(retain, nonatomic) NSMutableArray *topicIds; // @synthesize topicIds=_topicIds;
@property(retain, nonatomic) NSMutableArray *channelIds; // @synthesize channelIds=_channelIds;
@property(nonatomic) int totalTopicSelections; // @synthesize totalTopicSelections=_totalTopicSelections;
@property(nonatomic) int totalChannelSelections; // @synthesize totalChannelSelections=_totalChannelSelections;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsChannelPickerPresentationReason:(id)arg1;
- (id)channelPickerPresentationReasonAsString:(int)arg1;
@property(nonatomic) BOOL hasChannelPickerPresentationReason;
@property(nonatomic) int channelPickerPresentationReason; // @synthesize channelPickerPresentationReason=_channelPickerPresentationReason;
@property(nonatomic) BOOL hasFromPersonalizeNews;
- (id)topicIdAtIndex:(NSUInteger)arg1;
- (NSUInteger)topicIdsCount;
- (void)addTopicId:(id)arg1;
- (void)clearTopicIds;
- (id)channelIdAtIndex:(NSUInteger)arg1;
- (NSUInteger)channelIdsCount;
- (void)addChannelId:(id)arg1;
- (void)clearChannelIds;
@property(nonatomic) BOOL hasTotalTopicSelections;
@property(nonatomic) BOOL hasTotalChannelSelections;

@end

