//
//  AppDelegate.m
//  The Code Report
//
//  Created by Steve Ewell on 9/1/15.
//  Copyright © 2015 Steve Ewell. All rights reserved.
//

#import "AppDelegate.h"

@interface AppDelegate ()

- (void)createObjects;
- (void)fetchObjects;

@end

@implementation AppDelegate


- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    // Override point for customization after application launch.
    self.persistentStack = [[TCRPersistentStack alloc]init];
    return YES;
}

- (void)applicationWillResignActive:(UIApplication *)application {
    // Sent when the application is about to move from active to inactive state. This can occur for certain types of temporary interruptions (such as an incoming phone call or SMS message) or when the user quits the application and it begins the transition to the background state.
    // Use this method to pause ongoing tasks, disable timers, and throttle down OpenGL ES frame rates. Games should use this method to pause the game.
}

- (void)applicationDidEnterBackground:(UIApplication *)application {
    // Use this method to release shared resources, save user data, invalidate timers, and store enough application state information to restore your application to its current state in case it is terminated later.
    // If your application supports background execution, this method is called instead of applicationWillTerminate: when the user quits.
}

- (void)applicationWillEnterForeground:(UIApplication *)application {
    // Called as part of the transition from the background to the inactive state; here you can undo many of the changes made on entering the background.
}

- (void)applicationDidBecomeActive:(UIApplication *)application {
    // Restart any tasks that were paused (or not yet started) while the application was inactive. If the application was previously in the background, optionally refresh the user interface.
}

- (void)applicationWillTerminate:(UIApplication *)application {
    // Called when the application is about to terminate. Save data if appropriate. See also applicationDidEnterBackground:.
    [self.persistentStack saveContext];
}

- (void)createObjects {
    NSManagedObject *wholeMilk = [NSEntityDescription insertNewObjectForEntityForName:@"Item" inManagedObjectContext:self.persistentStack.managedObjectContext];
    [wholeMilk setValue:@"Whole Milk" forKey:@"itemDescription"];
    [wholeMilk setValue:@3 forKey:@"itemNumber"];
    [wholeMilk setValue:@NO forKey:@"pendingDelete"];
    
    NSManagedObject *twoPercentMilk = [NSEntityDescription insertNewObjectForEntityForName:@"Item" inManagedObjectContext:self.persistentStack.managedObjectContext];
    [twoPercentMilk setValue:@"Two Percent Milk" forKey:@"itemDescription"];
    [twoPercentMilk setValue:@8 forKey:@"itemNumber"];
    [twoPercentMilk setValue:@NO forKey:@"pendingDelete"];
    [self.persistentStack saveContext];
}

- (void)fetchObjects {
    NSFetchRequest *fetchRequest = [[NSFetchRequest alloc] initWithEntityName:@"Item"];
    NSArray *objects = [self.persistentStack.managedObjectContext executeFetchRequest:fetchRequest error:nil];
    for (NSManagedObject *object in objects) {
        NSLog(@"%@", object);
    }
}

@end
