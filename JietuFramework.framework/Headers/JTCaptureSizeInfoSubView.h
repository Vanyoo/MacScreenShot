//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSColor, NSFont, NSString;

@interface JTCaptureSizeInfoSubView : NSView
{
    NSColor *_fontColor;
    NSFont *_font;
    NSString *_sizeInfoStr;
}

@property(retain, nonatomic) NSString *sizeInfoStr; // @synthesize sizeInfoStr=_sizeInfoStr;
@property(retain, nonatomic) NSFont *font; // @synthesize font=_font;
@property(retain, nonatomic) NSColor *fontColor; // @synthesize fontColor=_fontColor;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

