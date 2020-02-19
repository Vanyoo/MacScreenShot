//
//  AppDelegate.m
//  ScreenCaptureTest
//
//

#import "AppDelegate.h"
#import <ScreenCapture/WWCaptureManager.h>
#import <JietuFramework/JTCaptureManager.h>
#import <JietuFramework/JTCaptureRequest.h>
#import <Carbon/Carbon.h>

@interface AppDelegate ()

@property (weak) IBOutlet NSWindow *window;

@property (weak) IBOutlet NSImageView *imageView;

@property (nonatomic, strong) NSStatusItem *statusItem;

@property (nonatomic, assign) BOOL darkModeOn;

@property (nonatomic, strong) WWCaptureManager *dingdingScreenShot;

@property (nonatomic, strong) JTCaptureManager *wechatScreenShot;

@end

//static BOOL g_showFlag = YES;
//static CGEventRef eventCallback(CGEventTapProxy proxy, CGEventType type, CGEventRef event, void *refcon) {
//    if (type > 0 && type <= MIN(kCGEventTapDisabledByTimeout, kCGEventTapDisabledByUserInput)) {
//        NSEvent *theEvent = [NSEvent eventWithCGEvent:event];
//        
//        if ((theEvent.modifierFlags & NSDeviceIndependentModifierFlagsMask) == NSCommandKeyMask) {
//            
//            if (g_showFlag) {
//                
//                [((AppDelegate *)[NSApp delegate]).window orderOut:nil];
//                g_showFlag = NO;
//                
//            } else {
//                
//                [((AppDelegate *)[NSApp delegate]).window orderFront:nil];
//                g_showFlag = YES;
//            }
//            
//            [[WWCaptureManager shareInstance] refreshShowInfo];
//            
//        } else if ((theEvent.modifierFlags & NSCommandKeyMask) && 55 == [theEvent keyCode]) {
//         // cmd + c
//            [[WWCaptureManager shareInstance] startCaptureWithDelegate:[NSApp delegate] fileType:NSJPEGFileType];
//        }
//    }
//    return event; //让事件继续传播
//}

@implementation AppDelegate

/**
 * 这是一个C语言函数
 * 用于处理hot key产生的事件
 */
OSStatus hotKeyHandler(EventHandlerCallRef nextHandler, EventRef anEvent, void *userData) {
    
    EventHotKeyID hotKeyRef;
    
    GetEventParameter(anEvent, kEventParamDirectObject, typeEventHotKeyID, NULL, sizeof(hotKeyRef), NULL, &hotKeyRef);
    
    unsigned int hotKeyId = hotKeyRef.id;
//    NSLog(@"Print hotkeyid : %d", hotKeyId);
    // 截图
    [(AppDelegate *)[[NSApplication sharedApplication] delegate] onButtonAction:hotKeyId];
    return noErr;
}

- (void)registerHotKey {
    
    /**
     * 注册全局Command + Shift + . 截图事件——钉钉截图
     * 注册Command + Shift + / 截图事件——微信截图
     */
    EventHotKeyRef gMyHotKeyRef_period;
    EventHotKeyRef gMyHotKeyRef_slash;
    EventHotKeyID gMyHotKeyID_period;
    EventHotKeyID gMyHotKeyID_slash;
    EventTypeSpec eventType;
    eventType.eventClass = kEventClassKeyboard;
    eventType.eventKind = kEventHotKeyPressed;
    // 快捷键的签名,实际类型为UInt32,所以用4个字符最好
    gMyHotKeyID_period.signature='hkid';
    gMyHotKeyID_slash.signature='hkid';
    // 快捷键的id，处理多个全局快捷键时最好的标识
    gMyHotKeyID_period.id=1;
    gMyHotKeyID_slash.id=2;
    // 通过这个函数向系统注册快捷键 Command + Shift + .
    RegisterEventHotKey(kVK_ANSI_Period, cmdKey + shiftKey, gMyHotKeyID_period, GetApplicationEventTarget(), 0, &gMyHotKeyRef_period);
    // 通过这个函数向系统注册快捷键 Command + Shift + /
    RegisterEventHotKey(kVK_ANSI_Slash, cmdKey + shiftKey, gMyHotKeyID_slash, GetApplicationEventTarget(), 0, &gMyHotKeyRef_slash);
    // 注册回调函数
    InstallApplicationEventHandler(&hotKeyHandler, 1, &eventType, NULL, NULL);
}

/**
 * 设置Status Bar上点击后的菜单
 */
- (NSMenu*) statusBarMenuInit {
    NSMenu *menu = [[NSMenu alloc] init];
    NSMenuItem *quitMenu = [[NSMenuItem alloc] initWithTitle: @"Quit" action: @selector(terminate:) keyEquivalent:@"q"];
    [menu addItem:quitMenu];
    [menu addItem:[NSMenuItem separatorItem]];
    return menu;
}

- (void) statusBarInit {
    // 获取系统的status bar
    self.statusItem = [[NSStatusBar systemStatusBar] statusItemWithLength:NSVariableStatusItemLength];
    
    NSImage *image = [NSImage imageNamed:@"StatusBarWhite"];

    // 设置图片
    [self.statusItem setImage: image];
    
    // 设置点击后的菜单
    [self.statusItem setMenu:[self statusBarMenuInit]];
    
//    CGEventMask eventMask = CGEventMaskBit(kCGEventFlagsChanged);
//    CFMachPortRef eventTap = CGEventTapCreate(kCGHIDEventTap, kCGHeadInsertEventTap, kCGEventTapOptionListenOnly, eventMask, eventCallback, (__bridge void *)(self));
//
//    CFRunLoopSourceRef source = CFMachPortCreateRunLoopSource(kCFAllocatorDefault, eventTap, 0);
//    CFRunLoopAddSource(CFRunLoopGetCurrent(), source, kCFRunLoopCommonModes);
//    CGEventTapEnable(eventTap, true);
//    
//    if (source) {
//        CFRelease(source);
//    }
}

- (void)initializeScreenshots {
    self.dingdingScreenShot = [WWCaptureManager shareInstance];
//    self.wechatScreenShot = [JTCaptureManager sharedInstance];
}

- (void)applicationDidFinishLaunching:(NSNotification *)aNotification {
    // Insert code here to initialize your application
    [self.window orderOut:nil];
    [self initializeScreenshots];
    [self statusBarInit];
    [self registerHotKey];
}

- (void)applicationWillTerminate:(NSNotification *)aNotification {
    // Insert code here to tear down your application
}

- (IBAction)onButtonAction:(unsigned int)sender {
    [self.window orderOut:nil];
    if (sender == 1) {
        NSLog(@"Start dingtalk screen shot");
        [self.dingdingScreenShot startCaptureWithDelegate:self fileType:140615131687984];
    } else if (sender == 2) {
        NSLog(@"Start wechat screen shot");
        self.wechatScreenShot = [JTCaptureManager sharedInstance];
        [self.wechatScreenShot startCaptureByRequest:[JTCaptureRequest sharedInstance]];
    }
}


- (void)grabDidFinish {
    
}

- (void)grabDidFinishSaveAs:(NSData *)imageData {
    
    NSImage *image = [[NSImage alloc] initWithData:imageData];
    self.imageView.image = image;
}

@end
