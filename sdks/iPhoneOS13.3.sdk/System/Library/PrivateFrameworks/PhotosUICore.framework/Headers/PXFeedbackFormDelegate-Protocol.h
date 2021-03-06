//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSDictionary, NSString;

@protocol PXFeedbackFormDelegate <NSObject>
- (void)userSentPositiveFeedback:(NSDictionary *)arg1 negativeFeedback:(NSDictionary *)arg2 customFeedback:(NSString *)arg3;
- (void)userIndicatedDislike;
- (void)userIndicatedLike;
- (BOOL)shouldDisplaySecondaryFeedbackButtons;
- (NSArray *)positiveFeedbackKeys;
- (NSArray *)negativeFeedbackKeys;
- (NSString *)viewTitleForRadar;
- (NSString *)longTitleText;

@optional
- (void)userDidFinish:(BOOL)arg1;
- (BOOL)shouldContinuePresentingFormAfterFeedback;
- (BOOL)wantsPositiveFeedbackSection;
- (BOOL)wantsCustomFeedbackSection;
@end

