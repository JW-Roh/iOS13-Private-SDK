//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Stocks/YQLRequest.h>

@class NSArray, NSError;
@protocol StockUpdaterDelegate;

@interface StockUpdater : YQLRequest
{
    NSError *_lastError;
    BOOL _isComprehensive;
    BOOL _forceUpdate;
    id <StockUpdaterDelegate> _delegate;
    NSArray *_requestStocks;
    NSArray *_pendingStocks;
    id /* CDUnknownBlockType */ _updateCompletionHandler;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ updateCompletionHandler; // @synthesize updateCompletionHandler=_updateCompletionHandler;
@property(retain, nonatomic) NSArray *pendingStocks; // @synthesize pendingStocks=_pendingStocks;
@property(retain, nonatomic) NSArray *requestStocks; // @synthesize requestStocks=_requestStocks;
@property(readonly, nonatomic) BOOL forceUpdate; // @synthesize forceUpdate=_forceUpdate;
@property(readonly, nonatomic) BOOL isComprehensive; // @synthesize isComprehensive=_isComprehensive;
@property(nonatomic) __weak id <StockUpdaterDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (id)aggregateDictionaryDomain;
- (void)failWithError:(id)arg1;
- (void)didParseData;
- (BOOL)hadError;
- (void)_parseExchangeDictionaries:(id)arg1;
- (void)_parseQuoteDictionaries:(id)arg1 withDataSourceDictionaries:(id)arg2;
- (void)parseData:(id)arg1;
- (BOOL)_updateStocks:(id)arg1 comprehensive:(BOOL)arg2 forceUpdate:(BOOL)arg3;

@end
