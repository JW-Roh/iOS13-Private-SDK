//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, WDList, WDListDefinition;

__attribute__((visibility("hidden")))
@interface CMOutlineState : NSObject
{
    NSMutableArray *_counters;
    WDListDefinition *_listDefinition;
    WDList *_currentList;
}

@property(readonly) WDListDefinition *listDefinition; // @synthesize listDefinition=_listDefinition;
@property(retain) WDList *currentList; // @synthesize currentList=_currentList;
// - (void).cxx_destruct;
- (void)increaseCounterAtLevel:(unsigned char)arg1;
- (id)levelDescriptionAtIndex:(unsigned char)arg1;
- (NSUInteger)counterAtLevel:(unsigned char)arg1;
- (void)setCounterTo:(NSUInteger)arg1 atLevel:(unsigned char)arg2;
- (void)reset;
- (NSUInteger)levelCount;
- (id)initWithListDefinition:(id)arg1;
- (id)init;

@end

