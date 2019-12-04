//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLocale;

@interface CRLanguageResources : NSObject
{
    NSLocale *_locale;
    void *_characterLanguageModel;
    const struct _LXLexicon *_staticLexicon;
    void *_wordLanguageModel;
}

+ (_Bool)isLanguageSupported:(id)arg1;
+ (void *)createWordLanguageModel:(id)arg1;
+ (struct _LXLexicon *)createStaticLexicon:(id)arg1;
+ (void *)createCharacterModel:(id)arg1;
+ (id)languageResourcesForLanguageIdentifier:(id)arg1 index:(long long)arg2;
@property(nonatomic) void *wordLanguageModel; // @synthesize wordLanguageModel=_wordLanguageModel;
@property(nonatomic) const struct _LXLexicon *staticLexicon; // @synthesize staticLexicon=_staticLexicon;
@property(nonatomic) void *characterLanguageModel; // @synthesize characterLanguageModel=_characterLanguageModel;
@property(readonly, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
- (void)dealloc;
- (id)initWithLanguageIdentifier:(id)arg1;

@end
