//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/SWLoadingPolicyProvider-Protocol.h>

@protocol FCHeadlineProviding;

@interface NUWebContentLoadingPolicyProvider : NSObject <SWLoadingPolicyProvider>
{
    id <FCHeadlineProviding> _headline;
}

@property(readonly, nonatomic) id <FCHeadlineProviding> headline; // @synthesize headline=_headline;
// - (void).cxx_destruct;
- (NSUInteger)loadingPolicy;
- (id)initWithHeadline:(id)arg1;

@end
