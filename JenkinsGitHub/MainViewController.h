//
//  MainViewController.h
//  JenkinsGitHub
//
//  Created by Valeriy Kolodiy on 3/4/14.
//  Copyright (c) 2014 n.a. All rights reserved.
//

#import "FlipsideViewController.h"

@interface MainViewController : UIViewController <FlipsideViewControllerDelegate, UIPopoverControllerDelegate>

@property (strong, nonatomic) UIPopoverController *flipsidePopoverController;

@end
