/***
 This file is part of PulseAudioOSX
 
 Copyright 2010,2011 Daniel Mack <pulseaudio@zonque.de>
 
 PulseAudioOSX is free software; you can redistribute it and/or modify
 it under the terms of the GNU Lesser General Public License (LGPL) as
 published by the Free Software Foundation; either version 2.1 of the
 License, or (at your option) any later version.
 ***/

#import <Foundation/Foundation.h>
#import <pulse/pulseaudio.h>

#import "PAServerConnection.h"
#import "PASinkInputInfo.h"

@interface PASinkInputInfo (internal)

+ (PASinkInputInfo *) createFromInfoStruct: (const pa_sink_input_info *) info
                                    server: (PAServerConnection *) s;

- (void) loadFromInfoStruct: (const pa_sink_input_info *) info;

@end

