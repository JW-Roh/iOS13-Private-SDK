//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DataAccess/DAContactsAccountProvider.h>

@interface _DAContactsAccountABLegacyProvider : DAContactsAccountProvider
{
    void _addressBook;
}

@property(readonly, nonatomic) void addressBook; // @synthesize addressBook=_addressBook;
- (id)accountForContainerWithIdentifier:(id)arg1;
- (id)allAccounts;
- (id)accountByCreatingAccountWithExternalIdentifier:(id)arg1;
- (id)fetchedAccountWithExternalIdentifier:(id)arg1;
- (void)dealloc;
- (id)initWithAddressBook:(void )arg1;

@end

