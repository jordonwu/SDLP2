//  SDLOnLanguageChange.h
//  SmartDeviceLink
//  Copyright (c) 2013 Ford Motor Company

#import <Foundation/Foundation.h>
#import <SmartDeviceLink/SDLRPCNotification.h>

#import <SmartDeviceLink/SDLLanguage.h>

@interface SDLOnLanguageChange : SDLRPCNotification {}

-(id) init;
-(id) initWithDictionary:(NSMutableDictionary*) dict;

@property(assign) SDLLanguage* language;
@property(assign) SDLLanguage* hmiDisplayLanguage;

@end
