//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

@interface SUItemValidator : NSObject
{
    NSMutableArray *_collectionTests;
    NSMutableArray *_itemTests;
}

@property(readonly, nonatomic) NSArray *validationTests;
- (BOOL)validateItems:(id)arg1 offers:(id)arg2 error:(id )arg3;
- (BOOL)validateItems:(id)arg1 error:(id )arg2;
- (void)removeValidationTest:(id)arg1;
- (void)addItemValidationTests:(id)arg1;
- (void)addCollectionValidationTests:(id)arg1;
- (void)dealloc;

@end

