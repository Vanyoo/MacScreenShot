//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class WupAgent;

@interface WupService : NSObject
{
    WupAgent *_agent;
}

+ (id)service;
@property(readonly) WupAgent *agent; // @synthesize agent=_agent;
- (void).cxx_destruct;
- (id)initWithAgent:(id)arg1;
- (id)init;

@end
