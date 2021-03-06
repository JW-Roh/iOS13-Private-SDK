//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/ENNoteStoreClient.h>

@class ENLinkedNotebookRef;
@protocol ENLinkedNoteStoreClientDelegate;

@interface ENLinkedNoteStoreClient : ENNoteStoreClient
{
    id <ENLinkedNoteStoreClientDelegate> _delegate;
    ENLinkedNotebookRef *_linkedNotebookRef;
}

+ (id)noteStoreClientForLinkedNotebookRef:(id)arg1;
@property(retain, nonatomic) ENLinkedNotebookRef *linkedNotebookRef; // @synthesize linkedNotebookRef=_linkedNotebookRef;
@property(nonatomic) __weak id <ENLinkedNoteStoreClientDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (id)noteStoreUrl;
- (id)authenticationToken;

@end

