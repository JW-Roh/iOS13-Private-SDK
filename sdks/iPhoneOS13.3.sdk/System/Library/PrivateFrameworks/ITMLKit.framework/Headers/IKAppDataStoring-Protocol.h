//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSDictionary, NSString;

@protocol IKAppDataStoring <NSObject>
- (void)clear;
- (void)removeDataForKey:(NSString *)arg1;
- (NSUInteger)setData:(NSString *)arg1 forKey:(NSString *)arg2;
- (NSString *)getDataForKey:(NSString *)arg1;
- (NSString *)keyAtIndex:(NSUInteger)arg1;
- (NSUInteger)count;

@optional
- (NSDictionary *)dictionaryRepresentation;
@end
