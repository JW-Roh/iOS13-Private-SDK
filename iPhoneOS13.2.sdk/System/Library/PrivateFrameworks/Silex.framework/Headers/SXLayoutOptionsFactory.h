//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXLayoutOptionsFactory-Protocol.h>

@class NSString, SXColumnCalculator, SXDocumentProvider;

@interface SXLayoutOptionsFactory : NSObject <SXLayoutOptionsFactory>
{
    SXColumnCalculator *_columnCalculator;
    SXDocumentProvider *_documentProvider;
}

@property(readonly, nonatomic) SXDocumentProvider *documentProvider; // @synthesize documentProvider=_documentProvider;
@property(readonly, nonatomic) SXColumnCalculator *columnCalculator; // @synthesize columnCalculator=_columnCalculator;
- (id)createLayoutOptionsWithViewportSize:(struct CGSize)arg1 safeAreaInsets:(struct UIEdgeInsets)arg2 traitCollection:(id)arg3 bundleSubscriptionStatus:(long long)arg4 channelSubscriptionStatus:(long long)arg5 contentSizeCategory:(id)arg6 testing:(_Bool)arg7 viewingLocation:(unsigned long long)arg8 contentScaleFactor:(double)arg9;
- (id)initWithColumnCalculator:(id)arg1 documentProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
