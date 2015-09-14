//
//  TCRDate+CoreDataProperties.h
//  The Code Report
//
//  Created by Steve Ewell on 9/12/15.
//  Copyright © 2015 Steve Ewell. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "TCRDate.h"

NS_ASSUME_NONNULL_BEGIN

@interface TCRDate (CoreDataProperties)

@property (nullable, nonatomic, retain) NSDate *expDate;
@property (nullable, nonatomic, retain) NSOrderedSet<TCRItem *> *itemsThatExpire;

@end

@interface TCRDate (CoreDataGeneratedAccessors)

- (void)insertObject:(TCRItem *)value inItemsThatExpireAtIndex:(NSUInteger)idx;
- (void)removeObjectFromItemsThatExpireAtIndex:(NSUInteger)idx;
- (void)insertItemsThatExpire:(NSArray<TCRItem *> *)value atIndexes:(NSIndexSet *)indexes;
- (void)removeItemsThatExpireAtIndexes:(NSIndexSet *)indexes;
- (void)replaceObjectInItemsThatExpireAtIndex:(NSUInteger)idx withObject:(TCRItem *)value;
- (void)replaceItemsThatExpireAtIndexes:(NSIndexSet *)indexes withItemsThatExpire:(NSArray<TCRItem *> *)values;
- (void)addItemsThatExpireObject:(TCRItem *)value;
- (void)removeItemsThatExpireObject:(TCRItem *)value;
- (void)addItemsThatExpire:(NSOrderedSet<TCRItem *> *)values;
- (void)removeItemsThatExpire:(NSOrderedSet<TCRItem *> *)values;

@end

NS_ASSUME_NONNULL_END
