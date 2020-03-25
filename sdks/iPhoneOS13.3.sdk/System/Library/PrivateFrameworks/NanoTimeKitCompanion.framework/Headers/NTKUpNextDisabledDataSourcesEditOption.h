//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKEditOption.h>

@class NSSet;

@interface NTKUpNextDisabledDataSourcesEditOption : NTKEditOption
{
    NSSet *_disabledBundleIdentifiers;
}

+ (BOOL)supportsSecureCoding;
+ (id)optionWithDisabledDataSourceIdentifiers:(id)arg1 forDevice:(id)arg2;
@property(readonly, nonatomic) NSSet *disabledBundleIdentifiers; // @synthesize disabledBundleIdentifiers=_disabledBundleIdentifiers;
// - (void).cxx_destruct;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isValidOption;
- (id)_alphabeticallySortedIdentifiers;
- (id)JSONObjectRepresentation;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)localizedName;
- (id)dailySnapshotKey;
- (id)initWithJSONObjectRepresentation:(id)arg1 forDevice:(id)arg2;
- (id)initWithDisabledDataSourceIdentifiers:(id)arg1 forDevice:(id)arg2;

@end
