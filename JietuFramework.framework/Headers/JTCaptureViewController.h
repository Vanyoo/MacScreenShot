//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "JTCaptureViewDelegate.h"

@class JTCaptureMagnifierView, JTCaptureSizeInfoView, JTCaptureView, JTEditViewController, JTToolbarWindowController, NSImage, NSImageView, NSString;

@interface JTCaptureViewController : NSViewController <JTCaptureViewDelegate>
{
    BOOL _needScreenCapture;
    id <JTCaptureViewControllerDelegate> _delegate;
    NSImageView *_backgroundImageView;
    JTCaptureView *_captureView;
    JTCaptureMagnifierView *_magifierView;
    JTCaptureSizeInfoView *_sizeInfoView;
    JTToolbarWindowController *_toolbarWindowController;
    JTEditViewController *_editViewController;
    NSImage *_imageCaptured;
}

@property(retain, nonatomic) NSImage *imageCaptured; // @synthesize imageCaptured=_imageCaptured;
@property(nonatomic) BOOL needScreenCapture; // @synthesize needScreenCapture=_needScreenCapture;
@property(retain, nonatomic) JTEditViewController *editViewController; // @synthesize editViewController=_editViewController;
@property(retain, nonatomic) JTToolbarWindowController *toolbarWindowController; // @synthesize toolbarWindowController=_toolbarWindowController;
@property(retain, nonatomic) JTCaptureSizeInfoView *sizeInfoView; // @synthesize sizeInfoView=_sizeInfoView;
@property(retain, nonatomic) JTCaptureMagnifierView *magifierView; // @synthesize magifierView=_magifierView;
@property(retain, nonatomic) JTCaptureView *captureView; // @synthesize captureView=_captureView;
@property(retain, nonatomic) NSImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(nonatomic) __weak id <JTCaptureViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)prepareToRecord:(id)arg1;
- (void)editDidBegin:(id)arg1;
- (void)handleReceivedConfirmSelectionNotification:(id)arg1;
- (void)captureDidFinish:(id)arg1;
- (void)finishCapture;
- (void)prepareForCapture;
- (id)generateCapturedImage;
- (struct CGPoint)findToolbarPosition;
- (void)hideToolbar;
- (void)showToolbar;
- (void)gotActiveWindowInfo:(id)arg1;
- (id)windowInfoAtPostion:(struct CGPoint)arg1;
- (void)mouseLocationDidUpdate:(struct CGPoint)arg1 needShowMagnifier:(BOOL)arg2;
- (void)selectionDidChange;
- (void)didConfirmSelection;
- (BOOL)needSelectRect;
- (void)setupMagnifierViewWithScreenImage:(id)arg1;
- (void)setupCaptureView;
- (void)configAppearanceAndLayout;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 screenImage:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

