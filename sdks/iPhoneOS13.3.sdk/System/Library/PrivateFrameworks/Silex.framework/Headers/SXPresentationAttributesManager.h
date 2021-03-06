//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXPresentationAttributesManager-Protocol.h>

@class NSHashTable, SXPresentationAttributes;

@interface SXPresentationAttributesManager : NSObject <SXPresentationAttributesManager>
{
    SXPresentationAttributes *_presentationAttributes;
    NSHashTable *_observers;
}

@property(readonly, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(readonly, nonatomic) SXPresentationAttributes *presentationAttributes; // @synthesize presentationAttributes=_presentationAttributes;
// - (void).cxx_destruct;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)updateAttributes:(id)arg1;
- (void)attributesChangedFrom:(id)arg1 to:(id)arg2;
- (id)init;

@end

