//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SiriClientFlow/SAAceSerializable-Protocol.h>

@class CFCBNightShiftTransitionTime;

@interface CFCBNightShiftSchedule : AceObject <SAAceSerializable>
{
}

+ (id)aceObjectWithDictionary:(id)arg1 context:(id)arg2;
+ (id)nightShiftScheduleWithDictionary:(id)arg1 context:(id)arg2;
+ (id)nightShiftSchedule;
@property(retain, nonatomic) CFCBNightShiftTransitionTime *toTime;
@property(retain, nonatomic) CFCBNightShiftTransitionTime *fromTime;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
