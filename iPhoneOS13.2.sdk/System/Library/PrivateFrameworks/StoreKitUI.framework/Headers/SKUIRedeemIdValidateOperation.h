//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

#import <StoreKitUI/ISDialogOperationDelegate-Protocol.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface SKUIRedeemIdValidateOperation : ISOperation <ISDialogOperationDelegate>
{
    id /* block */ _resultBlock;
    NSDictionary *_dictionary;
}

@property(retain, nonatomic) NSDictionary *dictionary; // @synthesize dictionary=_dictionary;
@property(copy) id /* block */ resultBlock; // @synthesize resultBlock=_resultBlock;
- (void)_logResultsForSuccess:(_Bool)arg1 failureReason:(id)arg2 failureMessage:(id)arg3 error:(id)arg4;
- (id)_subOperation;
- (void)operation:(id)arg1 selectedButton:(id)arg2;
- (void)_handleFailure:(id)arg1 serverDialogDictionary:(id)arg2;
- (void)main;
- (id)initWithDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
