//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSDInsertionContext.h>

@interface TSDNonInteractiveInsertionContext : TSDInsertionContext
{
}

- (BOOL)isInteractive;
- (CGPoint)preferredCenter;
- (BOOL)insertWillBeDiscarded;
- (BOOL)fromDragToInsertController;
- (BOOL)insertFromDrag;
- (BOOL)insertFloating;
- (BOOL)shouldEndEditing;
- (BOOL)isPreferredCenterRequired;
- (BOOL)hasPreferredCenter;

@end

