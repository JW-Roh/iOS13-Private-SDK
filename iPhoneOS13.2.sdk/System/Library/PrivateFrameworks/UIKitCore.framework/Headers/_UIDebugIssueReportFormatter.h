//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIDebugReportFormatter.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIDebugIssueReportFormatter : _UIDebugReportFormatter
{
    NSString *_header;
    NSString *_footer;
    NSString *_noIssuesDescription;
    NSString *_defaultIssuePrefix;
}

@property(copy, nonatomic) NSString *defaultIssuePrefix; // @synthesize defaultIssuePrefix=_defaultIssuePrefix;
@property(copy, nonatomic) NSString *noIssuesDescription; // @synthesize noIssuesDescription=_noIssuesDescription;
@property(copy, nonatomic) NSString *footer; // @synthesize footer=_footer;
@property(copy, nonatomic) NSString *header; // @synthesize header=_header;
// - (void).cxx_destruct;
- (id)stringFromReport:(id)arg1;
- (id)_componentsFromReport:(id)arg1;
- (id)init;

@end
