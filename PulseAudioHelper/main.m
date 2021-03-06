#import <Foundation/Foundation.h>
#import <PulseAudio/PAHelperConnection.h>

#import "StatusBar.h"
#import "ServerTask.h"
#import "Preferences.h"
#import "GrowlNotifications.h"
#import "ConnectionServer.h"
#import "ServerConnection.h"

static GrowlNotifications *gn;
static ServerConnection *sc;

int main (int argc, const char * argv[])
{
    NSAutoreleasePool * pool = [[NSAutoreleasePool alloc] init];
    [NSApplication sharedApplication];
    
    Preferences *prefs = [[[Preferences alloc] init] autorelease];
    
    ConnectionServer *server = [[[ConnectionServer alloc] init] autorelease];
    server.preferences = prefs;
    
    gn = [[[GrowlNotifications alloc] initWithPreferences: prefs] autorelease];
    StatusBar *bar = [[[StatusBar alloc] init] autorelease];
    bar.preferences = prefs;
    
    ServerTask *task = [[[ServerTask alloc] initWithPreferences: prefs] autorelease];
    
    sc = [[ServerConnection alloc] initWithPreferences: prefs];
    sc.delegate = server;
    [server start];
    
    [[NSDistributedNotificationCenter defaultCenter] postNotificationName: PAOSX_HelperMsgServiceStarted
                                                                   object: PAOSX_HelperName
                                                                 userInfo: nil
                                                       deliverImmediately: YES];
    
    
    [NSApp setDelegate: bar];
    [NSApp run];
    
    [task stop];
    [pool drain];
    
    return 0;
}
