//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableSet;

@interface CalDAVChecksumVersionsItem : CoreDAVItem
{
    NSMutableSet *_versionStringsSupported;
}

- (id)copyParseRules;
- (_Bool)supportsVersion:(id)arg1;
- (void)addVersionSupported:(id)arg1;
- (id)init;

@end
