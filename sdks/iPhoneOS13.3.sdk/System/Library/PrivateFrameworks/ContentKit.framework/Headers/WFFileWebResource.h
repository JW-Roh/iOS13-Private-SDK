//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContentKit/WFWebResource.h>

@class WFFileRepresentation;

__attribute__((visibility("hidden")))
@interface WFFileWebResource : WFWebResource
{
    WFFileRepresentation *_file;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) WFFileRepresentation *file; // @synthesize file=_file;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)MIMEType;
- (id)data;
- (id)loadInWKWebView:(id)arg1;
- (id)initWithFile:(id)arg1;

@end
