//
//  AppDelegate.m
//  UIMenuBarDemo
//
//  Created by su xinde on 13-3-10.
//
//

#import "AppDelegate.h"

#import "ViewController.h"

@implementation AppDelegate
@synthesize window = _window;


- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
{
    self.window = [[UIWindow alloc] initWithFrame:[[UIScreen mainScreen] bounds]];
    // Override point for customization after application launch.
    self.window.backgroundColor = [UIColor whiteColor];
    
    ViewController *controller = [[ViewController alloc] init];
    UINavigationController *nav = [[UINavigationController alloc] initWithRootViewController:controller];
    self.window.rootViewController = nav;
    
    [self.window makeKeyAndVisible];
    return YES;
}


@end
