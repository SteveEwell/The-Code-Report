//
//  TCRItemDetailViewController.m
//  The Code Report
//
//  Created by Steve Ewell on 9/2/15.
//  Copyright © 2015 Steve Ewell. All rights reserved.
//

#import "TCRItemDetailViewController.h"
#import "TCRItemOM.h"

@interface TCRItemDetailViewController ()

@end

@implementation TCRItemDetailViewController

- (void)setItem:(id)newItem {
    if (_item != newItem) {
        _item = newItem;
        
        // Update the view.
        [self configureView];
    }
}

- (void)configureView {
    // Update the user interface for the detail item.
    if (self.item) {
        self.numberLabel.text = [self.item.itemNumber stringValue];
        self.descriptionLabel.text = self.item.itemDescription;
    }
}


- (void)viewDidLoad {
    [super viewDidLoad];
    
    [self configureView];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    if ([[segue identifier] isEqualToString:@"embededSegue"]) {
        TCRItemOM *segueItem = self.item;
        self.dateListViewControllerNC = segue.destinationViewController;
        self.dateListViewController = (TCRDateListViewController *)[self.dateListViewControllerNC visibleViewController];
        [self.dateListViewController setItem:segueItem];
    }
}


@end
