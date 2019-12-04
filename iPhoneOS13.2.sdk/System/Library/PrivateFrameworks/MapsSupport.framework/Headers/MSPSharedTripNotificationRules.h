//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSDate;

__attribute__((visibility("hidden")))
@interface MSPSharedTripNotificationRules : NSObject <NSSecureCoding>
{
    _Bool _hasMadeFinalPush;
    unsigned long long _maxPostedNotifications;
    unsigned long long _postedNotifcations;
    double _minimumETADifference;
    double _minimumNotificationInterval;
    NSDate *_lastPostedETADate;
    NSDate *_lastPostedNotificationDate;
    NSDate *_lastUpdatedDate;
    NSDate *_currentETADate;
}

+ (_Bool)supportsSecureCoding;
+ (id)unarchivingObjectsSet;
@property(nonatomic) _Bool hasMadeFinalPush; // @synthesize hasMadeFinalPush=_hasMadeFinalPush;
@property(retain, nonatomic) NSDate *currentETADate; // @synthesize currentETADate=_currentETADate;
@property(retain, nonatomic) NSDate *lastUpdatedDate; // @synthesize lastUpdatedDate=_lastUpdatedDate;
@property(retain, nonatomic) NSDate *lastPostedNotificationDate; // @synthesize lastPostedNotificationDate=_lastPostedNotificationDate;
@property(retain, nonatomic) NSDate *lastPostedETADate; // @synthesize lastPostedETADate=_lastPostedETADate;
@property(nonatomic) double minimumNotificationInterval; // @synthesize minimumNotificationInterval=_minimumNotificationInterval;
@property(nonatomic) double minimumETADifference; // @synthesize minimumETADifference=_minimumETADifference;
@property(nonatomic) unsigned long long postedNotifcations; // @synthesize postedNotifcations=_postedNotifcations;
@property(nonatomic) unsigned long long maxPostedNotifications; // @synthesize maxPostedNotifications=_maxPostedNotifications;
- (double)minimumETADifferenceIncrement;
- (void)incrementMinimumETADiffernce;
- (void)didReceiveUpdateWithETA:(double)arg1 lastUpdated:(double)arg2;
@property(readonly, nonatomic) unsigned long long currentlyNecessaryNotificationType;
- (void)didPostNotification;
- (id)description;
- (id)initWithMaximumNumberOfNotifications:(unsigned long long)arg1 minimumNotificationInterval:(double)arg2;
- (id)initWithMaximumNumberOfNotifications:(unsigned long long)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
