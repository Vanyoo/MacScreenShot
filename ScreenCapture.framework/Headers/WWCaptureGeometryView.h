//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSColor, WWCaptureGrabAreaView;

@interface WWCaptureGeometryView : NSView
{
    BOOL _isSelected;
    BOOL _isHover;
    BOOL _resizeble;
    BOOL _draged;
    BOOL _allowAntialiasing;
    float _lineWidth;
    int _textSize;
    int _viewMode;
    float _sensitivity;
    int _viewType;
    float _flatNess;
    int _quality;
    NSColor *_selectedBorderColor;
    NSColor *_cornerColor;
    NSColor *_lineColor;
    WWCaptureGrabAreaView *_grabAreaView;
    struct CGPoint _initPoint;
    struct CGRect _invalidRect;
}

@property __weak WWCaptureGrabAreaView *grabAreaView; // @synthesize grabAreaView=_grabAreaView;
@property BOOL allowAntialiasing; // @synthesize allowAntialiasing=_allowAntialiasing;
@property int quality; // @synthesize quality=_quality;
@property float flatNess; // @synthesize flatNess=_flatNess;
@property int viewType; // @synthesize viewType=_viewType;
@property BOOL draged; // @synthesize draged=_draged;
@property BOOL resizeble; // @synthesize resizeble=_resizeble;
@property float sensitivity; // @synthesize sensitivity=_sensitivity;
@property struct CGPoint initPoint; // @synthesize initPoint=_initPoint;
@property int viewMode; // @synthesize viewMode=_viewMode;
@property int textSize; // @synthesize textSize=_textSize;
@property(nonatomic) float lineWidth; // @synthesize lineWidth=_lineWidth;
@property(retain, nonatomic) NSColor *lineColor; // @synthesize lineColor=_lineColor;
@property(retain) NSColor *cornerColor; // @synthesize cornerColor=_cornerColor;
@property(retain) NSColor *selectedBorderColor; // @synthesize selectedBorderColor=_selectedBorderColor;
@property BOOL isHover; // @synthesize isHover=_isHover;
@property BOOL isSelected; // @synthesize isSelected=_isSelected;
- (void).cxx_destruct;
- (BOOL)hasContent;
- (id)cornerCursor:(int)arg1;
- (void)viewMouseDragged:(id)arg1;
- (BOOL)becomeFirstResponder;
- (BOOL)acceptsFirstResponder;
- (void)setSelected:(BOOL)arg1;
- (void)resetCursorRects;
- (int)cornerType:(struct CGPoint)arg1;
- (struct CGRect)cornerArea:(int)arg1 withRadius:(float)arg2;
- (void)viewMouseDown:(id)arg1;
@property struct CGRect invalidRect; // @synthesize invalidRect=_invalidRect;
- (BOOL)invalidRectContainPoint:(struct CGPoint)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

