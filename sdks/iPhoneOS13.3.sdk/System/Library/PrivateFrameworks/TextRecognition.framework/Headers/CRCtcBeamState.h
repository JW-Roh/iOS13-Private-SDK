//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary;

@interface CRCtcBeamState : NSObject
{
    NSMutableDictionary *_mutablePaths;
}

@property(retain, nonatomic) NSMutableDictionary *mutablePaths; // @synthesize mutablePaths=_mutablePaths;
// - (void).cxx_destruct;
- (void)mergePathsWithTrailingWhitespaces;
- (void)kBest:(id )arg1 discarded:(id )arg2 k:(NSUInteger)arg3;
- (id)sortedKeys;
@property(readonly) NSDictionary *paths;
- (id)pathForString:(id)arg1;
- (void)addPath:(id)arg1;
- (id)init;

@end
