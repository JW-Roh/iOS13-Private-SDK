//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (VSSpeechService)
+ (BOOL)vs_isCJKCharacter:(unsigned short)arg1;
+ (NSUInteger)_vs_countPhoneticSyllables_xsampa:(id)arg1;
+ (NSUInteger)_vs_countPhoneticSyllables_lhp:(id)arg1;
+ (id)vs_markerStringForContext:(id)arg1;
- (BOOL)vs_hasCJKCharacter;
- (id)vs_removeSpeechTags;
- (id)vs_removePhonetics;
- (NSUInteger)vs_countPhoneticSyllables;
- (double)vs_measurePauses;
- (id)vs_insertContextInfo:(id)arg1;
- (id)vs_substituteAudioWithLocalPath;
- (id)vs_textifyEmojiWithLanguage:(id)arg1;
- (id)preinstalledAudioHashForLanguage:(id)arg1 gender:(long long)arg2;
- (id)md5hash;
@end
