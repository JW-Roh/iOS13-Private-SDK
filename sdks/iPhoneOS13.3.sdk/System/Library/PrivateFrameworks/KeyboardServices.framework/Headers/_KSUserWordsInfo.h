//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, _KSFileEntry;

@interface _KSUserWordsInfo : NSObject
{
    NSDate *_modifiedDate;
    NSUInteger _size;
    _KSFileEntry *_file;
}

+ (id)infoWithRecord:(id)arg1;
+ (id)infoWithFiles:(id)arg1;
+ (id)filesForLanguage:(id)arg1;
+ (id)keyboardDirectory;
+ (id)keyForData;
+ (id)keyNamesExcludingData;
// - (void).cxx_destruct;
- (id)description;
- (void)saveToRecord:(id)arg1;
- (BOOL)isBetterThan:(id)arg1;
- (id)initWithRecord:(id)arg1;
- (id)initWithFiles:(id)arg1;

@end

