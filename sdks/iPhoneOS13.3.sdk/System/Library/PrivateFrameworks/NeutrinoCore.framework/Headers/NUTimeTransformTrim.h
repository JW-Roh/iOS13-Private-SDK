//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NUGeometryTransform.h>

@interface NUTimeTransformTrim : NUGeometryTransform
{
    CDStruct_1b6d18a9 _beginTime;
}

@property(readonly) CDStruct_1b6d18a9 beginTime; // @synthesize beginTime=_beginTime;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)description;
- (CDStruct_1b6d18a9)transformTime:(CDStruct_1b6d18a9)arg1;
- (id)inverseTransform;
- (id)init;
- (id)initWithTrimBeginTime:(CDStruct_1b6d18a9)arg1;

@end

