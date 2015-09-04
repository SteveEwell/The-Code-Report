//
//  TCRDateListViewController.h
//  The Code Report
//
//  Created by Steve Ewell on 9/3/15.
//  Copyright © 2015 Steve Ewell. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@class TCRItemOM;

@interface TCRDateListViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) TCRItemOM *item;


@end
