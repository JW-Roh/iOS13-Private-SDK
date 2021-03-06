//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSDictionary;

@interface CSVTUIASRGrammars : NSObject <NSURLSessionDelegate>
{
    NSDictionary *_grammar;
}

+ (id)sharedGrammars;
// - (void).cxx_destruct;
- (id)_getLMEWithGrammar:(id)arg1 withLocale:(id)arg2;
- (id)getLMEforLocale:(id)arg1;
- (id)_getRegexPatternsWithGrammars:(id)arg1 withUtt:(long long)arg2 withLocale:(id)arg3;
- (id)getRegexPatternsForUtt:(long long)arg1 Locale:(id)arg2;
- (id)_getLeadingPatternsWithGrammars:(id)arg1 withLocale:(id)arg2;
- (id)getLeadingPatternsForUtt:(long long)arg1 Locale:(id)arg2;
- (id)_getTrailingPatternsWithGrammars:(id)arg1 withLocale:(id)arg2;
- (id)getTrailingPatternsForUtt:(long long)arg1 Locale:(id)arg2;
- (id)createGrammars;
- (id)init;

@end

