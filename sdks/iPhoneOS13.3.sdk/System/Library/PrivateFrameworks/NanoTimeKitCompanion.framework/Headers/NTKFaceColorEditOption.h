//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKEnumeratedEditOption.h>

@interface NTKFaceColorEditOption : NTKEnumeratedEditOption
{
}

+ (id)_localizedNameForValue:(NSUInteger)arg1 forDevice:(id)arg2;
+ (id)_snapshotKeyForValue:(NSUInteger)arg1 forDevice:(id)arg2;
+ (id)__orderedValuesForDevice:(id)arg1;
+ (id)__allOrderedColors;
+ (id)_orderedValuesForDevice:(id)arg1;
+ (BOOL)value:(long long)arg1 existsInDevice:(id)arg2;
+ (id)_orderedValuesRestrictedByDevice:(id)arg1;
+ (id)optionWithFaceColor:(NSUInteger)arg1 forDevice:(id)arg2;
- (id)_valueToFaceBundleStringDict;
- (BOOL)isEqual:(id)arg1;
- (BOOL)optionExistsInDevice:(id)arg1;
@property(readonly, nonatomic) NSUInteger faceColor;
- (long long)swatchStyle;

@end

