//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSDictionary, NSString, NSURL, NSUUID, NSXPCConnection;

@protocol PKSubsystemServicePersonality <NSObject>
@property(readonly) NSXPCConnection *connection;
@property(readonly) NSDictionary *plugInDictionary;
@property(readonly) NSDictionary *bundleInfoDictionary;
@property(readonly) NSUUID *uuid;
@property(readonly) NSURL *url;
@property(readonly) NSString *version;
@property(readonly) NSString *identifier;
@end

