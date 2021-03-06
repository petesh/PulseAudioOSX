/***
 This file is part of PulseAudioOSX
 
 Copyright 2010,2011 Daniel Mack <pulseaudio@zonque.de>
 
 PulseAudioOSX is free software; you can redistribute it and/or modify
 it under the terms of the GNU Lesser General Public License (LGPL) as
 published by the Free Software Foundation; either version 2.1 of the
 License, or (at your option) any later version.
 ***/

#import "PAElementInfo.h"

@implementation PAElementInfo
@synthesize index;
@synthesize server;
@synthesize name;

- (id) initWithServer: (PAServerConnection *) s
{
    [super init];
    server = s;
    return self;
}

@end

@implementation PAElementInfo (internal)

@end
