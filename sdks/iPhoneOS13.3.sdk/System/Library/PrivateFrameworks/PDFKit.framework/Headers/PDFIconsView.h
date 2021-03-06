//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, PDFPageIconLayer, PDFThumbnailView;

__attribute__((visibility("hidden")))
@interface PDFIconsView : UIView
{
    PDFThumbnailView *_thumbnailView;
    NSMutableArray *_icons;
    PDFPageIconLayer *_activeIcon;
}

// - (void).cxx_destruct;
- (void)_updateScrubberForPageIndex:(int)arg1;
- (void)_updateScrubberAtViewLocation:(CGPoint)arg1;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (CGSize)_iconsLayoutSize;
- (int)_iconsLayoutIconCount;
- (void)layoutSubviews;
- (void)pageChanged:(id)arg1;
- (void)currentPageChanged:(id)arg1;
- (void)documentMutated:(id)arg1;
- (void)documentChanged:(id)arg1;
- (id)currentPage;
- (void)updateIconsImages;
- (id)initFromThumbnailView:(id)arg1;

@end

