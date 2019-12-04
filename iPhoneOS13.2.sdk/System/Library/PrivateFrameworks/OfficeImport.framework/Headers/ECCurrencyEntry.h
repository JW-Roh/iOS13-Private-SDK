//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface ECCurrencyEntry : NSObject
{
    NSString *mLassoCurrencyCode;
    NSString *mXlLangId;
    NSString *mXlCurrencySymbol;
    _Bool mAppliesToExport;
    int mXlAccountingFormat;
}

+ (id)currencyWithLassoCode:(id)arg1 langId:(int)arg2 xlSymbol:(id)arg3 isExport:(_Bool)arg4 accountingFormat:(int)arg5;
+ (id)currencyWithLassoCode:(id)arg1 langId:(int)arg2 xlSymbol:(id)arg3 isExport:(_Bool)arg4;
+ (id)currencyWithLassoCode:(id)arg1 langId:(int)arg2 xlSymbol:(id)arg3 accountingFormat:(int)arg4;
+ (id)currencyWithLassoCode:(id)arg1 langId:(int)arg2 xlSymbol:(id)arg3;
- (id)initWithLassoCode:(id)arg1 langId:(int)arg2 xlSymbol:(id)arg3 isExport:(_Bool)arg4 accountingFormat:(int)arg5;

@end
