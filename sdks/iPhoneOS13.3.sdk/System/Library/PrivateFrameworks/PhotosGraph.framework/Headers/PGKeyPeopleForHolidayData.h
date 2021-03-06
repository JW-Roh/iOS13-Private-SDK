//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString, PGGraphNode, PGGraphPersonNode;

@interface PGKeyPeopleForHolidayData : NSObject
{
    NSMutableSet *_holidayRules;
    PGGraphNode *_socialGroupNode;
    PGGraphPersonNode *_personNode;
    NSMutableSet *_momentNodes;
}

@property(retain, nonatomic) NSMutableSet *momentNodes; // @synthesize momentNodes=_momentNodes;
@property(retain, nonatomic) PGGraphPersonNode *personNode; // @synthesize personNode=_personNode;
@property(retain, nonatomic) PGGraphNode *socialGroupNode; // @synthesize socialGroupNode=_socialGroupNode;
@property(retain, nonatomic) NSMutableSet *holidayRules; // @synthesize holidayRules=_holidayRules;
// - (void).cxx_destruct;
@property(readonly) NSString *uuid;
@property(readonly) double score;
- (id)initWithPersonNode:(id)arg1;
- (id)initWithSocialGroupNode:(id)arg1;
- (id)init;

@end

