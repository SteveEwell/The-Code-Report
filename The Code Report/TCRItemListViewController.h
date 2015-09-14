//
//  TCRItemListViewController.h
//  The Code Report
//
//  Created by Steve Ewell on 9/2/15.
//  Copyright © 2015 Steve Ewell. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>
#import "TCRItemDetailViewController.h"

@class TCRItem;

@interface TCRItemListViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) TCRItemDetailViewController *itemDetailViewController;
@property (strong, nonatomic) TCRItem *item;

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;

@end
