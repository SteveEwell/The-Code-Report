//
//  AppDelegate.h
//  The Code Report
//
//  Created by Steve Ewell on 9/1/15.
//  Copyright © 2015 Steve Ewell. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TCRPersistentStack.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (strong, nonatomic) TCRPersistentStack *persistentStack;


@end

