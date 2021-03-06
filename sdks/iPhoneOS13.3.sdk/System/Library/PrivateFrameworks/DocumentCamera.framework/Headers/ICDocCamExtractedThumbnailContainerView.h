//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol ICDocCamExtractedThumbnailContainerViewDelegate;

__attribute__((visibility("hidden")))
@interface ICDocCamExtractedThumbnailContainerView : UIView
{
    id <ICDocCamExtractedThumbnailContainerViewDelegate> _delegate;
}

@property(nonatomic) __weak id <ICDocCamExtractedThumbnailContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (BOOL)orderNextForAccessibility:(id)arg1;
- (BOOL)orderPreviousForAccessibility:(id)arg1;
- (id)accessibilityCustomActions;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (NSUInteger)accessibilityTraits;
- (id)accessibilityElements;
- (id)accessibilityValue;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;

@end

