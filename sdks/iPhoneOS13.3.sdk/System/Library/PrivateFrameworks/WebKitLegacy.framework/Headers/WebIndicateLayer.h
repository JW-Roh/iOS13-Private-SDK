//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class WebView;

__attribute__((visibility("hidden")))
@interface WebIndicateLayer : CALayer
{
    WebView *_webView;
}

- (id)actionForKey:(id)arg1;
- (void)layoutSublayers;
- (id)initWithWebView:(id)arg1;

@end
