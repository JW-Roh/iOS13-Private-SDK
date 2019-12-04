//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SFTokenBucket : NSObject
{
    unsigned long long _bucketSize;
    unsigned long long _tokensAvailable;
    unsigned long long _tokenDurationTicks;
    unsigned long long _lastRefreshTicks;
}

- (_Bool)acquireToken;
- (id)initWithBucketSize:(unsigned long long)arg1 tokensPerSec:(double)arg2;
- (id)initWithBucketSize:(unsigned long long)arg1 tokenDurationSec:(double)arg2;
- (id)initWithBucketSize:(unsigned long long)arg1 tokenDurationTicks:(unsigned long long)arg2;
- (id)init;

@end
