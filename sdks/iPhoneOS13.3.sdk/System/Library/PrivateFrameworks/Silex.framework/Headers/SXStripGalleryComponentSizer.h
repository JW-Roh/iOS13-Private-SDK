//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/SXComponentSizer.h>

@interface SXStripGalleryComponentSizer : SXComponentSizer
{
}

- (NSUInteger)shouldIgnoreViewportPaddingForColumnLayout:(id)arg1;
- (NSUInteger)shouldIgnoreMarginsForColumnLayout:(id)arg1;
- (NSRange)overrideColumnLayoutForColumnRange:(NSRange)arg1 inColumnLayout:(id)arg2;
- (double)rightContentInsetForColumnLayout:(id)arg1;
- (double)xOffsetForColumnLayout:(id)arg1;
- (double)contentWidthForColumnLayout:(id)arg1;
- (id)imageResources;
- (double)calculateHeightForWidth:(double)arg1 layoutContext:(id)arg2;

@end

