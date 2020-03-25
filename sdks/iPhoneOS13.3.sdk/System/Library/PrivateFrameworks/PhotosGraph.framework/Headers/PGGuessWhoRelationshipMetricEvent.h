//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosGraph/PLMetricEvent-Protocol.h>

@class NSDictionary, NSString, PGGraph;

@interface PGGuessWhoRelationshipMetricEvent : NSObject <PLMetricEvent>
{
    NSString *_identifier;
    NSDictionary *_payload;
    PGGraph *_graph;
    NSUInteger _numberOfPeople;
    NSUInteger _numberOfInferredFamilyMembers;
    NSUInteger _numberOfInferredFriends;
    NSUInteger _numberOfInferredParents;
    NSUInteger _numberOfInferredCoworkers;
    NSUInteger _numberOfInferredPartners;
    NSUInteger _numberOfInferredChildren;
    NSUInteger _numberOfFamilyHolidaySignalRegistrations;
    NSUInteger _numberOfParentContactNameSignalRegistrations;
    NSUInteger _numberOfSameFamilyNameSignalRegistrations;
    NSUInteger _numberOfHomeMomentsSignalRegistrations;
    NSUInteger _numberOfAnniversaryDateSignalRegistrations;
    NSUInteger _numberOfTopTwoPersonSocialGroupSignalRegistrations;
    NSUInteger _numberOfLoveEmojisSignalRegistrations;
    NSUInteger _numberOfTopPersonSignalRegistrations;
    NSUInteger _numberOfFriendNightOutSignalRegistrations;
    NSUInteger _numberOfPartnerTripSignalRegistrations;
    NSUInteger _numberOfFriendsFamilyTripSignalRegistrations;
    NSUInteger _numberOfWeekendSignalRegistrations;
    NSUInteger _numberOfCoworkersAtWorkSignalRegistrations;
    NSUInteger _numberOfCoworkerCalendarSignalRegistrations;
    NSUInteger _numberOfAgeDifferentThanMeSignalRegistrations;
    NSUInteger _numberOfParentGrandparentOldSignalRegistrations;
    NSUInteger _numberOfFamilyHolidaySignalRegistrationsInCorrectInference;
    NSUInteger _numberOfParentContactNameSignalRegistrationsInCorrectInference;
    NSUInteger _numberOfSameFamilyNameSignalRegistrationsInCorrectInference;
    NSUInteger _numberOfHomeMomentsSignalRegistrationsInCorrectInference;
    NSUInteger _numberOfAnniversaryDateSignalRegistrationsInCorrectInference;
    NSUInteger _numberOfTopTwoPersonSocialGroupSignalRegistrationsInCorrectInference;
    NSUInteger _numberOfLoveEmojisSignalRegistrationsInCorrectInference;
    NSUInteger _numberOfTopPersonSignalRegistrationsInCorrectInference;
    NSUInteger _numberOfFriendNightOutSignalRegistrationsInCorrectInference;
    NSUInteger _numberOfPartnerTripSignalRegistrationsInCorrectInference;
    NSUInteger _numberOfFriendsFamilyTripSignalRegistrationsInCorrectInference;
    NSUInteger _numberOfWeekendSignalRegistrationsInCorrectInference;
    NSUInteger _numberOfCoworkersAtWorkSignalRegistrationsInCorrectInference;
    NSUInteger _numberOfCoworkerCalendarSignalRegistrationsInCorrectInference;
    NSUInteger _numberOfAgeDifferentThanMeSignalRegistrationsInCorrectInference;
    NSUInteger _numberOfParentGrandparentOldSignalRegistrationsInCorrectInference;
}

