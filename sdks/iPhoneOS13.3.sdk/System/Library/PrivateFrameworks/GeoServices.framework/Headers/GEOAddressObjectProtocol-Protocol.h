//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CNPostalAddress, GEOAddress, GEOAddressObject, GEOPDAddress, GEOPDAddressObject, GEOPDEntity, GEOPDPlaceInfo, GEOStructuredAddress, NSDictionary, NSOrderedSet, NSString;

@protocol GEOAddressObjectProtocol <NSObject>
+ (NSString *)libraryVersion;
@property(readonly, nonatomic) int knownAccuracy;
@property(readonly, nonatomic) BOOL hasKnownAccuracy;
@property(readonly, nonatomic) NSString *displayLanguage;
- (NSString *)spokenAddressForLocale:(NSString *)arg1;
- (NSString *)phoneticLocaleIdentifier;
- (NSOrderedSet *)titlesForMapRect:(CDStruct_90e2a262)arg1;
- (NSString *)venueShortAddress;
- (NSString *)venueLevel;
- (NSString *)venueLabel:(long long)arg1;
- (NSString *)venueLabel;
- (NSString *)parkingDisplayName;
- (NSString *)weatherDisplayName;
- (NSString *)cityDisplayNameWithFallback:(BOOL)arg1;
- (NSString *)shortAddress;
- (NSString *)fullAddressNoCurrentCountryWithMultiline:(BOOL)arg1;
- (NSString *)fullAddressWithMultiline:(BOOL)arg1 relative:(GEOAddressObject *)arg2;
- (NSString *)fullAddressWithMultiline:(BOOL)arg1;
- (GEOAddress *)phoneticAddress;
- (NSString *)phoneticName;
- (GEOStructuredAddress *)spokenStructuredAddress;
- (NSString *)spokenAddress;
- (NSString *)spokenName;
- (CNPostalAddress *)cnPostalAddress;
- (NSDictionary *)addressDictionary;
- (GEOAddress *)address;
- (NSString *)name;
- (id)initWithCurrentCountry;
- (id)initWithCNPostalAddress:(CNPostalAddress *)arg1 langauge:(NSString *)arg2 country:(NSString *)arg3 phoneticLocale:(NSString *)arg4;
- (id)initWithContactAddressDictionary:(NSDictionary *)arg1 langauge:(NSString *)arg2 country:(NSString *)arg3 phoneticLocale:(NSString *)arg4;
- (id)initWithPlaceDataAddressObject:(GEOPDAddressObject *)arg1 placeDataAddress:(GEOPDAddress *)arg2 placeDataInfo:(GEOPDPlaceInfo *)arg3 placeDataEntity:(GEOPDEntity *)arg4 language:(NSString *)arg5 country:(NSString *)arg6 phoneticLocale:(NSString *)arg7;
@end

