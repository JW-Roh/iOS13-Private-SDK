//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>




@interface BKSProcessExitContext : NSObject <NSSecureCoding, NSCopying>
{
    unsigned long long _exitReason;
}

+ (_Bool)supportsSecureCoding;
+ (id)contextWithRBSContext:(id)arg1;
@property(nonatomic) unsigned long long exitReason; // @synthesize exitReason=_exitReason;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;

@end