@property(nonatomic) NSUInteger numberOfParentGrandparentOldSignalRegistrationsInCorrectInference; // @synthesize numberOfParentGrandparentOldSignalRegistrationsInCorrectInference=_numberOfParentGrandparentOldSignalRegistrationsInCorrectInference;
@property(nonatomic) NSUInteger numberOfAgeDifferentThanMeSignalRegistrationsInCorrectInference; // @synthesize numberOfAgeDifferentThanMeSignalRegistrationsInCorrectInference=_numberOfAgeDifferentThanMeSignalRegistrationsInCorrectInference;
@property(nonatomic) NSUInteger numberOfCoworkerCalendarSignalRegistrationsInCorrectInference; // @synthesize numberOfCoworkerCalendarSignalRegistrationsInCorrectInference=_numberOfCoworkerCalendarSignalRegistrationsInCorrectInference;
@property(nonatomic) NSUInteger numberOfCoworkersAtWorkSignalRegistrationsInCorrectInference; // @synthesize numberOfCoworkersAtWorkSignalRegistrationsInCorrectInference=_numberOfCoworkersAtWorkSignalRegistrationsInCorrectInference;
@property(nonatomic) NSUInteger numberOfWeekendSignalRegistrationsInCorrectInference; // @synthesize numberOfWeekendSignalRegistrationsInCorrectInference=_numberOfWeekendSignalRegistrationsInCorrectInference;
@property(nonatomic) NSUInteger numberOfFriendsFamilyTripSignalRegistrationsInCorrectInference; // @synthesize numberOfFriendsFamilyTripSignalRegistrationsInCorrectInference=_numberOfFriendsFamilyTripSignalRegistrationsInCorrectInference;
@property(nonatomic) NSUInteger numberOfPartnerTripSignalRegistrationsInCorrectInference; // @synthesize numberOfPartnerTripSignalRegistrationsInCorrectInference=_numberOfPartnerTripSignalRegistrationsInCorrectInference;
@property(nonatomic) NSUInteger numberOfFriendNightOutSignalRegistrationsInCorrectInference; // @synthesize numberOfFriendNightOutSignalRegistrationsInCorrectInference=_numberOfFriendNightOutSignalRegistrationsInCorrectInference;
@property(nonatomic) NSUInteger numberOfTopPersonSignalRegistrationsInCorrectInference; // @synthesize numberOfTopPersonSignalRegistrationsInCorrectInference=_numberOfTopPersonSignalRegistrationsInCorrectInference;
@property(nonatomic) NSUInteger numberOfLoveEmojisSignalRegistrationsInCorrectInference; // @synthesize numberOfLoveEmojisSignalRegistrationsInCorrectInference=_numberOfLoveEmojisSignalRegistrationsInCorrectInference;
@property(nonatomic) NSUInteger numberOfTopTwoPersonSocialGroupSignalRegistrationsInCorrectInference; // @synthesize numberOfTopTwoPersonSocialGroupSignalRegistrationsInCorrectInference=_numberOfTopTwoPersonSocialGroupSignalRegistrationsInCorrectInference;
@property(nonatomic) NSUInteger numberOfAnniversaryDateSignalRegistrationsInCorrectInference; // @synthesize numberOfAnniversaryDateSignalRegistrationsInCorrectInference=_numberOfAnniversaryDateSignalRegistrationsInCorrectInference;
@property(nonatomic) NSUInteger numberOfHomeMomentsSignalRegistrationsInCorrectInference; // @synthesize numberOfHomeMomentsSignalRegistrationsInCorrectInference=_numberOfHomeMomentsSignalRegistrationsInCorrectInference;
@property(nonatomic) NSUInteger numberOfSameFamilyNameSignalRegistrationsInCorrectInference; // @synthesize numberOfSameFamilyNameSignalRegistrationsInCorrectInference=_numberOfSameFamilyNameSignalRegistrationsInCorrectInference;
@property(nonatomic) NSUInteger numberOfParentContactNameSignalRegistrationsInCorrectInference; // @synthesize numberOfParentContactNameSignalRegistrationsInCorrectInference=_numberOfParentContactNameSignalRegistrationsInCorrectInference;
@property(nonatomic) NSUInteger numberOfFamilyHolidaySignalRegistrationsInCorrectInference; // @synthesize numberOfFamilyHolidaySignalRegistrationsInCorrectInference=_numberOfFamilyHolidaySignalRegistrationsInCorrectInference;
@property(nonatomic) NSUInteger numberOfParentGrandparentOldSignalRegistrations; // @synthesize numberOfParentGrandparentOldSignalRegistrations=_numberOfParentGrandparentOldSignalRegistrations;
@property(nonatomic) NSUInteger numberOfAgeDifferentThanMeSignalRegistrations; // @synthesize numberOfAgeDifferentThanMeSignalRegistrations=_numberOfAgeDifferentThanMeSignalRegistrations;
@property(nonatomic) NSUInteger numberOfCoworkerCalendarSignalRegistrations; // @synthesize numberOfCoworkerCalendarSignalRegistrations=_numberOfCoworkerCalendarSignalRegistrations;
@property(nonatomic) NSUInteger numberOfCoworkersAtWorkSignalRegistrations; // @synthesize numberOfCoworkersAtWorkSignalRegistrations=_numberOfCoworkersAtWorkSignalRegistrations;
@property(nonatomic) NSUInteger numberOfWeekendSignalRegistrations; // @synthesize numberOfWeekendSignalRegistrations=_numberOfWeekendSignalRegistrations;
@property(nonatomic) NSUInteger numberOfFriendsFamilyTripSignalRegistrations; // @synthesize numberOfFriendsFamilyTripSignalRegistrations=_numberOfFriendsFamilyTripSignalRegistrations;
@property(nonatomic) NSUInteger numberOfPartnerTripSignalRegistrations; // @synthesize numberOfPartnerTripSignalRegistrations=_numberOfPartnerTripSignalRegistrations;
@property(nonatomic) NSUInteger numberOfFriendNightOutSignalRegistrations; // @synthesize numberOfFriendNightOutSignalRegistrations=_numberOfFriendNightOutSignalRegistrations;
@property(nonatomic) NSUInteger numberOfTopPersonSignalRegistrations; // @synthesize numberOfTopPersonSignalRegistrations=_numberOfTopPersonSignalRegistrations;
@property(nonatomic) NSUInteger numberOfLoveEmojisSignalRegistrations; // @synthesize numberOfLoveEmojisSignalRegistrations=_numberOfLoveEmojisSignalRegistrations;
@property(nonatomic) NSUInteger numberOfTopTwoPersonSocialGroupSignalRegistrations; // @synthesize numberOfTopTwoPersonSocialGroupSignalRegistrations=_numberOfTopTwoPersonSocialGroupSignalRegistrations;
@property(nonatomic) NSUInteger numberOfAnniversaryDateSignalRegistrations; // @synthesize numberOfAnniversaryDateSignalRegistrations=_numberOfAnniversaryDateSignalRegistrations;
@property(nonatomic) NSUInteger numberOfHomeMomentsSignalRegistrations; // @synthesize numberOfHomeMomentsSignalRegistrations=_numberOfHomeMomentsSignalRegistrations;
@property(nonatomic) NSUInteger numberOfSameFamilyNameSignalRegistrations; // @synthesize numberOfSameFamilyNameSignalRegistrations=_numberOfSameFamilyNameSignalRegistrations;
@property(nonatomic) NSUInteger numberOfParentContactNameSignalRegistrations; // @synthesize numberOfParentContactNameSignalRegistrations=_numberOfParentContactNameSignalRegistrations;
@property(nonatomic) NSUInteger numberOfFamilyHolidaySignalRegistrations; // @synthesize numberOfFamilyHolidaySignalRegistrations=_numberOfFamilyHolidaySignalRegistrations;
@property(nonatomic) NSUInteger numberOfInferredChildren; // @synthesize numberOfInferredChildren=_numberOfInferredChildren;
@property(nonatomic) NSUInteger numberOfInferredPartners; // @synthesize numberOfInferredPartners=_numberOfInferredPartners;
@property(nonatomic) NSUInteger numberOfInferredCoworkers; // @synthesize numberOfInferredCoworkers=_numberOfInferredCoworkers;
@property(nonatomic) NSUInteger numberOfInferredParents; // @synthesize numberOfInferredParents=_numberOfInferredParents;
@property(nonatomic) NSUInteger numberOfInferredFriends; // @synthesize numberOfInferredFriends=_numberOfInferredFriends;
@property(nonatomic) NSUInteger numberOfInferredFamilyMembers; // @synthesize numberOfInferredFamilyMembers=_numberOfInferredFamilyMembers;
@property(nonatomic) NSUInteger numberOfPeople; // @synthesize numberOfPeople=_numberOfPeople;
@property(retain, nonatomic) PGGraph *graph; // @synthesize graph=_graph;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
// - (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)_relationshipKeyForLabel:(id)arg1;
- (id)_readableStringByRelationshipEdgeProperty;
- (id)_inferredRelationshipKeys;
- (void)_incrementRelationshipSignalMetricsForRelationshipEdge:(id)arg1 inferredRelationshipCorrect:(BOOL)arg2;
- (void)gatherMetricsWithProgressBlock:(id /* CDUnknownBlockType */)arg1;
@property(readonly, nonatomic) NSDictionary *payload; // @synthesize payload=_payload;
- (id)initWithGraphManager:(id)arg1;

@end
