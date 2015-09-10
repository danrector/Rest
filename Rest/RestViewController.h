//
//  RestViewController.h
//  Rest
//
//  Created by Daniel Rector on 9/10/15.
//  Copyright (c) 2015 Spring. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RestViewController : UIViewController

@property (nonatomic, strong) IBOutlet UILabel *greetingId;
@property (nonatomic, strong) IBOutlet UILabel *greetingContent;

- (IBAction)fetchGreeting;

@end