//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class FMAccuracyOverlay, NSString, UIColor, UIImage;

@protocol FMAnnotation <NSObject>
@property(retain, nonatomic) UIImage *smallOverlayIcon;
@property(retain, nonatomic) UIImage *largeOverlayIcon;
@property(retain, nonatomic) UIImage *smallAnnotationIcon;
@property(retain, nonatomic) UIImage *largeAnnotationIcon;
@property(retain, nonatomic) UIColor *tintColor;
@property(nonatomic) BOOL isBorderEnabled;
@property(nonatomic) double distanceFromUser;
@property(nonatomic) struct CLLocationCoordinate2D coordinate;
@property(nonatomic) double horizontalAccuracy;
@property(retain, nonatomic) FMAccuracyOverlay *overlay;
- (BOOL)isThisDevice;
- (BOOL)hasKnownLocation;

@optional
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly, copy, nonatomic) NSString *title;
@end

