//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapsSuggestions/MapsSuggestionsSignalPack.h>


@interface MapsSuggestionsMutableSignalPack : MapsSuggestionsSignalPack <NSCopying, NSMutableCopying, NSSecureCoding>
{
}

- (id)mutableCopyWithZone:(_NSZone )arg1;
- (id)copy;
- (void)removeAll;
- (BOOL)removeSignalType:(long long)arg1;
- (BOOL)writeSignalValue:(float)arg1 forType:(long long)arg2;
- (BOOL)writeSignalValue:(float)arg1 forType:(long long)arg2 gathered:(id)arg3;
- (BOOL)writeSignalValue:(float)arg1 forType:(long long)arg2 gathered:(id)arg3 expires:(id)arg4;
- (id)initWithCapacity:(NSUInteger)arg1;
- (BOOL)addFromMapItem:(struct GEOMapItemStorage )arg1;
- (BOOL)addFromEntry:(id)arg1;

@end

