//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface JTCaptureDefaultSetting : NSObject
{
    BOOL _defaultValueOfPlaySound;
    BOOL _defaultValueOfResolution;
    BOOL _defaultValueOfRunAlone;
    unsigned long long _defaultValueOfFileType;
    NSString *_defaultValueOfSavePath;
    NSString *_defaultValueOfFileNamePrefix;
    NSString *_defaultValueOfChannel;
}

+ (id)sharedInstance;
@property(nonatomic) BOOL defaultValueOfRunAlone; // @synthesize defaultValueOfRunAlone=_defaultValueOfRunAlone;
@property(retain, nonatomic) NSString *defaultValueOfChannel; // @synthesize defaultValueOfChannel=_defaultValueOfChannel;
@property(retain, nonatomic) NSString *defaultValueOfFileNamePrefix; // @synthesize defaultValueOfFileNamePrefix=_defaultValueOfFileNamePrefix;
@property(retain, nonatomic) NSString *defaultValueOfSavePath; // @synthesize defaultValueOfSavePath=_defaultValueOfSavePath;
@property(nonatomic) BOOL defaultValueOfResolution; // @synthesize defaultValueOfResolution=_defaultValueOfResolution;
@property(nonatomic) unsigned long long defaultValueOfFileType; // @synthesize defaultValueOfFileType=_defaultValueOfFileType;
@property(nonatomic) BOOL defaultValueOfPlaySound; // @synthesize defaultValueOfPlaySound=_defaultValueOfPlaySound;
- (void).cxx_destruct;

@end
