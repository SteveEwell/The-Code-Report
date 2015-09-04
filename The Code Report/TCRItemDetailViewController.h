//
//  TCRItemDetailViewController.h
//  The Code Report
//
//  Created by Steve Ewell on 9/2/15.
//  Copyright © 2015 Steve Ewell. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TCRDateListViewController.h"

@class TCRItemOM;

@interface TCRItemDetailViewController : UIViewController

@property (weak, nonatomic) IBOutlet UILabel *numberLabel;
@property (weak, nonatomic) IBOutlet UILabel *descriptionLabel;
@property (strong, nonatomic) TCRItemOM *item;
@property (strong, nonatomic) TCRDateListViewController *dateListViewController;
@property (strong, nonatomic) UINavigationController *dateListViewControllerNC;


@end
