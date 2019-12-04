//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthToolbox/HKSimpleDataEntryItemDelegate-Protocol.h>

@class NSDateComponents, NSMutableDictionary, NSNumber, NSString;
@protocol WDBuddyFlowUserInfoDelegate;

__attribute__((visibility("hidden")))
@interface WDBuddyFlowUserInfo : NSObject <HKSimpleDataEntryItemDelegate>
{
    NSMutableDictionary *_dataEntryItems;
    id <WDBuddyFlowUserInfoDelegate> _delegate;
    NSString *_firstName;
    NSString *_lastName;
    NSDateComponents *_dateOfBirthComponents;
    NSNumber *_sex;
    NSNumber *_heightInCm;
    NSNumber *_weightInKg;
    NSNumber *_originalHeightInCm;
    NSNumber *_originalWeightInKg;
}

+ (id)buddyFlowUserInfoWithDemographicsInformation:(id)arg1;
@property(retain, nonatomic) NSNumber *originalWeightInKg; // @synthesize originalWeightInKg=_originalWeightInKg;
@property(retain, nonatomic) NSNumber *originalHeightInCm; // @synthesize originalHeightInCm=_originalHeightInCm;
@property(retain, nonatomic) NSNumber *weightInKg; // @synthesize weightInKg=_weightInKg;
@property(retain, nonatomic) NSNumber *heightInCm; // @synthesize heightInCm=_heightInCm;
@property(retain, nonatomic) NSNumber *sex; // @synthesize sex=_sex;
@property(retain, nonatomic) NSDateComponents *dateOfBirthComponents; // @synthesize dateOfBirthComponents=_dateOfBirthComponents;
@property(retain, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(retain, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property(nonatomic) __weak id <WDBuddyFlowUserInfoDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dataEntryItemDidUpdateValue:(id)arg1;
- (id)_todayBirthdayDateComponents;
- (id)_createSexEntryItem;
- (id)_createDateOfBirthEntryItem;
- (id)_dataEntryItemForRegistrantField:(unsigned long long)arg1;
- (void)saveChangesToHealthStore:(id)arg1 withMedicalIDTemplate:(id)arg2;
- (id)_medicalIDName;
- (id)medicalIDRepresentation;
- (id)defaultDataEntryItems;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
