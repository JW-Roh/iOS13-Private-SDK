//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPeerPaymentWebServiceResponse.h>

@interface PKPeerPaymentPerformActionResponse : PKPeerPaymentWebServiceResponse
{
    BOOL _success;
    long long _status;
}

@property(readonly, nonatomic) long long status; // @synthesize status=_status;
@property(readonly, nonatomic) BOOL success; // @synthesize success=_success;
- (id)initWithData:(id)arg1;

@end

