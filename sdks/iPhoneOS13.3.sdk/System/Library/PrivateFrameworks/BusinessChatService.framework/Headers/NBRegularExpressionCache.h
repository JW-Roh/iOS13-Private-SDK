//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCache;

__attribute__((visibility("hidden")))
@interface NBRegularExpressionCache : NSObject
{
    NSCache *_cache;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSCache *cache; // @synthesize cache=_cache;
// - (void).cxx_destruct;
- (id)regularExpressionForPattern:(id)arg1 error:(id )arg2;
- (id)init;

@end

