//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CSSpIdProcessor : NSObject
{
    NSString *_sysConfigFilepath;
}

@property(readonly, nonatomic) NSString *sysConfigFilepath; // @synthesize sysConfigFilepath=_sysConfigFilepath;
- (void)logUtteranceUnderDirectory:(id)arg1 withScores:(id)arg2 withWinner:(id)arg3;
- (void)rejectUtterance;
- (void)updateModelWithBestScoreUser:(id)arg1;
- (void)setCVTTriggerPhraseDetected;
- (void)endProcessing;
- (void)processAudioData:(id)arg1;
@property(readonly, nonatomic) float satScoreThreshold;
@property(readonly, nonatomic) unsigned long long spIdType;
- (id)initWithSpIdContext:(id)arg1 forSpIdType:(unsigned long long)arg2 delegate:(id)arg3;

@end
