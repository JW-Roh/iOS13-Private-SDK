//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosGraph/PGGraphIngestPlace-Protocol.h>

@class NSString;

@interface PGGraphResolvedPlace : NSObject <PGGraphIngestPlace>
{
    NSString *_placeInterestType;
    double _confidence;
}

@property(readonly, nonatomic) double confidence; // @synthesize confidence=_confidence;
@property(readonly, nonatomic) NSString *placeInterestType; // @synthesize placeInterestType=_placeInterestType;
// - (void).cxx_destruct;
- (id)initWithPlaceOfInterestType:(id)arg1 confidence:(double)arg2;

@end
