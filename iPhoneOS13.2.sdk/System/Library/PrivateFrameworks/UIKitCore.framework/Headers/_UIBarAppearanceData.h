//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



__attribute__((visibility("hidden")))
@interface _UIBarAppearanceData : NSObject <NSCopying>
{
    _Bool _immutable;
}

+ (id)decodeFromCoder:(id)arg1 prefix:(id)arg2;
- (void)markReadOnly;
- (void)assertMutable:(SEL)arg1;
- (id)replicate;
- (_Bool)checkEqualTo:(id)arg1;
- (long long)hashInto:(long long)arg1;
- (void)describeInto:(id)arg1;
- (void)encodeToCoder:(id)arg1 prefix:(id)arg2;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)writableInstance;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
