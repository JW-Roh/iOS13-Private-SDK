//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ITMLKit/IKViewElement.h>

@interface IKViewElement (TVMLKitAdditions)
+ (id)tv_approximateViewElementForView:(id)arg1;
- (void)retrievePresentationDocumentWithResponder:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)tv_dispatchEvent:(id)arg1 canBubble:(_Bool)arg2 isCancelable:(_Bool)arg3 extraInfo:(id)arg4 targetResponder:(id)arg5 completionBlock:(id /* block */)arg6;
@property(nonatomic, getter=tv_isParsedOnce, setter=tv_setParsedOnce:) _Bool tv_parsedOnce;
@property(readonly, nonatomic) long long tv_scaleMode;
- (long long)tv_scaleModeWithDefaultMode:(long long)arg1;
- (long long)tv_semanticContentAttribute;
- (id)itemElementsOfType:(unsigned long long)arg1;
- (unsigned long long)tv_elementType;
- (id)tv_associatedViewElementWithDefaultClass:(Class)arg1;
- (id)tv_associatedViewElement;
@property(nonatomic, setter=tv_setProxyView:) __weak id tv_proxyView;
@end
