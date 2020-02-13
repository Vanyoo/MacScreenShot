//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JTSwitchPanelDelegate.h"

@class NSMutableArray, NSString;

@interface JTSwitchMangager : NSObject <JTSwitchPanelDelegate>
{
    id <JTSwitchMangagerDelegate> _delegate;
    NSMutableArray *_panels;
}

@property(retain, nonatomic) NSMutableArray *panels; // @synthesize panels=_panels;
@property(nonatomic) __weak id <JTSwitchMangagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)prepareToRecord;
- (void)changeToRecord;
- (void)hide;
- (void)show;
- (void)setupWindowsWithFrame:(struct CGRect)arg1 screen:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
