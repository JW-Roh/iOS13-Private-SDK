//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSCECellValue.h>

__attribute__((visibility("hidden")))
@interface TSCENumberCellValue : TSCECellValue
{
    struct TSCENumberValue *_numberValue;
}

-     // Error parsing type: v24@0:8^{NumberCellValueArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}^{FormatStructArchive}diBBQQ}16, name: encodeToArchive:
- (void)setPopulatedCustomFormat:(id)arg1;
-     // Error parsing type: @32@0:8r^{NumberCellValueArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}^{FormatStructArchive}diBBQQ}16@24, name: initWithArchive:locale:
- (long long)compareToCellValue:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqualToCellValue:(id)arg1;
- (id)canonicalKeyString;
- (id)displayString;
- (id)format;
- (struct TSCENumberValue *)numberValue;
- (struct TSCEValue)tsceValue;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithNumberValue:(struct TSCENumberValue *)arg1 locale:(id)arg2;
- (id)initWithDecimal:(const struct TSUDecimal *)arg1 locale:(id)arg2;
- (id)initWithDouble:(double)arg1 locale:(id)arg2;

@end
