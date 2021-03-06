//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ASDLogFileOptions, NSFileHandle;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface ASDRollableLog : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    double _lastFileStatTime;
    NSFileHandle *_fileHandle;
    NSObject<OS_dispatch_source> *_fileObserverSource;
    ASDLogFileOptions *_options;
}

// - (void).cxx_destruct;
- (void)_rollLogFiles;
- (void)_openLogFile;
- (id)_logFilePathWithIndex:(long long)arg1;
- (void)_closeLogFile;
- (void)_checkLogFileSize;
- (id)_activeLogFilePath;
- (void)writeString:(id)arg1;
@property(readonly) ASDLogFileOptions *logOptions;
- (void)dealloc;
- (id)initWithLogOptions:(id)arg1;

@end

