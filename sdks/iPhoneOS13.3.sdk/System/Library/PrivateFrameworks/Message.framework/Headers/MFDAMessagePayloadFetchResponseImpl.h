//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Message/MFDAMessagePayloadFetchResponse-Protocol.h>

@class NSData;

@interface MFDAMessagePayloadFetchResponseImpl : NSObject <MFDAMessagePayloadFetchResponse>
{
    BOOL streaming;
    BOOL streamingDone;
    NSData *data;
}

// - (void).cxx_destruct;
- (id)data;
- (BOOL)streamingDone;
- (BOOL)streaming;
- (id)initWithData:(id)arg1 streaming:(BOOL)arg2 streamingDone:(BOOL)arg3;

@end

