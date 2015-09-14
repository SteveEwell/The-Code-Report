//
//  TCRDateListViewController.m
//  The Code Report
//
//  Created by Steve Ewell on 9/3/15.
//  Copyright © 2015 Steve Ewell. All rights reserved.
//

#import "TCRDateListViewController.h"
#import "TCRItemDetailViewController.h"
#import "AppDelegate.h"
#import "TCRItem.h"
#import "TCRDate.h"

@interface TCRDateListViewController ()



@end

@implementation TCRDateListViewController


- (void)viewDidLoad {
    [super viewDidLoad];
    
    self.navigationItem.leftBarButtonItem = self.editButtonItem;
    
    UIBarButtonItem *addButton = [[UIBarButtonItem alloc] initWithBarButtonSystemItem:UIBarButtonSystemItemAdd target:self action:@selector(insertNewDate:)];
    self.navigationItem.rightBarButtonItem = addButton;
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (void)setItem:(id)newItem {
    if (_item != newItem) {
        _item = newItem;
    }
}

- (void)insertNewDate:(id)sender {
    NSOrderedSet *itemSet = [[NSOrderedSet alloc] initWithObject:self.item];
    self.date = [NSEntityDescription insertNewObjectForEntityForName:@"Date" inManagedObjectContext:self.item.managedObjectContext];
    self.date.itemsThatExpire = itemSet;
    self.date.expDate = [NSDate dateWithTimeIntervalSinceNow:arc4random()];
    
    NSError *error = nil;
    if (![self.item.managedObjectContext save:&error]) {
        NSLog(@"Unresolved error %@, %@", error, [error userInfo]);
        abort();
    }
    
    [self.tableView reloadData];
}

#pragma mark - Table View

- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView {
    return 1;
}

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section {
    return [self.item.itemExpDates count];
}

-(UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath {
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:@"DateCell" forIndexPath:indexPath];
    [self configureCell:cell atIndexPath:indexPath];
    return cell;
}

- (void)configureCell:(UITableViewCell *)cell atIndexPath:(NSIndexPath *)indexPath {
    TCRDate *date = [self sortedDates][indexPath.row];
    NSDateFormatter *dateFormatter = [[NSDateFormatter alloc] init];
    [dateFormatter setDateStyle:NSDateFormatterShortStyle];
    [dateFormatter setTimeStyle:NSDateFormatterNoStyle];
    NSString *formattedDateString = [dateFormatter stringFromDate:date.expDate];
    cell.textLabel.text = formattedDateString;
}

- (NSArray *)sortedDates {
    NSSortDescriptor *sortDescripter = [[NSSortDescriptor alloc] initWithKey:@"expDate" ascending:YES];
    return [self.item.itemExpDates sortedArrayUsingDescriptors:@[sortDescripter]];
}



@end
