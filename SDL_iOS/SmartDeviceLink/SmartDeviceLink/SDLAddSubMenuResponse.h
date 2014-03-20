//  SDLAddSubMenuResponse.h
//  SmartDeviceLink
//  Copyright (c) 2013 Ford Motor Company

#import <Foundation/Foundation.h>
#import <SmartDeviceLink/SDLRPCResponse.h>

@interface SDLAddSubMenuResponse : SDLRPCResponse {}

-(id) init;
-(id) initWithDictionary:(NSMutableDictionary*) dict;

@end