//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosGraph/PGQuestionFactory-Protocol.h>

@class PGManager;

@interface PGQuestionNamingFactory : NSObject <PGQuestionFactory>
{
    PGManager *_manager;
}

// - (void).cxx_destruct;
- (id)generateQuestionsWithPersons:(id)arg1;
- (id)initWithManager:(id)arg1;

@end

