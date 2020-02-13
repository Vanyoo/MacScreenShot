//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSButton.h"

@class NSColor, NSTrackingArea;

@interface JTPopoverFontSizeButton : NSButton
{
    BOOL _isBorder;
    BOOL _isHover;
    NSColor *_hoverColor;
    NSColor *_borderColor;
    NSColor *_fillColor;
    NSColor *_fontColor;
    NSTrackingArea *_trackingArea;
    unsigned long long _fontSize;
}

@property(nonatomic) unsigned long long fontSize; // @synthesize fontSize=_fontSize;
@property(retain, nonatomic) NSTrackingArea *trackingArea; // @synthesize trackingArea=_trackingArea;
@property(retain, nonatomic) NSColor *fontColor; // @synthesize fontColor=_fontColor;
@property(retain, nonatomic) NSColor *fillColor; // @synthesize fillColor=_fillColor;
@property(retain, nonatomic) NSColor *borderColor; // @synthesize borderColor=_borderColor;
@property(retain, nonatomic) NSColor *hoverColor; // @synthesize hoverColor=_hoverColor;
@property(nonatomic) BOOL isHover; // @synthesize isHover=_isHover;
@property(nonatomic) BOOL isBorder; // @synthesize isBorder=_isBorder;
- (void).cxx_destruct;
- (void)configAppearanceAndLayout;
- (void)mouseUp:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
