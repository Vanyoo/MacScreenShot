//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSAttributedString, NSColor;

@interface WWCaptureControlContainView : NSView
{
    NSColor *_backColor;
    NSColor *_borderColor;
    NSAttributedString *_text;
    struct CGPoint _location;
}

@property struct CGPoint location; // @synthesize location=_location;
@property(retain, nonatomic) NSAttributedString *text; // @synthesize text=_text;
@property(retain) NSColor *borderColor; // @synthesize borderColor=_borderColor;
@property(retain) NSColor *backColor; // @synthesize backColor=_backColor;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
