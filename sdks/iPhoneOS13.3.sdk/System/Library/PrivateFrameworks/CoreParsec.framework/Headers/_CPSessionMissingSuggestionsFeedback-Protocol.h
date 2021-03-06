//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSData, NSDictionary, _CPSearchSuggestionForFeedback;

@protocol _CPSessionMissingSuggestionsFeedback <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(copy, nonatomic) NSArray *suggestions;
@property(nonatomic) NSUInteger timestamp;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (_CPSearchSuggestionForFeedback *)suggestionsAtIndex:(NSUInteger)arg1;
- (NSUInteger)suggestionsCount;
- (void)addSuggestions:(_CPSearchSuggestionForFeedback *)arg1;
- (void)clearSuggestions;
@end

