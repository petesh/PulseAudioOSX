/***
 This file is part of PulseAudioOSX
 
 Copyright 2010,2011 Daniel Mack <pulseaudio@zonque.de>
 
 PulseAudioOSX is free software; you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation; either version 2.1 of the License, or
 (at your option) any later version.
 ***/

#import <Foundation/Foundation.h>
#import "PAElementInfo.h"

@class PAServerConnection;

@interface PASinkInfo : PAElementInfo
{
	NSString *name;
	NSString *description;
	NSString *sampleSpec;
	NSString *channelMap;
	NSString *driver;
	
	NSArray *channelNames;
	
	UInt32 index;
	UInt32 latency;
	UInt32 configuredLatency;
	UInt32 nVolumeSteps;
	UInt32 volume;
	UInt32 monitorSourceIndex;
	
	NSDictionary *properties;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *sampleSpec;
@property (nonatomic, readonly) NSString *channelMap;
@property (nonatomic, readonly) NSString *driver;
@property (nonatomic, readonly) NSArray *channelNames;
@property (nonatomic, readonly) UInt32 index;
@property (nonatomic, readonly) UInt32 latency;
@property (nonatomic, readonly) UInt32 configuredLatency;
@property (nonatomic, readonly) UInt32 nVolumeSteps;
@property (nonatomic, readonly) UInt32 volume;
@property (nonatomic, readonly) UInt32 monitorSourceIndex;
@property (nonatomic, readonly) NSDictionary *properties;

@end

