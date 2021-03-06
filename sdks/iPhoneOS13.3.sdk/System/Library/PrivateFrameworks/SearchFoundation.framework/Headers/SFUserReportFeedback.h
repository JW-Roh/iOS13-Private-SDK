//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/SFFeedback.h>


@class SFCardSection, SFPunchout, SFSearchResult;

@interface SFUserReportFeedback : SFFeedback <NSCopying>
{
    SFSearchResult *_result;
    SFCardSection *_cardSection;
    SFPunchout *_userSelection;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) SFPunchout *userSelection; // @synthesize userSelection=_userSelection;
@property(retain, nonatomic) SFCardSection *cardSection; // @synthesize cardSection=_cardSection;
@property(retain, nonatomic) SFSearchResult *result; // @synthesize result=_result;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithSelection:(id)arg1 result:(id)arg2 cardSection:(id)arg3;

@end

