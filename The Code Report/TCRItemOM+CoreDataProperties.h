//
//  TCRItemOM+CoreDataProperties.h
//  The Code Report
//
//  Created by Steve Ewell on 9/3/15.
//  Copyright © 2015 Steve Ewell. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "TCRItemOM.h"

NS_ASSUME_NONNULL_BEGIN

@interface TCRItemOM (CoreDataProperties)

@property (nullable, nonatomic, retain) NSString *itemDescription;
@property (nullable, nonatomic, retain) NSNumber *itemNumber;
@property (nullable, nonatomic, retain) NSNumber *pendingDelete;
@property (nullable, nonatomic, retain) NSDate *lastUpdated;
@property (nullable, nonatomic, retain) NSSet<TCRDateOM *> *itemExpDates;
@property (nullable, nonatomic, retain) TCRDepartmentOM *itemDpt;

@end

@interface TCRItemOM (CoreDataGeneratedAccessors)

- (void)addItemExpDatesObject:(TCRDateOM *)value;
- (void)removeItemExpDatesObject:(TCRDateOM *)value;
- (void)addItemExpDates:(NSSet<TCRDateOM *> *)values;
- (void)removeItemExpDates:(NSSet<TCRDateOM *> *)values;

@end

NS_ASSUME_NONNULL_END
