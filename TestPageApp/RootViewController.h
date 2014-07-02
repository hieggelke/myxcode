//
//  RootViewController.h
//  TestPageApp
//
//  Created by Justin Hieggelke on 7/2/14.
//  Copyright (c) 2014 ___JUSTINHIEGGELKE___. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RootViewController : UIViewController <UIPageViewControllerDelegate>

@property (strong, nonatomic) UIPageViewController *pageViewController;

@end
