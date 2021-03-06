//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSMutableDictionary, NSMutableSet;

__attribute__((visibility("hidden")))
@interface TSCERemoteDataSpecifierSet : NSObject <NSCopying>
{
    NSMutableSet _hotData;
    NSMutableDictionary *_coldDataByYear;
    NSUInteger _coldSpecifierCount;
}

+ (id)setWithSpecifiers:(id)arg1;
+ (id)setWithSpecifier:(id)arg1;
+ (id)set;
@property(readonly, nonatomic) NSUInteger coldSpecifierCount; // @synthesize coldSpecifierCount=_coldSpecifierCount;
@property(retain, nonatomic) NSMutableDictionary *coldDataByYear; // @synthesize coldDataByYear=_coldDataByYear;
@property(retain, nonatomic) NSMutableSet *hotData; // @synthesize hotData=_hotData;
// - (void).cxx_destruct;
- (id)shortDescription;
- (id)description;
- (id)p_description:(BOOL)arg1;
- (id)setOfSpecifiersWithDate:(id)arg1;
- (id)setOfSpecifiersWithSymbol:(id)arg1;
- (id)setByIntersectingWithSymbolsOfSet:(id)arg1;
- (id)setOfSpecifiersPassingTest:(id /* CDUnknownBlockType */)arg1;
- (id)setByRemovingSpecifiersWithSymbols:(id)arg1;
- (id)setByRemovingSpecifiersFromSet:(id)arg1;
- (id)setByIntersectingWithSet:(id)arg1;
- (id)setOfSpecifiersNotContainedInSet:(id)arg1;
- (id)setOfSpecifiersContainedInSet:(id)arg1;
- (id)yearsReferenced;
- (id)hotSpecifierSet;
- (id)coldSpecifierSet;
- (void)enumerateSpecifiersWithBlock:(id /* CDUnknownBlockType */)arg1;
- (id)allSymbols;
- (id)sortedArrayOfSpecifiers;
- (id)coldSpecifiers;
- (id)hotSpecifiers;
- (id)allSpecifiers;
- (BOOL)containsColdSpecifiers;
- (BOOL)containsSpecifiersWithSymbol:(id)arg1;
- (BOOL)containsSpecifiersFromSet:(id)arg1;
- (BOOL)containsSpecifier:(id)arg1;
- (void)removeAllSpecifiers;
- (void)removeSpecifiersFromSet:(id)arg1;
- (void)insertSpecifiersFromSet:(id)arg1;
- (void)removeSpecifier:(id)arg1;
- (void)insertSpecifier:(id)arg1;
@property(readonly, nonatomic) NSUInteger count;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithSpecifiers:(id)arg1;
- (id)init;
- (void)p_revalidateColdCount;
- (NSMutableSet )p_setForSpecifier:(id)arg1;
- (NSMutableSet )p_setForYear:(id)arg1;

@end

