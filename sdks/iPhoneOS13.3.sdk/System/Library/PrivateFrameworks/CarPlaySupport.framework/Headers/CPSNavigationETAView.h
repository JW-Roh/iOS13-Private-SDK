//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <CarPlaySupport/CPSNavigationDisplaying-Protocol.h>

@class CPSRouteEstimatesView, CPTrip;

@interface CPSNavigationETAView : UIView <CPSNavigationDisplaying>
{
    CPTrip *_trip;
    CPSRouteEstimatesView *_routeEstimatesView;
    NSUInteger _tripEstimateStyle;
    UIView *_borderView;
}

@property(retain, nonatomic) UIView *borderView; // @synthesize borderView=_borderView;
@property(nonatomic) NSUInteger tripEstimateStyle; // @synthesize tripEstimateStyle=_tripEstimateStyle;
@property(readonly, nonatomic) CPSRouteEstimatesView *routeEstimatesView; // @synthesize routeEstimatesView=_routeEstimatesView;
@property(readonly, nonatomic) CPTrip *trip; // @synthesize trip=_trip;
// - (void).cxx_destruct;
- (void)updateEstimates:(id)arg1 forManeuver:(id)arg2;
- (void)showManeuvers:(id)arg1;
- (void)didMoveToSuperview;
- (void)_updateStyle;
- (void)removeFromSuperview;
- (void)setHidden:(BOOL)arg1;
- (id)initWithTrip:(id)arg1 style:(NSUInteger)arg2;

@end

