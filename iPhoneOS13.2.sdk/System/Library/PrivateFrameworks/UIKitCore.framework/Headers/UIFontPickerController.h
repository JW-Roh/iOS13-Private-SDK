//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIFontPicker-Protocol.h>
#import <UIKitCore/UIFontPickerDelegate-Protocol.h>

@class NSString, UIFontDescriptor, UIFontPickerViewController;
@protocol UIFontPickerDelegate;

@interface UIFontPickerController : NSObject <UIFontPickerDelegate, UIFontPicker>
{
    UIFontPickerController *_strongSelf;
    UIFontPickerViewController *_pickerController;
    id <UIFontPickerDelegate> _delegate;
    unsigned long long _mode;
    UIFontDescriptor *_selectedFontDescriptor;
}

@property(retain, nonatomic) UIFontDescriptor *selectedFontDescriptor; // @synthesize selectedFontDescriptor=_selectedFontDescriptor;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(nonatomic) __weak id <UIFontPickerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIFontDescriptor *selectedFont;
- (void)fontPickerDidPickFont:(id)arg1;
- (void)fontPickerWasCancelled:(id)arg1;
- (_Bool)presentFontPickerFromBarButtonItem:(id)arg1 animated:(_Bool)arg2;
- (_Bool)presentFontPickerFromRect:(struct CGRect)arg1 inView:(id)arg2 animated:(_Bool)arg3;
- (id)remoteViewController;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
