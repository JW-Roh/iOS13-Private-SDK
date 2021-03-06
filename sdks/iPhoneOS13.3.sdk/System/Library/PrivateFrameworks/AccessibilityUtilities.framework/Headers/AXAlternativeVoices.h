//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface AXAlternativeVoices : NSObject
{
    NSMutableDictionary *_voiceClassesMap;
    NSMutableDictionary *_voiceNameMap;
}

+ (BOOL)supportsAlex;
+ (BOOL)supportsSiri;
+ (id)sharedInstance;
+ (BOOL)inUnitTestMode;
+ (void)setInUnitTestMode:(BOOL)arg1;
@property(retain, nonatomic) NSMutableDictionary *voiceNameMap; // @synthesize voiceNameMap=_voiceNameMap;
@property(retain, nonatomic) NSMutableDictionary *voiceClassesMap; // @synthesize voiceClassesMap=_voiceClassesMap;
// - (void).cxx_destruct;
- (id)_siriBaseIdentifierFromIdentifier:(id)arg1;
- (id)_siriIdentifierFromBaseIdentifier:(id)arg1 language:(id)arg2 quality:(long long)arg3;
- (id)voiceForVoiceIdentifier:(id)arg1 forLanguage:(id)arg2;
- (id)nameForVoiceIdentifier:(id)arg1;
- (BOOL)isAlexAvailableForLanguage:(id)arg1;
- (BOOL)isNashvilleSystemVoice:(id)arg1;
- (BOOL)isSiriVoiceIdentifier:(id)arg1;
- (BOOL)isOldSiriVoiceIdentifier:(id)arg1;
- (BOOL)isAlternativeVoice:(id)arg1;

@end

