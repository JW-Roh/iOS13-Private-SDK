//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ScreenshotServices/BSXPCCoding-Protocol.h>
#import <ScreenshotServices/SSLoggable-Protocol.h>

@class BSSettings, NSString, SSHarvestedApplicationMetadata;

@interface SSEnvironmentElementMetadataUpdate : NSObject <BSXPCCoding, SSLoggable>
{
    NSString *_environmentElementIdentifier;
    SSHarvestedApplicationMetadata *_metadata;
}

@property(retain, nonatomic) SSHarvestedApplicationMetadata *metadata; // @synthesize metadata=_metadata;
@property(copy, nonatomic) NSString *environmentElementIdentifier; // @synthesize environmentElementIdentifier=_environmentElementIdentifier;
@property(readonly, nonatomic) NSString *loggableDescription;
@property(readonly, nonatomic) BSSettings *bsSettings;
- (id)initWithXPCDictionary:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
