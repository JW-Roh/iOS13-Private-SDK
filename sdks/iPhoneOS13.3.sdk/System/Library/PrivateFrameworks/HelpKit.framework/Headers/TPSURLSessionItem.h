//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HelpKit/TPSURLSessionTaskDelegate-Protocol.h>

@class TPSURLSessionTask;

@interface TPSURLSessionItem : NSObject <TPSURLSessionTaskDelegate>
{
    BOOL _cancelled;
    TPSURLSessionTask *_sessionTask;
    id /* CDUnknownBlockType */ _completionHanlder;
}

@property(readonly, nonatomic) id /* CDUnknownBlockType */ completionHanlder; // @synthesize completionHanlder=_completionHanlder;
@property(retain, nonatomic) TPSURLSessionTask *sessionTask; // @synthesize sessionTask=_sessionTask;
@property(nonatomic, getter=isCancelled) BOOL cancelled; // @synthesize cancelled=_cancelled;
// - (void).cxx_destruct;
- (void)URLSessionSessionTask:(id)arg1 didCompleteWithError:(id)arg2;
- (void)notifyWithSessionTask:(id)arg1 error:(id)arg2;
- (void)cancel;
- (void)resume;
@property(readonly, nonatomic) long long state; // @dynamic state;
- (id)initWithSessionTask:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)dealloc;

@end

