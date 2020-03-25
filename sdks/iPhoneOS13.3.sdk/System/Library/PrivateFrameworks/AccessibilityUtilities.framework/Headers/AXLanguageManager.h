//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AXDialectMap, NSArray, NSCharacterSet, NSLocale, NSSet, NSString;

@interface AXLanguageManager : NSObject
{
    AXDialectMap *_dialectForSystemLanguage;
    AXDialectMap *_dialectForCurrentLocale;
    AXDialectMap *_dialectForCurrentRegion;
    BOOL __unitTest_didUpdateForLocaleChange;
    NSArray *_langMaps;
    NSCharacterSet *_commonCharacters;
    NSLocale *_userLocale;
}

+ (id)dialectForAlternativeVoiceIdentifier:(id)arg1;
+ (id)nameForAlternativeVoiceIdentifier:(id)arg1;
+ (id)stringByReplacingFatWidthCharactersWithBasicCharacters:(id)arg1;
+ (id)stringByReplacingEmojiCharactersWithEmojiDescriptions:(id)arg1;
+ (id)doNotTranslateWords;
+ (id)commonPunctuationCharacters;
+ (id)nonlocalizedNameForLanguage:(id)arg1;
+ (BOOL)voiceOverSupportedInCurrentLanguage;
+ (id)sharedInstance;
@property(nonatomic) BOOL _unitTest_didUpdateForLocaleChange; // @synthesize _unitTest_didUpdateForLocaleChange=__unitTest_didUpdateForLocaleChange;
@property(copy, nonatomic) NSLocale *userLocale; // @synthesize userLocale=_userLocale;
@property(retain, nonatomic) NSCharacterSet *commonCharacters; // @synthesize commonCharacters=_commonCharacters;
@property(retain, nonatomic) NSArray *langMaps; // @synthesize langMaps=_langMaps;
// - (void).cxx_destruct;
- (BOOL)didUpdateForLocaleChange;
- (void)_handleUserLocaleDidChange:(id)arg1;
- (id)_loadLangMaps;
- (id)characterSetForRanges:(id)arg1;
@property(readonly, nonatomic) NSSet *preferredLanguageIDsFromUserSelectedKeyboards;
- (id)descriptionOfWord:(id)arg1 forLanguage:(id)arg2;
- (void)updateCachedDialects;
- (BOOL)isStringComposedByCommonCharacters:(id)arg1;
- (BOOL)isCharacterCommon:(unsigned short)arg1;
- (id)ambiguousDialectsFromUserKeyboardPreferences;
- (id)dialectThatCanSpeakCharacter:(unsigned short)arg1;
- (id)dialectsThatCanSpeakString:(id)arg1;
- (id)dialectsThatCanSpeakCharacter:(unsigned short)arg1;
- (id)dialectForLanguageID:(id)arg1;
@property(nonatomic) __weak AXDialectMap *dialectForCurrentRegion;
@property(nonatomic) __weak AXDialectMap *dialectForCurrentLocale;
@property(readonly, nonatomic) __weak AXDialectMap *dialectForUserLocale;
@property(nonatomic) __weak AXDialectMap *dialectForSystemLanguage;
@property(readonly, nonatomic) NSString *systemLanguageID;
- (id)debugDescription;
- (id)basicDescription;
- (id)description;
- (void)dealloc;
- (id)init;

@end
