//
//  TCRDepartment+CoreDataProperties.h
//  The Code Report
//
//  Created by Steve Ewell on 9/12/15.
//  Copyright © 2015 Steve Ewell. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "TCRDepartment.h"

NS_ASSUME_NONNULL_BEGIN

@interface TCRDepartment (CoreDataProperties)

@property (nullable, nonatomic, retain) NSString *dptName;
@property (nullable, nonatomic, retain) NSNumber *dptNumber;
@property (nullable, nonatomic, retain) NSSet<TCRItem *> *dptItems;

@end

@interface TCRDepartment (CoreDataGeneratedAccessors)

- (void)addDptItemsObject:(TCRItem *)value;
- (void)removeDptItemsObject:(TCRItem *)value;
- (void)addDptItems:(NSSet<TCRItem *> *)values;
- (void)removeDptItems:(NSSet<TCRItem *> *)values;

@end

NS_ASSUME_NONNULL_END
