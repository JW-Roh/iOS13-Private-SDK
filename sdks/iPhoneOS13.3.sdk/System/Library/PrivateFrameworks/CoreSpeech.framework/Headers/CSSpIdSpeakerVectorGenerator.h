//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CSSpIdSpeakerVectorGenerator : NSObject
{
    NSUInteger _spIdType;
}

@property(readonly, nonatomic) NSUInteger spIdType; // @synthesize spIdType=_spIdType;
- (void)endAudio;
- (void)processAudioData:(id)arg1;
- (id)initWithCSSpIdType:(NSUInteger)arg1 withSysConfigFilepath:(id)arg2 sysConfigRoot:(id)arg3 delegate:(id)arg4 queue:(id)arg5;

@end

