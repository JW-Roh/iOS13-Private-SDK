//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@interface AFAudioState : NSObject <NSCopying, NSSecureCoding>
{
    unsigned int _audioSessionID;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) unsigned int audioSessionID; // @synthesize audioSessionID=_audioSessionID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)description;

@end

