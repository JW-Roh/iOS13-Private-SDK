//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor, UIFont;

@interface AKAnnotationTheme : NSObject
{
    int _pageTheme;
}

+ (id)highlightTextColor:(int)arg1;
+ (id)themeForAnnotationStyle:(int)arg1 pageTheme:(int)arg2 isUnderline:(BOOL)arg3;
+ (id)themeForAnnotationStyle:(int)arg1 pageTheme:(int)arg2;
+ (id)theme:(int)arg1;
+ (id)underlineTheme:(int)arg1;
+ (id)purpleTheme:(int)arg1;
+ (id)pinkTheme:(int)arg1;
+ (id)yellowTheme:(int)arg1;
+ (id)blueTheme:(int)arg1;
+ (id)greenTheme:(int)arg1;
+ (id)colorForAnnotationStyle:(int)arg1 propertyName:(id)arg2 pageTheme:(int)arg3;
+ (id)colorForThemeItem:(id)arg1 pageTheme:(int)arg2;
+ (id)themeItemForAnnotationStyle:(int)arg1 propertyName:(id)arg2;
+ (id)themeDescriptions;
@property(nonatomic) int pageTheme; // @synthesize pageTheme=_pageTheme;
@property(readonly, nonatomic) int annotationStyle;
@property(readonly, nonatomic) BOOL isUnderline;
@property(readonly, nonatomic) UIFont *noteTextFontInTable;
@property(readonly, nonatomic) UIFont *noteTextFont;
@property(readonly, nonatomic) CGSize noteShadowOffset;
@property(readonly, nonatomic) UIColor *noteShadowColor;
@property(readonly, nonatomic) double noteShadowOpacity;
@property(readonly, nonatomic) double noteShadowRadius;
@property(readonly, nonatomic) UIColor *notesSidebarTextColor;
@property(readonly, nonatomic) UIColor *noteMarkerStrikethroughColor;
@property(readonly, nonatomic) UIColor *notesSidebarBarColor;
@property(readonly, nonatomic) UIColor *noteMarkerBorderColor;
@property(readonly, nonatomic) UIColor *noteMarkerFillColor;
@property(readonly, nonatomic) UIColor *highlightColor;
@property(readonly, nonatomic) UIColor *noteTextColor;
@property(readonly, nonatomic) UIColor *noteBorderColor;
@property(readonly, nonatomic) UIColor *noteFillColor;

@end

