//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIArchiveItem : NSObject
{
    BOOL _fileSizeIsSet;
    BOOL _isAppleDoubleFile;
    NSString *_pathInArchive;
    NSString *_fileType;
    NSUInteger _fileSize;
    NSString *_pathToAppleDoubleRealFileCounterpart;
}

@property(retain, nonatomic) NSString *pathToAppleDoubleRealFileCounterpart; // @synthesize pathToAppleDoubleRealFileCounterpart=_pathToAppleDoubleRealFileCounterpart;
@property(nonatomic) BOOL isAppleDoubleFile; // @synthesize isAppleDoubleFile=_isAppleDoubleFile;
@property(nonatomic) BOOL fileSizeIsSet; // @synthesize fileSizeIsSet=_fileSizeIsSet;
@property(nonatomic) NSUInteger fileSize; // @synthesize fileSize=_fileSize;
@property(retain, nonatomic) NSString *fileType; // @synthesize fileType=_fileType;
@property(retain, nonatomic) NSString *pathInArchive; // @synthesize pathInArchive=_pathInArchive;
// - (void).cxx_destruct;
- (id)description;

@end

