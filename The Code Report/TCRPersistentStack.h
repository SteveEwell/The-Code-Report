//
//  TCRPersistentStack.h
//  The Code Report
//
//  Created by Steve Ewell on 9/1/15.
//  Copyright © 2015 Steve Ewell. All rights reserved.
//

#import <Foundation/Foundation.h>
@import CoreData;

@interface TCRPersistentStack : NSObject

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationsDocumentDirectory;

@end
