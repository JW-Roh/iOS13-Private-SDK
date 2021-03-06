//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <NanoTimeKitCompanion/CLKFullColorImageView-Protocol.h>

@class CLKDevice, NSDate, NTKColoringLabel;
@protocol CLKMonochromeFilterProvider;

@interface NTKDateRichComplicationFullColorImageView : UIView <CLKFullColorImageView>
{
    CLKDevice *_device;
    NTKColoringLabel *_weekdayLabel;
    NTKColoringLabel *_dayLabel;
    id <CLKMonochromeFilterProvider> _filterProvider;
    NSDate *_overrideDate;
}

@property(retain, nonatomic) NSDate *overrideDate; // @synthesize overrideDate=_overrideDate;
@property(nonatomic) __weak id <CLKMonochromeFilterProvider> filterProvider; // @synthesize filterProvider=_filterProvider;
// - (void).cxx_destruct;
- (void)updateMonochromeColor;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)_updateDate;
- (void)_timeChanged:(id)arg1;
- (void)layoutSubviews;
- (id)_newLabelSubviewWithFont:(id)arg1;
- (void)dealloc;
- (void)_commonInit;
- (void)configureWithImageProvider:(id)arg1 reason:(long long)arg2;
- (void)resumeLiveFullColorImageView;
- (void)pauseLiveFullColorImageView;
- (id)initFullColorImageViewWithDevice:(id)arg1;

@end

