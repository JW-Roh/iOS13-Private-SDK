//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DOMElement, NSString, UIImage, UIWebView;

@interface SUDOMElement : NSObject
{
    DOMElement *_element;
    UIImage *_image;
    UIWebView *_webView;
}

+ (CGRect)frameForDOMElement:(id)arg1;
@property(retain, nonatomic) UIWebView *webView; // @synthesize webView=_webView;
@property(readonly, nonatomic) DOMElement *element; // @synthesize element=_element;
- (CGRect)_frame;
- (void)setProperty:(id)arg1 value:(id)arg2;
- (id)newLabelForElementWithText:(id)arg1;
- (id)newImageView;
@property(readonly, nonatomic) NSString *innerText;
@property(readonly, nonatomic) UIImage *imageRepresentation;
@property(readonly, nonatomic) CGRect frame;
- (void)dealloc;
- (id)initWithDOMElement:(id)arg1;

@end

