//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@interface ADFlags : NSObject <NSCopying>
{
    NSUInteger _flags;
}

+ (id)initWithFlags:(NSUInteger)arg1;
@property NSUInteger flags; // @synthesize flags=_flags;
- (BOOL)noneSet;
- (BOOL)isEqual:(id)arg1;
- (BOOL)allSet:(NSUInteger)arg1;
- (NSUInteger)anySet:(NSUInteger)arg1;
- (BOOL)isSet:(NSUInteger)arg1;
- (void)reset;
- (void)unset:(NSUInteger)arg1;
- (void)set:(NSUInteger)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)init;

@end

