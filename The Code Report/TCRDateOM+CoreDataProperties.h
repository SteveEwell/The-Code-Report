//
//  TCRDateOM+CoreDataProperties.h
//  The Code Report
//
//  Created by Steve Ewell on 9/3/15.
//  Copyright © 2015 Steve Ewell. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "TCRDateOM.h"

NS_ASSUME_NONNULL_BEGIN

@interface TCRDateOM (CoreDataProperties)

@property (nullable, nonatomic, retain) NSDate *expDate;
@property (nullable, nonatomic, retain) TCRItemOM *itemForDate;

@end

NS_ASSUME_NONNULL_END
