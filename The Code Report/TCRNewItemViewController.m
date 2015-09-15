//
//  TCRNewItemViewController.m
//  The Code Report
//
//  Created by Steve Ewell on 9/15/15.
//  Copyright © 2015 Steve Ewell. All rights reserved.
//

#import "TCRNewItemViewController.h"

@interface TCRNewItemViewController ()
@property (strong, nonatomic) UIToolbar *keyboardToolbar;
@property (strong, nonatomic) UIBarButtonItem *flexBarButton;
@property (strong, nonatomic) UIBarButtonItem *doneButton;
@property (weak, nonatomic) IBOutlet UITextField *editText;

@end

@implementation TCRNewItemViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    self.editText.text = @"123456";
    
    // Uncomment the following line to preserve selection between presentations.
    // self.clearsSelectionOnViewWillAppear = NO;
    
    // Uncomment the following line to display an Edit button in the navigation bar for this view controller.
    // self.navigationItem.rightBarButtonItem = self.editButtonItem;
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (UITableViewCellEditingStyle)tableView:(UITableView *)tableView editingStyleForRowAtIndexPath:(NSIndexPath *)indexPath {
    return UITableViewCellEditingStyleNone;
}

- (IBAction)editItemNumber:(NSObject *)sender {
    self.keyboardToolbar = [[UIToolbar alloc]init];
    [self.keyboardToolbar sizeToFit];
    [self.editText becomeFirstResponder];
    self.flexBarButton = [[UIBarButtonItem alloc]initWithBarButtonSystemItem:UIBarButtonSystemItemFlexibleSpace target:nil action:nil];
    self.doneButton = [[UIBarButtonItem alloc]initWithBarButtonSystemItem:UIBarButtonSystemItemDone target:self action:@selector(doneClicked:)];
    self.keyboardToolbar.items = [[NSArray alloc]initWithObjects:self.flexBarButton, self.doneButton, nil];
    self.editText.inputAccessoryView = self.keyboardToolbar;
    [self.editText becomeFirstResponder];
}

-(IBAction)doneClicked:(NSObject *)sender {
    [self.view endEditing:YES];
}

#pragma mark - Navigation


@end
