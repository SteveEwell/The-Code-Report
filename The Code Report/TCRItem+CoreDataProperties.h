//
//  TCRItem+CoreDataProperties.h
//  The Code Report
//
//  Created by Steve Ewell on 9/12/15.
//  Copyright © 2015 Steve Ewell. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "TCRItem.h"

NS_ASSUME_NONNULL_BEGIN

@interface TCRItem (CoreDataProperties)

@property (nullable, nonatomic, retain) NSString *itemDescription;
@property (nullable, nonatomic, retain) NSNumber *itemNumber;
@property (nullable, nonatomic, retain) NSDate *lastUpdated;
@property (nullable, nonatomic, retain) NSNumber *pendingDelete;
@property (nullable, nonatomic, retain) TCRDepartment *itemDpt;
@property (nullable, nonatomic, retain) NSSet<TCRDate *> *itemExpDates;

@end

@interface TCRItem (CoreDataGeneratedAccessors)

- (void)addItemExpDatesObject:(TCRDate *)value;
- (void)removeItemExpDatesObject:(TCRDate *)value;
- (void)addItemExpDates:(NSSet<TCRDate *> *)values;
- (void)removeItemExpDates:(NSSet<TCRDate *> *)values;

@end

NS_ASSUME_NONNULL_END
