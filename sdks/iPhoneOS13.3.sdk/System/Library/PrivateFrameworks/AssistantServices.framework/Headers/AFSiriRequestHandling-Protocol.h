//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class AFSiriRequest;

@protocol AFSiriRequestHandling <NSObject>
- (void)handleSiriRequest:(AFSiriRequest *)arg1 deliveryHandler:(void (^)(void))arg2 completionHandler:(void (^)(AFSiriResponse *, NSError *))arg3;
@end

