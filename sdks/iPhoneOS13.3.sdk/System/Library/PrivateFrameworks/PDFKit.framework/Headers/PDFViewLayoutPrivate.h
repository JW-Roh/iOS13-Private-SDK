//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, PDFDocument;

__attribute__((visibility("hidden")))
@interface PDFViewLayoutPrivate : NSObject
{
    id delegate;
    BOOL delegateKnowsMargins;
    BOOL delegateKnowsDisplayMode;
    BOOL delegateKnowsDisplayAsBook;
    BOOL delegateKnowsDisplayBox;
    BOOL delegateKnowsDisplayRTL;
    BOOL delegateKnowsDisplaysDirection;
    BOOL delegateKnowsDocumentMargins;
    BOOL delegateKnowsIsUsingPageViewController;
    PDFDocument *document;
    NSUInteger pageCount;
    NSLock *pageLayoutLock;
    CGRect pageLayoutBounds;
    CGSize singlePageContinuousSize;
    CGSize twoUpContinousSize;
    long long cachedContinuousSizeDisplayDirection;
}

// - (void).cxx_destruct;

@end
