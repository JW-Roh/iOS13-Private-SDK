//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSTextAttachment, WFTextAttachmentInteraction;

@protocol WFTextAttachmentInteractionDelegate <NSObject>
- (void)textAttachmentInteraction:(WFTextAttachmentInteraction *)arg1 didTapTextAttachment:(NSTextAttachment *)arg2 inCharacterRange:(NSRange)arg3;

@optional
- (BOOL)textAttachmentInteraction:(WFTextAttachmentInteraction *)arg1 shouldRecognizeTapOnTextAttachment:(NSTextAttachment *)arg2 inCharacterRange:(NSRange)arg3;
@end

