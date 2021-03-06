//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIViewElement.h>

@class SKUIImageViewElement, SKUILabelViewElement;

__attribute__((visibility("hidden")))
@interface SKUIActivityIndicatorViewElement : SKUIViewElement
{
    double _period;
}

- (long long)pageComponentType;
- (BOOL)isDisabled;
@property(readonly, nonatomic) SKUILabelViewElement *text;
@property(readonly, nonatomic) double period;
@property(readonly, nonatomic) SKUIImageViewElement *image;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;

@end

