//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSRegularExpression.h>

@interface NSRegularExpression (EmailFoundationAdditions)
+ (id)ef_regularExpressionForQuotedStringsInLocales:(id)arg1;
- (id)ef_stringByRemovingTokensFromString:(id)arg1 tokenizationHandler:(id /* CDUnknownBlockType */)arg2;
- (id)ef_stringByRemovingTokensFromString:(id)arg1 matchingOptions:(NSUInteger)arg2 tokenizationOptions:(NSUInteger)arg3 tokenizationHandler:(id /* CDUnknownBlockType */)arg4;
- (void)ef_enumerateTokensInString:(id)arg1 options:(NSUInteger)arg2 usingBlock:(id /* CDUnknownBlockType */)arg3;
@end
