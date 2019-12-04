//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TextInputCore/TIWordSearch.h>

@class NSArray;

@interface TIWordSearchChinesePhonetic : TIWordSearch
{
    id /* block */ _contactObserver;
    _Bool _fuzzyPinyinEnabled;
    _Bool _tenKeyPinyinEnabled;
    int _shuangpinType;
    NSArray *_fuzzyPinyinPairs;
}

+ (id)pinyinCharacterSetWithTones;
@property(retain, nonatomic) NSArray *fuzzyPinyinPairs; // @synthesize fuzzyPinyinPairs=_fuzzyPinyinPairs;
@property(nonatomic) int shuangpinType; // @synthesize shuangpinType=_shuangpinType;
@property(nonatomic) _Bool tenKeyPinyinEnabled; // @synthesize tenKeyPinyinEnabled=_tenKeyPinyinEnabled;
@property(nonatomic) _Bool fuzzyPinyinEnabled; // @synthesize fuzzyPinyinEnabled=_fuzzyPinyinEnabled;
- (void)updateAddressBook;
- (void)addContact:(id)arg1 toVocabulary:(void *)arg2 toReadingPairs:(id)arg3;
- (id)transLiterateReading:(id)arg1 withName:(id)arg2;
- (id)uncachedCandidatesForOperation:(id)arg1;
- (id)candidatesCacheKeyForOperation:(id)arg1;
- (void)clearCacheForInputString:(id)arg1 keyboardInput:(id)arg2 selectedDisambiguationCandidateIndex:(unsigned long long)arg3;
- (unsigned long long)mecabraAnalysisOptionsWithAutocorrectionEnabled:(_Bool)arg1 firstSyllableLocked:(_Bool)arg2 reanalysisMode:(_Bool)arg3 hardwareKeyboardMode:(_Bool)arg4 predictionEnabled:(_Bool)arg5;
- (void)dealloc;
- (int)mecabraInputMethodType;
- (void)updateShuangpinTypeWithReanalysisMode:(_Bool)arg1;
- (void)updateFuzzyPinyinSettings;
- (void)updateMecabraState;
- (void)clearObservers;

@end
