//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosGraph/PGNamingAnalyzer-Protocol.h>

@class PGGraphNamingProcessor;

@interface PGNamingSocialGroupAnalyzer : NSObject <PGNamingAnalyzer>
{
    PGGraphNamingProcessor *_processor;
}

@property(readonly, nonatomic) __weak PGGraphNamingProcessor *processor; // @synthesize processor=_processor;
// - (void).cxx_destruct;
- (id)_eligibleSocialGroups;
- (void)runAnalysisWithProgressBlock:(id /* CDUnknownBlockType */)arg1;
- (id)initWithNamingProcessor:(id)arg1;
- (id)name;

@end

