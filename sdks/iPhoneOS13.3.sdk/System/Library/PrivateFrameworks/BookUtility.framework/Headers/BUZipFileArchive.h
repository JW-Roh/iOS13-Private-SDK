//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BookUtility/BUZipArchive.h>

@class BUZipFileDescriptorWrapper, NSObject, NSURL;
@protocol OS_dispatch_queue;

@interface BUZipFileArchive : BUZipArchive
{
    NSUInteger _archiveLength;
    NSObject<OS_dispatch_queue> *_accessQueue;
    BUZipFileDescriptorWrapper *_fdWrapper;
    NSURL *_temporaryDirectoryURL;
    NSURL *_URL;
}

+ (id)zipArchiveFromURL:(id)arg1 options:(NSUInteger)arg2 error:(id )arg3;
+ (void)readArchiveFromURL:(id)arg1 options:(NSUInteger)arg2 queue:(id)arg3 completion:(id /* CDUnknownBlockType */)arg4;
+ (BOOL)isZipArchiveAtFD:(int)arg1;
+ (BOOL)isZipArchiveAtURL:(id)arg1 error:(id )arg2;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(retain, nonatomic) NSURL *temporaryDirectoryURL; // @synthesize temporaryDirectoryURL=_temporaryDirectoryURL;
@property(retain, nonatomic) BUZipFileDescriptorWrapper *fdWrapper; // @synthesize fdWrapper=_fdWrapper;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // @synthesize accessQueue=_accessQueue;
// - (void).cxx_destruct;
- (id)debugDescription;
- (BOOL)isValid;
- (id)newArchiveReadChannel;
- (NSUInteger)archiveLength;
- (BOOL)copyToTemporaryLocationRelativeToURL:(id)arg1 error:(id )arg2;
- (BOOL)reopenWithTemporaryURL:(id)arg1 error:(id )arg2;
- (void)removeTemporaryDirectory;
- (void)createTemporaryDirectoryRelativeToURL:(id)arg1;
- (void)dealloc;
- (id)initWithWriter:(id)arg1 forReadingFromURL:(id)arg2 options:(NSUInteger)arg3 error:(id )arg4;
- (BOOL)openWithURL:(id)arg1 error:(id )arg2;
- (id)initForReadingFromURL:(id)arg1 options:(NSUInteger)arg2 error:(id )arg3;

@end

