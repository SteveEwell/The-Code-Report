//
//  TCRDepartmentOM+CoreDataProperties.h
//  The Code Report
//
//  Created by Steve Ewell on 9/3/15.
//  Copyright © 2015 Steve Ewell. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "TCRDepartmentOM.h"

NS_ASSUME_NONNULL_BEGIN

@interface TCRDepartmentOM (CoreDataProperties)

@property (nullable, nonatomic, retain) NSString *dptName;
@property (nullable, nonatomic, retain) NSNumber *dptNumber;
@property (nullable, nonatomic, retain) NSSet<TCRItemOM *> *dptItems;

@end

@interface TCRDepartmentOM (CoreDataGeneratedAccessors)

- (void)addDptItemsObject:(TCRItemOM *)value;
- (void)removeDptItemsObject:(TCRItemOM *)value;
- (void)addDptItems:(NSSet<TCRItemOM *> *)values;
- (void)removeDptItems:(NSSet<TCRItemOM *> *)values;

@end

NS_ASSUME_NONNULL_END
