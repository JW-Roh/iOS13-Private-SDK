//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUUID, _DKDataProtectionMaster;

@interface _DKDataProtectionStateMonitor : NSObject
{
    _DKDataProtectionMaster *_master;
    NSUUID *_handlerUUID;
    id /* CDUnknownBlockType */ _changeHandler;
}

// - (void).cxx_destruct;
@property(copy) id /* CDUnknownBlockType */ changeHandler; // @synthesize changeHandler=_changeHandler;
- (BOOL)isDataAvailableFor:(id)arg1;
- (void)dealloc;
- (id)init;

@end

