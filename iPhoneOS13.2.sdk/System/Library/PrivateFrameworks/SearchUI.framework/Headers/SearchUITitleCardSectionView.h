//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SearchUI/SearchUICardSectionView.h>

@class NUIContainerBoxView, TLKLabel;

@interface SearchUITitleCardSectionView : SearchUICardSectionView
{
    TLKLabel *_label;
    NUIContainerBoxView *_containerView;
}

+ (_Bool)supportsRecyclingForCardSection:(id)arg1;
@property(retain, nonatomic) NUIContainerBoxView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) TLKLabel *label; // @synthesize label=_label;
- (void)updateWithRowModel:(id)arg1;
- (id)setupContentView;

@end
