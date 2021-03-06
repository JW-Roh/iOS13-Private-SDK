//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DataDetectorsNaturalLanguage/IPFeatureExtractor.h>

@interface IPDataDetectorsFeatureExtractor : IPFeatureExtractor
{
}

- (NSRange)textRangeReferencingEvening:(id)arg1;
- (NSRange)textRangeReferencingAfternoon:(id)arg1;
- (NSRange)textRangeReferencingNoon:(id)arg1;
- (NSRange)textRangeReferencingMorning:(id)arg1;
- (NSRange)textRangeReferencingNewYearsEve:(id)arg1;
- (NSRange)textRangeReferencingValentineDay:(id)arg1;
- (NSRange)textRangeReferencingAllDay:(id)arg1;
- (NSRange)textRangeReferencingNextWeekEnd:(id)arg1;
- (NSRange)textRangeReferencingThisWeekEnd:(id)arg1;
- (NSRange)textRangeReferencingTomorrow:(id)arg1;
- (id)newYearsEveDayDateFromReferenceDate:(id)arg1;
- (id)valentineDayDateFromReferenceDate:(id)arg1;
- (id)tomorrowDateFromReferenceDate:(id)arg1;
- (id)thisSaturdayDateFromReferenceDate:(id)arg1;
- (id)stringByReplacingDetectedDataWithNGramMarkersInString:(id)arg1;
- (id)featureDataComplementingFeatureData:(id)arg1 hour:(NSUInteger)arg2 minute:(NSUInteger)arg3 duration:(double)arg4;
- (void)setTimeZone:(id)arg1 forDateFeatures:(id)arg2;
- (void)standardizeTimezonesForDetectedFeatures:(id)arg1;
- (id)featuresForTextString:(id)arg1 inMessageUnit:(id)arg2 context:(id)arg3;
- (BOOL)stringContainsNonTimeStrings:(id)arg1 aroundRange:(NSRange)arg2;
- (struct __DDScanner )timeScanner;
- (struct __DDScanner )standardScanner;
- (id)init;

@end

