//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray;
@protocol CRCard, CRCardSection;

@protocol CRKCardSectionViewProviding <NSObject>
@property(readonly, nonatomic) NSArray *viewConfigurations;
@property(readonly, nonatomic) id <CRCard> card;

@optional
- (BOOL)vetoDisplayOfCardSection:(id <CRCardSection>)arg1;
- (NSUInteger)displayPriorityForCardSection:(id <CRCardSection>)arg1;
@end

